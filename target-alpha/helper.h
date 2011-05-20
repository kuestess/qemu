#include "def-helper.h"

DEF_HELPER_2(excp, void, int, int)
DEF_HELPER_FLAGS_0(load_pcc, TCG_CALL_CONST | TCG_CALL_PURE, i64)

DEF_HELPER_2(addqv, i64, i64, i64)
DEF_HELPER_2(addlv, i64, i64, i64)
DEF_HELPER_2(subqv, i64, i64, i64)
DEF_HELPER_2(sublv, i64, i64, i64)
DEF_HELPER_2(mullv, i64, i64, i64)
DEF_HELPER_2(mulqv, i64, i64, i64)
DEF_HELPER_FLAGS_2(umulh, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)

DEF_HELPER_FLAGS_1(ctpop, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_1(ctlz, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_1(cttz, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)

DEF_HELPER_FLAGS_2(zap, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(zapnot, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)

DEF_HELPER_FLAGS_2(cmpbge, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)

DEF_HELPER_FLAGS_2(minub8, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(minsb8, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(minuw4, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(minsw4, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(maxub8, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(maxsb8, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(maxuw4, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(maxsw4, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(perr, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_1(pklb, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_1(pkwb, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_1(unpkbl, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_1(unpkbw, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)

DEF_HELPER_FLAGS_0(load_fpcr, TCG_CALL_CONST | TCG_CALL_PURE, i64)
DEF_HELPER_FLAGS_1(store_fpcr, TCG_CALL_CONST, void, i64)

DEF_HELPER_FLAGS_1(f_to_memory, TCG_CALL_CONST | TCG_CALL_PURE, i32, i64)
DEF_HELPER_FLAGS_1(memory_to_f, TCG_CALL_CONST | TCG_CALL_PURE, i64, i32)
DEF_HELPER_FLAGS_2(addf, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(subf, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(mulf, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(divf, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_1(sqrtf, TCG_CALL_CONST, i64, i64)

DEF_HELPER_FLAGS_1(g_to_memory, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_1(memory_to_g, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64)
DEF_HELPER_FLAGS_2(addg, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(subg, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(mulg, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(divg, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_1(sqrtg, TCG_CALL_CONST, i64, i64)

DEF_HELPER_FLAGS_1(s_to_memory, TCG_CALL_CONST | TCG_CALL_PURE, i32, i64)
DEF_HELPER_FLAGS_1(memory_to_s, TCG_CALL_CONST | TCG_CALL_PURE, i64, i32)
DEF_HELPER_FLAGS_2(adds, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(subs, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(muls, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(divs, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_1(sqrts, TCG_CALL_CONST, i64, i64)

DEF_HELPER_FLAGS_2(addt, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(subt, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(mult, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_2(divt, TCG_CALL_CONST, i64, i64, i64)
DEF_HELPER_FLAGS_1(sqrtt, TCG_CALL_CONST, i64, i64)

DEF_HELPER_FLAGS_2(cmptun, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(cmpteq, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(cmptle, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(cmptlt, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(cmpgeq, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(cmpgle, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)
DEF_HELPER_FLAGS_2(cmpglt, TCG_CALL_CONST | TCG_CALL_PURE, i64, i64, i64)

DEF_HELPER_FLAGS_1(cvtts, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtst, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtqs, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtqt, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtqf, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtgf, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtgq, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvtqg, TCG_CALL_CONST, i64, i64)

DEF_HELPER_FLAGS_1(cvttq, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvttq_c, TCG_CALL_CONST, i64, i64)
DEF_HELPER_FLAGS_1(cvttq_svic, TCG_CALL_CONST, i64, i64)

DEF_HELPER_FLAGS_1(setroundmode, TCG_CALL_CONST, void, i32)
DEF_HELPER_FLAGS_1(setflushzero, TCG_CALL_CONST, void, i32)
DEF_HELPER_FLAGS_0(fp_exc_clear, TCG_CALL_CONST, void)
DEF_HELPER_FLAGS_0(fp_exc_get, TCG_CALL_CONST | TCG_CALL_PURE, i32)
DEF_HELPER_2(fp_exc_raise, void, i32, i32)
DEF_HELPER_2(fp_exc_raise_s, void, i32, i32)

DEF_HELPER_1(ieee_input, i64, i64)
DEF_HELPER_1(ieee_input_cmp, i64, i64)
DEF_HELPER_1(ieee_input_s, i64, i64)

#if !defined (CONFIG_USER_ONLY)
DEF_HELPER_1(hw_ret, void, i64)
DEF_HELPER_2(mfpr, i64, int, i64)
DEF_HELPER_2(mtpr, void, int, i64)

DEF_HELPER_1(ldl_phys, i64, i64)
DEF_HELPER_1(ldq_phys, i64, i64)
DEF_HELPER_1(ldl_l_phys, i64, i64)
DEF_HELPER_1(ldq_l_phys, i64, i64)
DEF_HELPER_2(stl_phys, void, i64, i64)
DEF_HELPER_2(stq_phys, void, i64, i64)
DEF_HELPER_2(stl_c_phys, i64, i64, i64)
DEF_HELPER_2(stq_c_phys, i64, i64, i64)
#endif

#include "def-helper.h"
