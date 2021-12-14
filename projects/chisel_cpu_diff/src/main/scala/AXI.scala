import chisel3._
import chisel3.util._
import Constant._

trait AxiParameters {
  val AxiAddrWidth = 32
  val AxiDataWidth = 64
  val AxiIdWidth = 4
  val AxiUserWidth = 1
}

object AxiParameters extends AxiParameters { }

class INSTIO extends Bundle with AxiParameters {
  val inst_valid  = Output(Bool())
  val inst_ready  = Input(Bool())
  val inst_req    = Output(Bool())
  val inst_addr   = Output(UInt(AxiAddrWidth.W))   
  val inst_size   = Output(UInt(2.W))
}

class AxiInst extends INSTIO with AxiParameters {
  val inst_read   = Input(UInt(RW_DATA_WIDTH.W))
}

class CoreInst extends INSTIO with AxiParameters {
  val inst_read   = Input(UInt(32.W))
}

class DATAIO extends Bundle with AxiParameters {
  val data_valid  = Output(Bool())
  val data_ready  = Input(Bool())
  val data_req    = Output(Bool())
  val data_addr   = Output(UInt(AxiAddrWidth.W)) 
  val data_size   = Output(UInt(2.W)) 
  val data_strb   = Output(UInt(8.W)) 
}

class AxiData extends DATAIO with AxiParameters {
  val data_read   = Input(UInt(RW_DATA_WIDTH.W))
  val data_write  = Output(UInt(RW_DATA_WIDTH.W)) 
}

class CoreData extends DATAIO with AxiParameters {
  val data_read   = Input(UInt(AxiDataWidth.W))
  val data_write  = Output(UInt(AxiDataWidth.W)) 
}

trait AxiIdUser extends Bundle with AxiParameters {
  val id = Output(UInt(AxiIdWidth.W))
  val user = Output(UInt(AxiUserWidth.W))
}

class AxiLiteA extends Bundle with AxiParameters {
  val addr = Output(UInt(AxiAddrWidth.W))
  val prot = Output(UInt(3.W))
}

class AxiA extends AxiLiteA with AxiIdUser {
  val len = Output(UInt(8.W))
  val size = Output(UInt(3.W))
  val burst = Output(UInt(2.W))
  val lock = Output(Bool())
  val cache = Output(UInt(4.W))
  val qos = Output(UInt(4.W))
}

class AxiLiteW extends Bundle with AxiParameters {
  val data = Output(UInt(AxiDataWidth.W))
  val strb = Output(UInt((AxiDataWidth / 8).W))
}

class AxiW extends AxiLiteW {
  val last = Output(Bool())
}

class AxiLiteB extends Bundle {
  val resp = Output(UInt(2.W))
}

class AxiB extends AxiLiteB with AxiIdUser with AxiParameters { }

class AxiLiteR extends Bundle with AxiParameters {
  val resp = Output(UInt(2.W))
  val data = Output(UInt(AxiDataWidth.W))
}

class AxiR extends AxiLiteR with AxiIdUser {
  val last = Output(Bool())
}

class AxiLiteIO extends Bundle {
  val aw = Decoupled(new AxiLiteA)
  val w = Decoupled(new AxiLiteW)
  val b = Flipped(Decoupled(new AxiLiteB))
  val ar = Decoupled(new AxiLiteA)
  val r = Flipped(Decoupled(new AxiLiteR))
}

class AxiIO extends Bundle {
  val aw = Decoupled(new AxiA)
  val w = Decoupled(new AxiW)
  val b = Flipped(Decoupled(new AxiB))
  val ar = Decoupled(new AxiA)
  val r = Flipped(Decoupled(new AxiR))
}

class AxiLite2Axi extends Module{
  val io = IO(new Bundle {
    val out = new AxiIO
    val imem = Flipped(new AxiInst)
    val dmem = Flipped(new AxiData)
  })

  val out = io.out
  val in1 = io.imem
  val in2 = io.dmem

  val inst_ren = WireInit(false.B)
  val data_ren = WireInit(false.B)
  val data_wen = WireInit(false.B)
  inst_ren := in1.inst_valid && in1.inst_req === REQ_READ
  data_ren := in2.data_valid && in2.data_req === REQ_READ
  data_wen := in2.data_valid && in2.data_req === REQ_WRITE

  val aw_hs      = out.aw.ready && out.aw.valid
  val w_hs       = out.w.ready  && out.w.valid
  val b_hs       = out.b.ready  && out.b.valid
  val ar_hs      = out.ar.ready && out.ar.valid
  val r_hs       = out.r.ready  && out.r.valid

  val w_done     = w_hs && out.w.bits.last
  val r_done     = r_hs && out.r.bits.last

