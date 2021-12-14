import chisel3._
import chisel3.util._
import difftest._
import Constant._

class SimTop extends Module {
  val io = IO(new Bundle {
    val logCtrl = new LogCtrlIO
    val perfInfo = new PerfInfoIO
    val uart = new UARTIO

    val memAXI_0 = new AxiIO
  })

  val core = Module(new Core)
  val icache = Module(new Icache)
  val dcache = Module(new Dcache)

  val top = Module(new AxiLite2Axi)

  core.io.imem  <> icache.io.imem
  icache.io.out <> top.io.imem
  core.io.dmem  <> dcache.io.dmem
  dcache.io.out <> top.io.dmem

  icache.io.br_stall    := core.io.br_stall


// CORE <> TOP
 // top.io.dmem <> core.io.dmem

// TOP <> AXI
  io.memAXI_0.aw <> top.io.out.aw
  io.memAXI_0.w  <> top.io.out.w
  io.memAXI_0.b  <> top.io.out.b
  io.memAXI_0.ar <> top.io.out.ar
  io.memAXI_0.r  <> top.io.out.r

  io.uart.out.valid := false.B
  io.uart.out.ch := 0.U
  io.uart.in.valid := false.B

}
