// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIMTOP_H_
#define VERILATED_VSIMTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VSimTop__Syms;
class VSimTop___024root;
class VerilatedVcdC;
class VSimTop___024unit;


// This class is the main interface to the Verilated model
class VSimTop VL_NOT_FINAL {
  public:
    // Symbol table holding complete model state (owned by this class)
    VSimTop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_perfInfo_clean,0,0);
    VL_IN8(&io_perfInfo_dump,0,0);
    VL_OUT8(&io_uart_out_valid,0,0);
    VL_OUT8(&io_uart_out_ch,7,0);
    VL_OUT8(&io_uart_in_valid,0,0);
    VL_IN8(&io_uart_in_ch,7,0);
    VL_IN8(&io_memAXI_0_aw_ready,0,0);
    VL_OUT8(&io_memAXI_0_aw_valid,0,0);
    VL_OUT8(&io_memAXI_0_aw_bits_prot,2,0);
    VL_OUT8(&io_memAXI_0_aw_bits_id,3,0);
    VL_OUT8(&io_memAXI_0_aw_bits_user,0,0);
    VL_OUT8(&io_memAXI_0_aw_bits_len,7,0);
    VL_OUT8(&io_memAXI_0_aw_bits_size,2,0);
    VL_OUT8(&io_memAXI_0_aw_bits_burst,1,0);
    VL_OUT8(&io_memAXI_0_aw_bits_lock,0,0);
    VL_OUT8(&io_memAXI_0_aw_bits_cache,3,0);
    VL_OUT8(&io_memAXI_0_aw_bits_qos,3,0);
    VL_IN8(&io_memAXI_0_w_ready,0,0);
    VL_OUT8(&io_memAXI_0_w_valid,0,0);
    VL_OUT8(&io_memAXI_0_w_bits_strb,7,0);
    VL_OUT8(&io_memAXI_0_w_bits_last,0,0);
    VL_OUT8(&io_memAXI_0_b_ready,0,0);
    VL_IN8(&io_memAXI_0_b_valid,0,0);
    VL_IN8(&io_memAXI_0_b_bits_resp,1,0);
    VL_IN8(&io_memAXI_0_b_bits_id,3,0);
    VL_IN8(&io_memAXI_0_b_bits_user,0,0);
    VL_IN8(&io_memAXI_0_ar_ready,0,0);
    VL_OUT8(&io_memAXI_0_ar_valid,0,0);
    VL_OUT8(&io_memAXI_0_ar_bits_prot,2,0);
    VL_OUT8(&io_memAXI_0_ar_bits_id,3,0);
    VL_OUT8(&io_memAXI_0_ar_bits_user,0,0);
    VL_OUT8(&io_memAXI_0_ar_bits_len,7,0);
    VL_OUT8(&io_memAXI_0_ar_bits_size,2,0);
    VL_OUT8(&io_memAXI_0_ar_bits_burst,1,0);
    VL_OUT8(&io_memAXI_0_ar_bits_lock,0,0);
    VL_OUT8(&io_memAXI_0_ar_bits_cache,3,0);
    VL_OUT8(&io_memAXI_0_ar_bits_qos,3,0);
    VL_OUT8(&io_memAXI_0_r_ready,0,0);
    VL_IN8(&io_memAXI_0_r_valid,0,0);
    VL_IN8(&io_memAXI_0_r_bits_resp,1,0);
    VL_IN8(&io_memAXI_0_r_bits_last,0,0);
    VL_IN8(&io_memAXI_0_r_bits_id,3,0);
    VL_IN8(&io_memAXI_0_r_bits_user,0,0);
    VL_IN64(&io_logCtrl_log_begin,63,0);
    VL_IN64(&io_logCtrl_log_end,63,0);
    VL_IN64(&io_logCtrl_log_level,63,0);
    VL_OUT64(&io_memAXI_0_aw_bits_addr,63,0);
    VL_OUT64(&io_memAXI_0_ar_bits_addr,63,0);
    VL_OUT64((&io_memAXI_0_w_bits_data)[4],63,0);
    VL_IN64((&io_memAXI_0_r_bits_data)[4],63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VSimTop___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VSimTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VSimTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VSimTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VSimTop();
  public:
    VL_UNCOPYABLE(VSimTop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