  val r_idle :: r_inst_addr :: r_inst_read :: r_inst_done :: r_data_addr :: r_data_read :: r_data_done :: Nil = Enum(7)
  val r_state = RegInit(r_idle)

  val w_idle :: w_data_addr :: w_data_write :: w_data_resp :: w_data_done :: Nil = Enum(5)
  val w_state = RegInit(w_idle)

  switch (r_state) {
    is (r_idle) {
      when (inst_ren) {
        r_state := r_inst_addr
      }
      .elsewhen (data_ren) {
        r_state := r_data_addr
      }
    }
    is (r_inst_addr) {
      when (ar_hs) {
        r_state := r_inst_read
      }
    }
    is (r_inst_read) {
      when (r_done) {
        r_state := r_inst_done
      }
    }
    is (r_inst_done) {
      when (data_ren) {
        r_state := r_data_addr
      }
      .otherwise {
        r_state := r_idle
      }
    }
    is (r_data_addr) {
      when (ar_hs) {
        r_state := r_data_read
      }
    }
    is (r_data_read) {
      when (r_done) {
        r_state := r_data_done
      }
    }
    is (r_data_done) {
      r_state := r_idle
    }
  }

  switch (w_state) {
    is (w_idle) {
      when (data_wen) {
        w_state := w_data_addr
      }
    }
    is (w_data_addr) {
      when (aw_hs) {
        w_state := w_data_write
      }
    }
    is (w_data_write) {
      when (w_done) {
        w_state := w_data_resp
      }
    }
    is (w_data_resp) {
      when (b_hs) {
        w_state := w_data_done
      }
    }
    is (w_data_done) {
      w_state := r_idle
    }
  }

  val data_ok = RegInit(false.B)
  when (data_wen && w_state === w_data_done) {
    data_ok := true.B
  }
  .elsewhen (!data_wen) {
    data_ok := false.B
  } 

  val axi_addr  = Mux(r_state === r_inst_addr, in1.inst_addr & "hffff_fff0".U(32.W), 
                  Mux(r_state === r_data_addr, in2.data_addr & "hffff_fff0".U(32.W), 0.U))     
  val axi_waddr = Mux(data_ok, Cat(in2.data_addr(31, 4), "b1000".U), in2.data_addr & "hffff_fff0".U(32.W))                            

  // Read address channel signals
  out.ar.valid        := r_state === r_inst_addr || r_state === r_data_addr
  out.ar.bits.addr    := axi_addr
  out.ar.bits.prot    := "b000".U
  out.ar.bits.id      := 0.U
  out.ar.bits.user    := 0.U
  out.ar.bits.len     := 1.U
  out.ar.bits.size    := "b11".U
  out.ar.bits.burst   := "b01".U
  out.ar.bits.lock    := 0.U
  out.ar.bits.cache   := "b0010".U
  out.ar.bits.qos     := 0.U

  // Read data channel signals
  out.r.ready         := true.B

  // write address channel signals
  out.aw.valid        := w_state === w_data_addr
  out.aw.bits.addr    := axi_waddr
  out.aw.bits.prot    := "b000".U
  out.aw.bits.id      := 0.U
  out.aw.bits.user    := 0.U
  out.aw.bits.len     := 0.U
  out.aw.bits.size    := "b11".U
  out.aw.bits.burst   := "b01".U
  out.aw.bits.lock    := 0.U
  out.aw.bits.cache   := "b0010".U
  out.aw.bits.qos     := 0.U

  // write data channel signals
  out.w.valid         := w_state === w_data_write
  out.w.bits.data     := Mux(data_ok, in2.data_write(127,64), in2.data_write(63, 0))
  out.w.bits.strb     := in2.data_strb
  out.w.bits.last     := true.B

  out.b.ready         := true.B


  //in1.inst_read := Mux(in1.inst_addr(2), out.r.bits.data(63, 32), out.r.bits.data(31, 0))
  //in2.data_read := out.r.bits.data

  in1.inst_ready := r_state === r_inst_done
  in2.data_ready := r_state === r_data_done || (w_state === w_data_done && data_ok)

  val inst_read_h = RegInit(0.U(64.W))
  val inst_read_l = RegInit(0.U(64.W))
  val data_read_h = RegInit(0.U(64.W))
  val data_read_l = RegInit(0.U(64.W))

  when (r_hs) {
    when (out.r.bits.last) {
      inst_read_h := out.r.bits.data
      data_read_h := out.r.bits.data
    }
    .otherwise {
      inst_read_l := out.r.bits.data
      data_read_l := out.r.bits.data
    }
  }
  in1.inst_read := Cat(inst_read_h, inst_read_l)
  in2.data_read := Cat(data_read_h, data_read_l)
}