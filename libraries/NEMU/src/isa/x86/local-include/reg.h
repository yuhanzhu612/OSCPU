#ifndef __X86_REG_H__
#define __X86_REG_H__

#include <isa.h>

enum { PRIV_IRET };

static inline int check_reg_index(int index) {
  IFDEF(CONFIG_RT_CHECK, assert(index >= 0 && index < 8));
  return index;
}

#define reg_l(index) (cpu.gpr[check_reg_index(index)]._32)
#define reg_w(index) (cpu.gpr[check_reg_index(index)]._16)
#define reg_b(index) (cpu.gpr[check_reg_index(index) & 0x3]._8[index >> 2])

static inline const char* reg_name(int index, int width) {
  extern const char* regsl[];
  extern const char* regsw[];
  extern const char* regsb[];
  IFDEF(CONFIG_RT_CHECK, assert(index >= 0 && index < 8));

  switch (width) {
    case 4: return regsl[index];
    case 1: return regsb[index];
    case 2: return regsw[index];
    default: assert(0);
  }
}

static inline const char* sreg_name(int index) {
  const char *name[] = { "es", "cs", "ss", "ds", "fs", "gs" };
  IFDEF(CONFIG_RT_CHECK, assert(index >= 0 && index < ARRLEN(name)));
  return name[index];
}

#endif
