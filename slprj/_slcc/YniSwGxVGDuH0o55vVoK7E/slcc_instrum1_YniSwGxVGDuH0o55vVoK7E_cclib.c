#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(unsigned int decCovId);

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_81 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_81() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_81 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_83(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(83U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(84U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_83(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(83U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(84U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_88(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(88U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(89U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_88(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(88U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(89U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_81(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(81U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(82U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_81(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(81U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(82U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_124 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_124() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_124 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_126(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(126U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(127U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_126(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(126U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 = 2), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(127U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_131(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(131U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(132U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_131(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(131U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(132U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_124(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(124U), __MW_INSTRUM_RECORD_COMBINATION_HIT_124(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(125U), __MW_INSTRUM_RECORD_COMBINATION_HIT_124(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_124(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(124U), __MW_INSTRUM_RECORD_COMBINATION_HIT_124(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(125U), __MW_INSTRUM_RECORD_COMBINATION_HIT_124(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_154 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_154() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_154 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(156U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(157U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_156(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(156U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(157U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_161(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(161U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(162U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_161(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(161U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(162U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(154U), __MW_INSTRUM_RECORD_COMBINATION_HIT_154(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(155U), __MW_INSTRUM_RECORD_COMBINATION_HIT_154(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_154(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(154U), __MW_INSTRUM_RECORD_COMBINATION_HIT_154(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(155U), __MW_INSTRUM_RECORD_COMBINATION_HIT_154(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_177 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_177() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_177 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_179(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(179U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(180U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_179(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(179U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(180U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_184(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(184U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(185U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_184(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(184U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(185U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_177(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(177U), __MW_INSTRUM_RECORD_COMBINATION_HIT_177(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(178U), __MW_INSTRUM_RECORD_COMBINATION_HIT_177(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_177(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(177U), __MW_INSTRUM_RECORD_COMBINATION_HIT_177(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(178U), __MW_INSTRUM_RECORD_COMBINATION_HIT_177(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_226 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_226() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_226 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_228(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(228U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(229U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_228(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(228U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(229U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_233(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(233U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(234U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_233(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(233U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(234U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_226(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(226U), __MW_INSTRUM_RECORD_COMBINATION_HIT_226(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(227U), __MW_INSTRUM_RECORD_COMBINATION_HIT_226(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_226(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(226U), __MW_INSTRUM_RECORD_COMBINATION_HIT_226(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(227U), __MW_INSTRUM_RECORD_COMBINATION_HIT_226(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_280 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_280() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_280 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_282(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(282U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(283U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_282(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(282U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(283U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_287(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(287U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(288U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_287(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(287U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(288U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_280(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(280U), __MW_INSTRUM_RECORD_COMBINATION_HIT_280(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(281U), __MW_INSTRUM_RECORD_COMBINATION_HIT_280(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_280(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(280U), __MW_INSTRUM_RECORD_COMBINATION_HIT_280(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(281U), __MW_INSTRUM_RECORD_COMBINATION_HIT_280(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_292 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_292() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_292 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_294(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(294U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(295U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_294(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(294U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 = 2), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(295U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_299(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(299U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(300U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_299(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(299U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(300U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_292(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(292U), __MW_INSTRUM_RECORD_COMBINATION_HIT_292(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(293U), __MW_INSTRUM_RECORD_COMBINATION_HIT_292(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_292(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(292U), __MW_INSTRUM_RECORD_COMBINATION_HIT_292(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(293U), __MW_INSTRUM_RECORD_COMBINATION_HIT_292(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_338 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_338() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_338 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_340(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(340U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(341U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_340(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(340U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(341U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_345(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(345U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(346U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_345(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(345U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(346U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_338(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(338U), __MW_INSTRUM_RECORD_COMBINATION_HIT_338(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(339U), __MW_INSTRUM_RECORD_COMBINATION_HIT_338(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_338(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(338U), __MW_INSTRUM_RECORD_COMBINATION_HIT_338(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(339U), __MW_INSTRUM_RECORD_COMBINATION_HIT_338(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_376 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_376() \
  (++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_376 + __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_378(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(378U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(379U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_378(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(378U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 = 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(379U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_383(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(383U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(384U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_383(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(383U), (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 += 1), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(384U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_376(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(376U), __MW_INSTRUM_RECORD_COMBINATION_HIT_376(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(377U), __MW_INSTRUM_RECORD_COMBINATION_HIT_376(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_376(expr) \
  ((expr) ? \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(376U), __MW_INSTRUM_RECORD_COMBINATION_HIT_376(), 1) : 1) : \
   ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(377U), __MW_INSTRUM_RECORD_COMBINATION_HIT_376(), 0) : 0))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() 
#define __MW_INSTRUM_FCN_ENTER_6() 
#define __MW_INSTRUM_FCN_ENTER_7() 
#define __MW_INSTRUM_FCN_ENTER_8() 
#define __MW_INSTRUM_FCN_ENTER_9() 
#define __MW_INSTRUM_FCN_ENTER_10() 
#define __MW_INSTRUM_FCN_ENTER_11() \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_81 = 0; 
#define __MW_INSTRUM_FCN_ENTER_12() 
#define __MW_INSTRUM_FCN_ENTER_13() 
#define __MW_INSTRUM_FCN_ENTER_14() \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_124 = 0; \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_154 = 0; \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_177 = 0; \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_226 = 0; 
#define __MW_INSTRUM_FCN_ENTER_15() 
#define __MW_INSTRUM_FCN_ENTER_16() \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_280 = 0; \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_292 = 0; \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_338 = 0; \
  unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_curr_combination_idx_376 = 0; 
#define __MW_INSTRUM_FCN_ENTER_17() 
#define __MW_INSTRUM_FCN_ENTER_18() 
#define __MW_INSTRUM_FCN_ENTER_19() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_abs_tol, __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(4U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_5(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(5U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(6U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_5(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(5U), 1) : (__MW_INSTRUM_RECORD_HIT(6U), 0))
#endif
#define __MW_INSTRUM_NODE_7(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(7U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(8U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(9U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_10(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(10U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(11U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_10(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(10U), 1) : (__MW_INSTRUM_RECORD_HIT(11U), 0))
#endif
#define __MW_INSTRUM_NODE_12(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(12U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(13U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(14U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_15() \
  (__MW_INSTRUM_RECORD_HIT(15U))
#define __MW_INSTRUM_NODE_11() \
  (__MW_INSTRUM_RECORD_HIT(11U))
#define __MW_INSTRUM_NODE_16() \
  (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_6() \
  (__MW_INSTRUM_RECORD_HIT(6U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_17(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(17U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(18U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_17(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(17U), 1) : (__MW_INSTRUM_RECORD_HIT(18U), 0))
#endif
#define __MW_INSTRUM_NODE_19(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(19U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(20U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(21U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_22() \
  (__MW_INSTRUM_RECORD_HIT(22U))
#define __MW_INSTRUM_NODE_18() \
  (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_23() \
  (__MW_INSTRUM_RECORD_HIT(23U))
#define __MW_INSTRUM_NODE_24() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(24U))
#define __MW_INSTRUM_NODE_25() \
  (__MW_INSTRUM_RECORD_HIT(25U))
#define __MW_INSTRUM_NODE_26() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(26U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(27U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(28U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_27(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(27U), 1) : (__MW_INSTRUM_RECORD_HIT(28U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(29U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(30U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_29(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(29U), 1) : (__MW_INSTRUM_RECORD_HIT(30U), 0))
#endif
#define __MW_INSTRUM_NODE_31(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(31U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(32U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(33U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_34() \
  (__MW_INSTRUM_RECORD_HIT(34U))
#define __MW_INSTRUM_NODE_35() \
  (__MW_INSTRUM_RECORD_HIT(35U))
#define __MW_INSTRUM_NODE_28() \
  (__MW_INSTRUM_RECORD_HIT(28U))
#define __MW_INSTRUM_NODE_36() \
  (__MW_INSTRUM_RECORD_HIT(36U))
#define __MW_INSTRUM_NODE_37() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(37U))
#define __MW_INSTRUM_NODE_38() \
  (__MW_INSTRUM_RECORD_HIT(38U))
#define __MW_INSTRUM_NODE_39() \
  (__MW_INSTRUM_RECORD_HIT(39U))
#define __MW_INSTRUM_NODE_40() \
  (__MW_INSTRUM_RECORD_HIT(40U))
#define __MW_INSTRUM_NODE_41() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(41U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_42(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(42U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(43U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_42(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(42U), 1) : (__MW_INSTRUM_RECORD_HIT(43U), 0))
#endif
#define __MW_INSTRUM_NODE_43() \
  (__MW_INSTRUM_RECORD_HIT(43U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_44(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(44U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(45U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_44(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(44U), 1) : (__MW_INSTRUM_RECORD_HIT(45U), 0))
#endif
#define __MW_INSTRUM_NODE_45() \
  (__MW_INSTRUM_RECORD_HIT(45U))
#define __MW_INSTRUM_NODE_46() \
  (__MW_INSTRUM_RECORD_HIT(46U))
#define __MW_INSTRUM_NODE_47() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(47U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_48(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(48U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(49U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_48(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(48U), 1) : (__MW_INSTRUM_RECORD_HIT(49U), 0))
#endif
#define __MW_INSTRUM_NODE_50(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(50U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(51U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(52U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_49() \
  (__MW_INSTRUM_RECORD_HIT(49U))
#define __MW_INSTRUM_NODE_53() \
  (__MW_INSTRUM_RECORD_HIT(53U))
#define __MW_INSTRUM_NODE_54() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(54U))
#define __MW_INSTRUM_NODE_55() \
  (__MW_INSTRUM_RECORD_HIT(55U))
#define __MW_INSTRUM_NODE_56() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(56U))
#define __MW_INSTRUM_NODE_57() \
  (__MW_INSTRUM_RECORD_HIT(57U))
#define __MW_INSTRUM_NODE_58() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(58U))
#define __MW_INSTRUM_NODE_59() \
  (__MW_INSTRUM_RECORD_HIT(59U))
#define __MW_INSTRUM_NODE_60() \
  (__MW_INSTRUM_RECORD_HIT(60U))
#define __MW_INSTRUM_NODE_61() \
  (__MW_INSTRUM_RECORD_HIT(61U))
#define __MW_INSTRUM_NODE_62() \
  (__MW_INSTRUM_RECORD_HIT(62U))
#define __MW_INSTRUM_NODE_63() \
  (__MW_INSTRUM_RECORD_HIT(63U))
#define __MW_INSTRUM_NODE_64() \
  (__MW_INSTRUM_RECORD_HIT(64U))
#define __MW_INSTRUM_NODE_65() \
  (__MW_INSTRUM_RECORD_HIT(65U))
#define __MW_INSTRUM_NODE_66() \
  (__MW_INSTRUM_RECORD_HIT(66U))
#define __MW_INSTRUM_NODE_67() \
  (__MW_INSTRUM_RECORD_HIT(67U))
#define __MW_INSTRUM_NODE_68() \
  (__MW_INSTRUM_RECORD_HIT(68U))
#define __MW_INSTRUM_NODE_69() \
  (__MW_INSTRUM_RECORD_HIT(69U))
#define __MW_INSTRUM_NODE_70() \
  (__MW_INSTRUM_RECORD_HIT(70U))
#define __MW_INSTRUM_NODE_71() \
  (__MW_INSTRUM_RECORD_HIT(71U))
#define __MW_INSTRUM_NODE_72() \
  (__MW_INSTRUM_RECORD_HIT(72U))
#define __MW_INSTRUM_NODE_73() \
  (__MW_INSTRUM_RECORD_HIT(73U))
#define __MW_INSTRUM_NODE_74() \
  (__MW_INSTRUM_RECORD_HIT(74U))
#define __MW_INSTRUM_NODE_75() \
  (__MW_INSTRUM_RECORD_HIT(75U))
#define __MW_INSTRUM_NODE_76() \
  (__MW_INSTRUM_RECORD_HIT(76U))
#define __MW_INSTRUM_NODE_77() \
  (__MW_INSTRUM_RECORD_HIT(77U))
#define __MW_INSTRUM_NODE_78() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(78U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_79(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(79U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(80U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_79(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(79U), 1) : (__MW_INSTRUM_RECORD_HIT(80U), 0))
#endif
#define __MW_INSTRUM_NODE_85(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(85U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(86U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(87U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_90(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(90U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(91U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(92U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_93() \
  (__MW_INSTRUM_RECORD_HIT(93U))
#define __MW_INSTRUM_NODE_94() \
  (__MW_INSTRUM_RECORD_HIT(94U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_95(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(95U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(96U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_95(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(95U), 1) : (__MW_INSTRUM_RECORD_HIT(96U), 0))
#endif
#define __MW_INSTRUM_NODE_97(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(97U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(98U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(99U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_100(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(100U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(101U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_100(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(100U), 1) : (__MW_INSTRUM_RECORD_HIT(101U), 0))
#endif
#define __MW_INSTRUM_NODE_102(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(102U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(103U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(104U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_105(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(105U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(106U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_105(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(105U), 1) : (__MW_INSTRUM_RECORD_HIT(106U), 0))
#endif
#define __MW_INSTRUM_NODE_107(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(107U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(108U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(109U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_110() \
  (__MW_INSTRUM_RECORD_HIT(110U))
#define __MW_INSTRUM_NODE_111() \
  (__MW_INSTRUM_RECORD_HIT(111U))
#define __MW_INSTRUM_NODE_112() \
  (__MW_INSTRUM_RECORD_HIT(112U))
#define __MW_INSTRUM_NODE_113() \
  (__MW_INSTRUM_RECORD_HIT(113U))
#define __MW_INSTRUM_NODE_114() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(114U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_115(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(115U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(116U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_115(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(115U), 1) : (__MW_INSTRUM_RECORD_HIT(116U), 0))
#endif
#define __MW_INSTRUM_NODE_117() \
  (__MW_INSTRUM_RECORD_HIT(117U))
#define __MW_INSTRUM_NODE_118() \
  (__MW_INSTRUM_RECORD_HIT(118U))
#define __MW_INSTRUM_NODE_119() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(119U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_120(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(120U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(121U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_120(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(120U), 1) : (__MW_INSTRUM_RECORD_HIT(121U), 0))
#endif
#define __MW_INSTRUM_NODE_122() \
  (__MW_INSTRUM_RECORD_HIT(122U))
#define __MW_INSTRUM_NODE_123() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(123U))
#define __MW_INSTRUM_NODE_128(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(128U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(129U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(130U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_133(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(133U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(134U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(135U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_136() \
  (__MW_INSTRUM_RECORD_HIT(136U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_137(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(137U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(138U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_137(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(137U), 1) : (__MW_INSTRUM_RECORD_HIT(138U), 0))
#endif
#define __MW_INSTRUM_NODE_139(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(139U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(140U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(141U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_142(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(142U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(143U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_142(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(142U), 1) : (__MW_INSTRUM_RECORD_HIT(143U), 0))
#endif
#define __MW_INSTRUM_NODE_144(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(144U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(145U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(146U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_147() \
  (__MW_INSTRUM_RECORD_HIT(147U))
#define __MW_INSTRUM_NODE_148() \
  (__MW_INSTRUM_RECORD_HIT(148U))
#define __MW_INSTRUM_NODE_149() \
  (__MW_INSTRUM_RECORD_HIT(149U))
#define __MW_INSTRUM_NODE_150() \
  (__MW_INSTRUM_RECORD_HIT(150U))
#define __MW_INSTRUM_NODE_151() \
  (__MW_INSTRUM_RECORD_HIT(151U))
#define __MW_INSTRUM_NODE_152() \
  (__MW_INSTRUM_RECORD_HIT(152U))
#define __MW_INSTRUM_NODE_153() \
  (__MW_INSTRUM_RECORD_HIT(153U))
#define __MW_INSTRUM_NODE_158(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(158U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(159U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(160U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_163(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(163U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(164U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(165U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_166(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(166U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(167U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_166(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(166U), 1) : (__MW_INSTRUM_RECORD_HIT(167U), 0))
#endif
#define __MW_INSTRUM_NODE_168(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(168U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(169U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(170U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_171() \
  (__MW_INSTRUM_RECORD_HIT(171U))
#define __MW_INSTRUM_NODE_172() \
  (__MW_INSTRUM_RECORD_HIT(172U))
#define __MW_INSTRUM_NODE_173() \
  (__MW_INSTRUM_RECORD_HIT(173U))
#define __MW_INSTRUM_NODE_174() \
  (__MW_INSTRUM_RECORD_HIT(174U))
#define __MW_INSTRUM_NODE_175() \
  (__MW_INSTRUM_RECORD_HIT(175U))
#define __MW_INSTRUM_NODE_176() \
  (__MW_INSTRUM_RECORD_HIT(176U))
#define __MW_INSTRUM_NODE_181(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(181U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(182U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(183U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_186(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(186U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(187U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(188U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_189(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(189U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(190U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_189(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(189U), 1) : (__MW_INSTRUM_RECORD_HIT(190U), 0))
#endif
#define __MW_INSTRUM_NODE_191(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(191U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(192U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(193U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_194() \
  (__MW_INSTRUM_RECORD_HIT(194U))
#define __MW_INSTRUM_NODE_195() \
  (__MW_INSTRUM_RECORD_HIT(195U))
#define __MW_INSTRUM_NODE_196() \
  (__MW_INSTRUM_RECORD_HIT(196U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_197(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(197U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(198U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_197(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(197U), 1) : (__MW_INSTRUM_RECORD_HIT(198U), 0))
#endif
#define __MW_INSTRUM_NODE_199(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(199U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(200U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(201U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_202() \
  (__MW_INSTRUM_RECORD_HIT(202U))
#define __MW_INSTRUM_NODE_203() \
  (__MW_INSTRUM_RECORD_HIT(203U))
#define __MW_INSTRUM_NODE_204() \
  (__MW_INSTRUM_RECORD_HIT(204U))
#define __MW_INSTRUM_NODE_205() \
  (__MW_INSTRUM_RECORD_HIT(205U))
#define __MW_INSTRUM_NODE_206() \
  (__MW_INSTRUM_RECORD_HIT(206U))
#define __MW_INSTRUM_NODE_207() \
  (__MW_INSTRUM_RECORD_HIT(207U))
#define __MW_INSTRUM_NODE_208() \
  (__MW_INSTRUM_RECORD_HIT(208U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_209(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(209U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(210U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_209(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(209U), 1) : (__MW_INSTRUM_RECORD_HIT(210U), 0))
#endif
#define __MW_INSTRUM_NODE_211(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(211U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(212U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(213U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_214(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(214U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(215U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_214(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(214U), 1) : (__MW_INSTRUM_RECORD_HIT(215U), 0))
#endif
#define __MW_INSTRUM_NODE_216(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(216U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(217U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(218U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_219() \
  (__MW_INSTRUM_RECORD_HIT(219U))
#define __MW_INSTRUM_NODE_220() \
  (__MW_INSTRUM_RECORD_HIT(220U))
#define __MW_INSTRUM_NODE_221() \
  (__MW_INSTRUM_RECORD_HIT(221U))
#define __MW_INSTRUM_NODE_222() \
  (__MW_INSTRUM_RECORD_HIT(222U))
#define __MW_INSTRUM_NODE_223() \
  (__MW_INSTRUM_RECORD_HIT(223U))
#define __MW_INSTRUM_NODE_224() \
  (__MW_INSTRUM_RECORD_HIT(224U))
#define __MW_INSTRUM_NODE_225() \
  (__MW_INSTRUM_RECORD_HIT(225U))
#define __MW_INSTRUM_NODE_230(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(230U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(231U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(232U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_235(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(235U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(236U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(237U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_238(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(238U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(239U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_238(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(238U), 1) : (__MW_INSTRUM_RECORD_HIT(239U), 0))
#endif
#define __MW_INSTRUM_NODE_240(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(240U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(241U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(242U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_243() \
  (__MW_INSTRUM_RECORD_HIT(243U))
#define __MW_INSTRUM_NODE_244() \
  (__MW_INSTRUM_RECORD_HIT(244U))
#define __MW_INSTRUM_NODE_245() \
  (__MW_INSTRUM_RECORD_HIT(245U))
#define __MW_INSTRUM_NODE_246() \
  (__MW_INSTRUM_RECORD_HIT(246U))
#define __MW_INSTRUM_NODE_247() \
  (__MW_INSTRUM_RECORD_HIT(247U))
#define __MW_INSTRUM_NODE_248() \
  (__MW_INSTRUM_RECORD_HIT(248U))
#define __MW_INSTRUM_NODE_249() \
  (__MW_INSTRUM_RECORD_HIT(249U))
#define __MW_INSTRUM_NODE_250() \
  (__MW_INSTRUM_RECORD_HIT(250U))
#define __MW_INSTRUM_NODE_251() \
  (__MW_INSTRUM_RECORD_HIT(251U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_252(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(252U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(253U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_252(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(252U), 1) : (__MW_INSTRUM_RECORD_HIT(253U), 0))
#endif
#define __MW_INSTRUM_NODE_254(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(254U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(255U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(256U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_257() \
  (__MW_INSTRUM_RECORD_HIT(257U))
#define __MW_INSTRUM_NODE_258() \
  (__MW_INSTRUM_RECORD_HIT(258U))
#define __MW_INSTRUM_NODE_259() \
  (__MW_INSTRUM_RECORD_HIT(259U))
#define __MW_INSTRUM_NODE_260() \
  (__MW_INSTRUM_RECORD_HIT(260U))
#define __MW_INSTRUM_NODE_261() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(261U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_262(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(262U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(263U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_262(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(262U), 1) : (__MW_INSTRUM_RECORD_HIT(263U), 0))
#endif
#define __MW_INSTRUM_NODE_263() \
  (__MW_INSTRUM_RECORD_HIT(263U))
#define __MW_INSTRUM_NODE_264() \
  (__MW_INSTRUM_RECORD_HIT(264U))
#define __MW_INSTRUM_NODE_265() \
  (__MW_INSTRUM_RECORD_HIT(265U))
#define __MW_INSTRUM_NODE_266() \
  (__MW_INSTRUM_RECORD_HIT(266U))
#define __MW_INSTRUM_NODE_267() \
  (__MW_INSTRUM_RECORD_HIT(267U))
#define __MW_INSTRUM_NODE_268() \
  (__MW_INSTRUM_RECORD_HIT(268U))
#define __MW_INSTRUM_NODE_269() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(269U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_270(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(270U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(271U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_270(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(270U), 1) : (__MW_INSTRUM_RECORD_HIT(271U), 0))
#endif
#define __MW_INSTRUM_NODE_272(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(272U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(273U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(274U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_275(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(275U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(276U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_275(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(275U), 1) : (__MW_INSTRUM_RECORD_HIT(276U), 0))
#endif
#define __MW_INSTRUM_NODE_277(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(277U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(278U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(279U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_284(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(284U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(285U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(286U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_289(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(289U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(290U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(291U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_296(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(296U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(297U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(298U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_301(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(301U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(302U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(303U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_304() \
  (__MW_INSTRUM_RECORD_HIT(304U))
#define __MW_INSTRUM_NODE_305() \
  (__MW_INSTRUM_RECORD_HIT(305U))
#define __MW_INSTRUM_NODE_306() \
  (__MW_INSTRUM_RECORD_HIT(306U))
#define __MW_INSTRUM_NODE_307() \
  (__MW_INSTRUM_RECORD_HIT(307U))
#define __MW_INSTRUM_NODE_308() \
  (__MW_INSTRUM_RECORD_HIT(308U))
#define __MW_INSTRUM_NODE_309() \
  (__MW_INSTRUM_RECORD_HIT(309U))
#define __MW_INSTRUM_NODE_310() \
  (__MW_INSTRUM_RECORD_HIT(310U))
#define __MW_INSTRUM_NODE_311() \
  (__MW_INSTRUM_RECORD_HIT(311U))
#define __MW_INSTRUM_NODE_312() \
  (__MW_INSTRUM_RECORD_HIT(312U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_313(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(313U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(314U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_313(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(313U), 1) : (__MW_INSTRUM_RECORD_HIT(314U), 0))
#endif
#define __MW_INSTRUM_NODE_315(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(315U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(316U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(317U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_318() \
  (__MW_INSTRUM_RECORD_HIT(318U))
#define __MW_INSTRUM_NODE_319() \
  (__MW_INSTRUM_RECORD_HIT(319U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_320(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(320U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(321U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_320(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(320U), 1) : (__MW_INSTRUM_RECORD_HIT(321U), 0))
#endif
#define __MW_INSTRUM_NODE_322(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(322U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(323U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(324U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_325(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(325U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(326U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_325(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(325U), 1) : (__MW_INSTRUM_RECORD_HIT(326U), 0))
#endif
#define __MW_INSTRUM_NODE_327(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(327U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(328U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(329U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_330() \
  (__MW_INSTRUM_RECORD_HIT(330U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_331(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(331U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(332U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_331(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(331U), 1) : (__MW_INSTRUM_RECORD_HIT(332U), 0))
#endif
#define __MW_INSTRUM_NODE_333(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(333U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(334U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(335U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_336(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(336U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(337U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_336(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(336U), 1) : (__MW_INSTRUM_RECORD_HIT(337U), 0))
#endif
#define __MW_INSTRUM_NODE_342(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(342U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(343U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(344U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_347(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(347U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(348U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(349U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_350() \
  (__MW_INSTRUM_RECORD_HIT(350U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_351(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(351U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(352U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_351(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(351U), 1) : (__MW_INSTRUM_RECORD_HIT(352U), 0))
#endif
#define __MW_INSTRUM_NODE_353(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(353U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(354U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(355U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_356() \
  (__MW_INSTRUM_RECORD_HIT(356U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_357(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(357U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(358U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_357(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(357U), 1) : (__MW_INSTRUM_RECORD_HIT(358U), 0))
#endif
#define __MW_INSTRUM_NODE_359(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(359U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(360U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(361U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_362() \
  (__MW_INSTRUM_RECORD_HIT(362U))
#define __MW_INSTRUM_NODE_363() \
  (__MW_INSTRUM_RECORD_HIT(363U))
#define __MW_INSTRUM_NODE_364() \
  (__MW_INSTRUM_RECORD_HIT(364U))
#define __MW_INSTRUM_NODE_365() \
  (__MW_INSTRUM_RECORD_HIT(365U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_366(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(366U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(367U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_366(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(366U), 1) : (__MW_INSTRUM_RECORD_HIT(367U), 0))
#endif
#define __MW_INSTRUM_NODE_368(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(368U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(369U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(370U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_371(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(371U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(372U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_371(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(371U), 1) : (__MW_INSTRUM_RECORD_HIT(372U), 0))
#endif
#define __MW_INSTRUM_NODE_373(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(373U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(374U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(375U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_380(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(380U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(381U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(382U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_385() \
  (__MW_INSTRUM_RECORD_HIT(385U))
#define __MW_INSTRUM_NODE_386() \
  (__MW_INSTRUM_RECORD_HIT(386U))
#define __MW_INSTRUM_NODE_387() \
  (__MW_INSTRUM_RECORD_HIT(387U))
#define __MW_INSTRUM_NODE_388() \
  (__MW_INSTRUM_RECORD_HIT(388U))
#define __MW_INSTRUM_NODE_389() \
  (__MW_INSTRUM_RECORD_HIT(389U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_390(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(390U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(391U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_390(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(390U), 1) : (__MW_INSTRUM_RECORD_HIT(391U), 0))
#endif
#define __MW_INSTRUM_NODE_392(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(392U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(393U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(394U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_395(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(395U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(396U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_395(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(395U), 1) : (__MW_INSTRUM_RECORD_HIT(396U), 0))
#endif
#define __MW_INSTRUM_NODE_397() \
  (__MW_INSTRUM_RECORD_HIT(397U))
#define __MW_INSTRUM_NODE_398() \
  (__MW_INSTRUM_RECORD_HIT(398U))
#define __MW_INSTRUM_NODE_399() \
  (__MW_INSTRUM_RECORD_HIT(399U))
#define __MW_INSTRUM_NODE_400() \
  (__MW_INSTRUM_RECORD_HIT(400U))
#define __MW_INSTRUM_NODE_401() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(401U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_402(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(402U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(403U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_402(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(402U), 1) : (__MW_INSTRUM_RECORD_HIT(403U), 0))
#endif
#define __MW_INSTRUM_NODE_404(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(404U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(405U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(406U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_407(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(407U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(408U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_407(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(407U), 1) : (__MW_INSTRUM_RECORD_HIT(408U), 0))
#endif
#define __MW_INSTRUM_NODE_409(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(409U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(410U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(411U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_412(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(412U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(413U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_412(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(412U), 1) : (__MW_INSTRUM_RECORD_HIT(413U), 0))
#endif
#define __MW_INSTRUM_NODE_414(lhs, rhs) (((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(414U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(415U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(416U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_417() \
  (__MW_INSTRUM_RECORD_HIT(417U))
#define __MW_INSTRUM_NODE_418() \
  (__MW_INSTRUM_RECORD_HIT(418U))
#define __MW_INSTRUM_NODE_419() \
  (__MW_INSTRUM_RECORD_HIT(419U))
#define __MW_INSTRUM_NODE_420() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(420U))
#define __MW_INSTRUM_NODE_421() \
  (__MW_INSTRUM_RECORD_HIT(421U))
#define __MW_INSTRUM_NODE_422() \
  (__MW_INSTRUM_RECORD_HIT(422U))
#define __MW_INSTRUM_NODE_423() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(423U))
#define __MW_INSTRUM_NODE_424() \
  (__MW_INSTRUM_RECORD_HIT(424U))
#define __MW_INSTRUM_NODE_425() \
  (__MW_INSTRUM_RECORD_HIT(425U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_83CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_83(...) (__MW_INSTRUM_RECORD_HIT_83CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_83(exp) (__MW_INSTRUM_RECORD_HIT_83CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_88CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_88(...) (__MW_INSTRUM_RECORD_HIT_88CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_88(exp) (__MW_INSTRUM_RECORD_HIT_88CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_81DA_83_88Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_81(...) (__MW_INSTRUM_RECORD_HIT_81DA_83_88Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_81(exp) (__MW_INSTRUM_RECORD_HIT_81DA_83_88Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_126CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_126(...) (__MW_INSTRUM_RECORD_HIT_126CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_126(exp) (__MW_INSTRUM_RECORD_HIT_126CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_131CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_131(...) (__MW_INSTRUM_RECORD_HIT_131CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_131(exp) (__MW_INSTRUM_RECORD_HIT_131CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_124DO_126_131Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_124(...) (__MW_INSTRUM_RECORD_HIT_124DO_126_131Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_124(exp) (__MW_INSTRUM_RECORD_HIT_124DO_126_131Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_156CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) (__MW_INSTRUM_RECORD_HIT_156CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_156(exp) (__MW_INSTRUM_RECORD_HIT_156CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_161CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_161(...) (__MW_INSTRUM_RECORD_HIT_161CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_161(exp) (__MW_INSTRUM_RECORD_HIT_161CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_154DA_156_161Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) (__MW_INSTRUM_RECORD_HIT_154DA_156_161Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_154(exp) (__MW_INSTRUM_RECORD_HIT_154DA_156_161Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_179CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_179(...) (__MW_INSTRUM_RECORD_HIT_179CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_179(exp) (__MW_INSTRUM_RECORD_HIT_179CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_184CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_184(...) (__MW_INSTRUM_RECORD_HIT_184CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_184(exp) (__MW_INSTRUM_RECORD_HIT_184CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_177DA_179_184Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_177(...) (__MW_INSTRUM_RECORD_HIT_177DA_179_184Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_177(exp) (__MW_INSTRUM_RECORD_HIT_177DA_179_184Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_228CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_228(...) (__MW_INSTRUM_RECORD_HIT_228CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_228(exp) (__MW_INSTRUM_RECORD_HIT_228CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_233CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_233(...) (__MW_INSTRUM_RECORD_HIT_233CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_233(exp) (__MW_INSTRUM_RECORD_HIT_233CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_226DA_228_233Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_226(...) (__MW_INSTRUM_RECORD_HIT_226DA_228_233Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_226(exp) (__MW_INSTRUM_RECORD_HIT_226DA_228_233Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_282CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_282(...) (__MW_INSTRUM_RECORD_HIT_282CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_282(exp) (__MW_INSTRUM_RECORD_HIT_282CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_287CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_287(...) (__MW_INSTRUM_RECORD_HIT_287CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_287(exp) (__MW_INSTRUM_RECORD_HIT_287CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_280DA_282_287Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_280(...) (__MW_INSTRUM_RECORD_HIT_280DA_282_287Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_280(exp) (__MW_INSTRUM_RECORD_HIT_280DA_282_287Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_294CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_294(...) (__MW_INSTRUM_RECORD_HIT_294CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_294(exp) (__MW_INSTRUM_RECORD_HIT_294CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_299CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_299(...) (__MW_INSTRUM_RECORD_HIT_299CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_299(exp) (__MW_INSTRUM_RECORD_HIT_299CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_292DO_294_299Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_292(...) (__MW_INSTRUM_RECORD_HIT_292DO_294_299Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_292(exp) (__MW_INSTRUM_RECORD_HIT_292DO_294_299Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_340CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_340(...) (__MW_INSTRUM_RECORD_HIT_340CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_340(exp) (__MW_INSTRUM_RECORD_HIT_340CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_345CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_345(...) (__MW_INSTRUM_RECORD_HIT_345CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_345(exp) (__MW_INSTRUM_RECORD_HIT_345CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_338DA_340_345Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_338(...) (__MW_INSTRUM_RECORD_HIT_338DA_340_345Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_338(exp) (__MW_INSTRUM_RECORD_HIT_338DA_340_345Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_378CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_378(...) (__MW_INSTRUM_RECORD_HIT_378CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_378(exp) (__MW_INSTRUM_RECORD_HIT_378CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_383CZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_383(...) (__MW_INSTRUM_RECORD_HIT_383CZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_383(exp) (__MW_INSTRUM_RECORD_HIT_383CZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_376DA_378_383Z_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_376(...) (__MW_INSTRUM_RECORD_HIT_376DA_378_383Z_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_376(exp) (__MW_INSTRUM_RECORD_HIT_376DA_378_383Z_YniSwGxVGDuH0o55vVoK7E(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#define __MW_INSTRUM_FCN_ENTER_6() 

#define __MW_INSTRUM_FCN_ENTER_7() 

#define __MW_INSTRUM_FCN_ENTER_8() 

#define __MW_INSTRUM_FCN_ENTER_9() 

#define __MW_INSTRUM_FCN_ENTER_10() 

#define __MW_INSTRUM_FCN_ENTER_11() 

#define __MW_INSTRUM_FCN_ENTER_12() 

#define __MW_INSTRUM_FCN_ENTER_13() 

#define __MW_INSTRUM_FCN_ENTER_14() 

#define __MW_INSTRUM_FCN_ENTER_15() 

#define __MW_INSTRUM_FCN_ENTER_16() 

#define __MW_INSTRUM_FCN_ENTER_17() 

#define __MW_INSTRUM_FCN_ENTER_18() 

#define __MW_INSTRUM_FCN_ENTER_19() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_2() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_5DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_5(...) (__MW_INSTRUM_RECORD_HIT_5DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_5(exp) (__MW_INSTRUM_RECORD_HIT_5DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_7IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_7(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_7IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_10DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_10(...) (__MW_INSTRUM_RECORD_HIT_10DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_10(exp) (__MW_INSTRUM_RECORD_HIT_10DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_12(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_12IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_15XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_15() __MW_INSTRUM_RECORD_HIT_15XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_11() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_6() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_17DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_17(...) (__MW_INSTRUM_RECORD_HIT_17DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_17(exp) (__MW_INSTRUM_RECORD_HIT_17DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_19(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_19IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_22XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_22() __MW_INSTRUM_RECORD_HIT_22XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_18() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_23XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_23() __MW_INSTRUM_RECORD_HIT_23XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_24() __MW_INSTRUM_RECORD_HIT_24EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_25XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_25() __MW_INSTRUM_RECORD_HIT_25XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_26EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_26() __MW_INSTRUM_RECORD_HIT_26EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_31(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_31IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_34() ((void)0)


#define __MW_INSTRUM_NODE_35() ((void)0)


#define __MW_INSTRUM_NODE_28() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_36XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_36() __MW_INSTRUM_RECORD_HIT_36XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_37EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_37() __MW_INSTRUM_RECORD_HIT_37EZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_38() ((void)0)


#define __MW_INSTRUM_NODE_39() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_40XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_40() __MW_INSTRUM_RECORD_HIT_40XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_41EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_41() __MW_INSTRUM_RECORD_HIT_41EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_42DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_42(...) (__MW_INSTRUM_RECORD_HIT_42DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_42(exp) (__MW_INSTRUM_RECORD_HIT_42DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#define __MW_INSTRUM_NODE_43() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_44DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_44(...) (__MW_INSTRUM_RECORD_HIT_44DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_44(exp) (__MW_INSTRUM_RECORD_HIT_44DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#define __MW_INSTRUM_NODE_45() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_46XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_46() __MW_INSTRUM_RECORD_HIT_46XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_47EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_47() __MW_INSTRUM_RECORD_HIT_47EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_48DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_48(...) (__MW_INSTRUM_RECORD_HIT_48DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_48(exp) (__MW_INSTRUM_RECORD_HIT_48DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_50IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_50(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_50IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_49() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_53XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_53() __MW_INSTRUM_RECORD_HIT_53XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_54EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_54() __MW_INSTRUM_RECORD_HIT_54EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_55XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_55() __MW_INSTRUM_RECORD_HIT_55XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_56EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_56() __MW_INSTRUM_RECORD_HIT_56EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_57XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_57() __MW_INSTRUM_RECORD_HIT_57XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_58EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_58() __MW_INSTRUM_RECORD_HIT_58EZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_59() ((void)0)


#define __MW_INSTRUM_NODE_60() ((void)0)


#define __MW_INSTRUM_NODE_61() ((void)0)


#define __MW_INSTRUM_NODE_62() ((void)0)


#define __MW_INSTRUM_NODE_63() ((void)0)


#define __MW_INSTRUM_NODE_64() ((void)0)


#define __MW_INSTRUM_NODE_65() ((void)0)


#define __MW_INSTRUM_NODE_66() ((void)0)


#define __MW_INSTRUM_NODE_67() ((void)0)


#define __MW_INSTRUM_NODE_68() ((void)0)


#define __MW_INSTRUM_NODE_69() ((void)0)


#define __MW_INSTRUM_NODE_70() ((void)0)


#define __MW_INSTRUM_NODE_71() ((void)0)


#define __MW_INSTRUM_NODE_72() ((void)0)


#define __MW_INSTRUM_NODE_73() ((void)0)


#define __MW_INSTRUM_NODE_74() ((void)0)


#define __MW_INSTRUM_NODE_75() ((void)0)


#define __MW_INSTRUM_NODE_76() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_77XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_77() __MW_INSTRUM_RECORD_HIT_77XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_78EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_78() __MW_INSTRUM_RECORD_HIT_78EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_79DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_79(...) (__MW_INSTRUM_RECORD_HIT_79DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_79(exp) (__MW_INSTRUM_RECORD_HIT_79DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_85IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_85(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_85IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_90IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_90(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_90IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_93XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_93() __MW_INSTRUM_RECORD_HIT_93XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_94() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_95DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_95(...) (__MW_INSTRUM_RECORD_HIT_95DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_95(exp) (__MW_INSTRUM_RECORD_HIT_95DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_97IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_97(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_97IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_100DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_100(...) (__MW_INSTRUM_RECORD_HIT_100DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_100(exp) (__MW_INSTRUM_RECORD_HIT_100DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_102IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_102(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_102IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_105DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_105(...) (__MW_INSTRUM_RECORD_HIT_105DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_105(exp) (__MW_INSTRUM_RECORD_HIT_105DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_107IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_107(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_107IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_110XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_110() __MW_INSTRUM_RECORD_HIT_110XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_111() ((void)0)


#define __MW_INSTRUM_NODE_112() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_113XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_113() __MW_INSTRUM_RECORD_HIT_113XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_114EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_114() __MW_INSTRUM_RECORD_HIT_114EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_115DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_115(...) (__MW_INSTRUM_RECORD_HIT_115DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_115(exp) (__MW_INSTRUM_RECORD_HIT_115DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#define __MW_INSTRUM_NODE_117() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_118XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_118() __MW_INSTRUM_RECORD_HIT_118XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_119EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_119() __MW_INSTRUM_RECORD_HIT_119EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_120DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_120(...) (__MW_INSTRUM_RECORD_HIT_120DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_120(exp) (__MW_INSTRUM_RECORD_HIT_120DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_122XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_122() __MW_INSTRUM_RECORD_HIT_122XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_123EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_123() __MW_INSTRUM_RECORD_HIT_123EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_128IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_128(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_128IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_133IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_133(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_133IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_136() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_137DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_137(...) (__MW_INSTRUM_RECORD_HIT_137DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_137(exp) (__MW_INSTRUM_RECORD_HIT_137DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_139IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_139(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_139IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_142DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_142(...) (__MW_INSTRUM_RECORD_HIT_142DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_142(exp) (__MW_INSTRUM_RECORD_HIT_142DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_144IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_144(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_144IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_147() ((void)0)


#define __MW_INSTRUM_NODE_148() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_149XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_149() __MW_INSTRUM_RECORD_HIT_149XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_150() ((void)0)


#define __MW_INSTRUM_NODE_151() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_152XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_152() __MW_INSTRUM_RECORD_HIT_152XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_153() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_158IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_158(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_158IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_163IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_163(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_163IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_166DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_166(...) (__MW_INSTRUM_RECORD_HIT_166DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_166(exp) (__MW_INSTRUM_RECORD_HIT_166DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_168IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_168(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_168IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_171() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_172XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_172() __MW_INSTRUM_RECORD_HIT_172XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_173() ((void)0)


#define __MW_INSTRUM_NODE_174() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_175XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_175() __MW_INSTRUM_RECORD_HIT_175XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_176() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_181IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_181(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_181IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_186IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_186(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_186IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_189DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_189(...) (__MW_INSTRUM_RECORD_HIT_189DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_189(exp) (__MW_INSTRUM_RECORD_HIT_189DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_191IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_191(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_191IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_194() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_195XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_195() __MW_INSTRUM_RECORD_HIT_195XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_196() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_197DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_197(...) (__MW_INSTRUM_RECORD_HIT_197DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_197(exp) (__MW_INSTRUM_RECORD_HIT_197DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_199IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_199(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_199IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_202() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_203XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_203() __MW_INSTRUM_RECORD_HIT_203XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_204() ((void)0)


#define __MW_INSTRUM_NODE_205() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_206XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_206() __MW_INSTRUM_RECORD_HIT_206XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_207() ((void)0)


#define __MW_INSTRUM_NODE_208() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_209DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_209(...) (__MW_INSTRUM_RECORD_HIT_209DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_209(exp) (__MW_INSTRUM_RECORD_HIT_209DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_211IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_211(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_211IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_214DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_214(...) (__MW_INSTRUM_RECORD_HIT_214DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_214(exp) (__MW_INSTRUM_RECORD_HIT_214DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_216IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_216(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_216IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_219() ((void)0)


#define __MW_INSTRUM_NODE_220() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_221XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_221() __MW_INSTRUM_RECORD_HIT_221XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_222() ((void)0)


#define __MW_INSTRUM_NODE_223() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_224XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_224() __MW_INSTRUM_RECORD_HIT_224XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_225() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_230IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_230(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_230IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_235IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_235(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_235IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_238DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_238(...) (__MW_INSTRUM_RECORD_HIT_238DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_238(exp) (__MW_INSTRUM_RECORD_HIT_238DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_240IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_240(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_240IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_243() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_244XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_244() __MW_INSTRUM_RECORD_HIT_244XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_245() ((void)0)


#define __MW_INSTRUM_NODE_246() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_247XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_247() __MW_INSTRUM_RECORD_HIT_247XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_248() ((void)0)


#define __MW_INSTRUM_NODE_249() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_250XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_250() __MW_INSTRUM_RECORD_HIT_250XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_251() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_252DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_252(...) (__MW_INSTRUM_RECORD_HIT_252DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_252(exp) (__MW_INSTRUM_RECORD_HIT_252DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_254IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_254(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_254IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_257() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_258XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_258() __MW_INSTRUM_RECORD_HIT_258XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_259() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_260XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_260() __MW_INSTRUM_RECORD_HIT_260XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_261EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_261() __MW_INSTRUM_RECORD_HIT_261EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_262DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_262(...) (__MW_INSTRUM_RECORD_HIT_262DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_262(exp) (__MW_INSTRUM_RECORD_HIT_262DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#define __MW_INSTRUM_NODE_263() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_264DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_264() __MW_INSTRUM_RECORD_HIT_264DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_265DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_265() __MW_INSTRUM_RECORD_HIT_265DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_266DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_266() __MW_INSTRUM_RECORD_HIT_266DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_267DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_267() __MW_INSTRUM_RECORD_HIT_267DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_268XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_268() __MW_INSTRUM_RECORD_HIT_268XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_269EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_269() __MW_INSTRUM_RECORD_HIT_269EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_270DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_270(...) (__MW_INSTRUM_RECORD_HIT_270DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_270(exp) (__MW_INSTRUM_RECORD_HIT_270DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_272IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_272(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_272IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_275DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_275(...) (__MW_INSTRUM_RECORD_HIT_275DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_275(exp) (__MW_INSTRUM_RECORD_HIT_275DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_277IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_277(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_277IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_284IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_284(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_284IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_289IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_289(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_289IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_296IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_296(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_296IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_301IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_301(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_301IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_304DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_304() __MW_INSTRUM_RECORD_HIT_304DZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_305() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_306DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_306() __MW_INSTRUM_RECORD_HIT_306DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_307DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_307() __MW_INSTRUM_RECORD_HIT_307DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_308DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_308() __MW_INSTRUM_RECORD_HIT_308DZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_309() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_310DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_310() __MW_INSTRUM_RECORD_HIT_310DZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_311() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_312DZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_312() __MW_INSTRUM_RECORD_HIT_312DZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_313DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_313(...) (__MW_INSTRUM_RECORD_HIT_313DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_313(exp) (__MW_INSTRUM_RECORD_HIT_313DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_315IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_315(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_315IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_318XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_318() __MW_INSTRUM_RECORD_HIT_318XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_319() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_320DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_320(...) (__MW_INSTRUM_RECORD_HIT_320DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_320(exp) (__MW_INSTRUM_RECORD_HIT_320DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_322IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_322(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_322IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_325DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_325(...) (__MW_INSTRUM_RECORD_HIT_325DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_325(exp) (__MW_INSTRUM_RECORD_HIT_325DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_327IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_327(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_327IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_330() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_331DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_331(...) (__MW_INSTRUM_RECORD_HIT_331DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_331(exp) (__MW_INSTRUM_RECORD_HIT_331DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_333IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_333(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_333IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_336DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_336(...) (__MW_INSTRUM_RECORD_HIT_336DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_336(exp) (__MW_INSTRUM_RECORD_HIT_336DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_342IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_342(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_342IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_347IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_347(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_347IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_350() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_351DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_351(...) (__MW_INSTRUM_RECORD_HIT_351DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_351(exp) (__MW_INSTRUM_RECORD_HIT_351DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_353IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_353(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_353IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_356() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_357DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_357(...) (__MW_INSTRUM_RECORD_HIT_357DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_357(exp) (__MW_INSTRUM_RECORD_HIT_357DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_359IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_359(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_359IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_362() ((void)0)


#define __MW_INSTRUM_NODE_363() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_364XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_364() __MW_INSTRUM_RECORD_HIT_364XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_365() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_366DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_366(...) (__MW_INSTRUM_RECORD_HIT_366DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_366(exp) (__MW_INSTRUM_RECORD_HIT_366DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_368IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_368(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_368IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_371DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_371(...) (__MW_INSTRUM_RECORD_HIT_371DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_371(exp) (__MW_INSTRUM_RECORD_HIT_371DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_373IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_373(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_373IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_380IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_380(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_380IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_385() ((void)0)


#define __MW_INSTRUM_NODE_386() ((void)0)


#define __MW_INSTRUM_NODE_387() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_388XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_388() __MW_INSTRUM_RECORD_HIT_388XZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_389() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_390DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_390(...) (__MW_INSTRUM_RECORD_HIT_390DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_390(exp) (__MW_INSTRUM_RECORD_HIT_390DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_392IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_392(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_392IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_395DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_395(...) (__MW_INSTRUM_RECORD_HIT_395DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_395(exp) (__MW_INSTRUM_RECORD_HIT_395DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#define __MW_INSTRUM_NODE_397() ((void)0)


#define __MW_INSTRUM_NODE_398() ((void)0)


#define __MW_INSTRUM_NODE_399() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_400XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_400() __MW_INSTRUM_RECORD_HIT_400XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_401EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_401() __MW_INSTRUM_RECORD_HIT_401EZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_402DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_402(...) (__MW_INSTRUM_RECORD_HIT_402DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_402(exp) (__MW_INSTRUM_RECORD_HIT_402DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_404IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_404(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_404IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_407DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_407(...) (__MW_INSTRUM_RECORD_HIT_407DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_407(exp) (__MW_INSTRUM_RECORD_HIT_407DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_409IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_409(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_409IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_412DZ_YniSwGxVGDuH0o55vVoK7E(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_412(...) (__MW_INSTRUM_RECORD_HIT_412DZ_YniSwGxVGDuH0o55vVoK7E(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_412(exp) (__MW_INSTRUM_RECORD_HIT_412DZ_YniSwGxVGDuH0o55vVoK7E(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_414IZ_YniSwGxVGDuH0o55vVoK7E(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_414(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_414IZ_YniSwGxVGDuH0o55vVoK7E((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_417() ((void)0)


#define __MW_INSTRUM_NODE_418() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_419XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_419() __MW_INSTRUM_RECORD_HIT_419XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_420EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_420() __MW_INSTRUM_RECORD_HIT_420EZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_421() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_422XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_422() __MW_INSTRUM_RECORD_HIT_422XZ_YniSwGxVGDuH0o55vVoK7E()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_423EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_423() __MW_INSTRUM_RECORD_HIT_423EZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_424() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_425XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_425() __MW_INSTRUM_RECORD_HIT_425XZ_YniSwGxVGDuH0o55vVoK7E()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "E:\\W\\T\\Trike_SpeedGoat_algo\\CANOpenSlave.c"
# 8 "E:\\W\\T\\Trike_SpeedGoat_algo\\CANOpenSlave.h"
#ifndef _CANOPENSLAVE_DEFINES_H
#define _CANOPENSLAVE_DEFINES_H
# 1 "C:\\LegacyApp\\TDM-GCC-64\\lib\\gcc\\x86_64-w64-mingw32\\4.9.2\\include\\stdint.h" 3
#ifndef _GCC_WRAP_STDINT_H
#define _GCC_WRAP_STDINT_H
# 25 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdint.h" 3
#ifndef _STDINT_H
#define _STDINT_H
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _INC__MINGW_H
#define _INC__MINGW_H
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw_mac.h" 3
#ifndef _INC_CRTDEFS_MACRO
#define _INC_CRTDEFS_MACRO
# 151
#ifndef __C89_NAMELESS
#define __C89_NAMELESS __MINGW_EXTENSION
# 168
#endif /* __C89_NAMELESS */

#ifndef __GNU_EXTENSION
#define __GNU_EXTENSION __MINGW_EXTENSION
#endif /* __GNU_EXTENSION */
# 274
#endif /* _INC_CRTDEFS_MACRO */
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw_secapi.h" 3
#ifndef _INC_MINGW_SECAPI
#define _INC_MINGW_SECAPI
# 201
#endif /* _INC_MINGW_SECAPI */
# 33 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifdef __stdcall
#undef __stdcall
#endif /* __stdcall */
# 50
#ifndef __MINGW_IMPORT
#define __MINGW_IMPORT extern __attribute__ ((__dllimport__))


#endif /* __MINGW_IMPORT */
# 218
#ifndef __MSVCRT_VERSION__
#define __MSVCRT_VERSION__ 0x0700

#endif /* __MSVCRT_VERSION__ */


#ifndef WINVER
#define WINVER 0x0502
#endif /* WINVER */

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x502
#endif /* _WIN32_WINNT */

#ifndef _INT128_DEFINED
#define _INT128_DEFINED
# 249
#endif /* _INT128_DEFINED */




#ifndef __unaligned
#define __unaligned
#endif /* __unaligned */
#ifndef __w64
#define __w64
#endif /* __w64 */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef _INC_VADEFS
#define _INC_VADEFS
# 677 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef MINGW_SDK_INIT
#define MINGW_SDK_INIT
# 5 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sdks/_mingw_directx.h" 3
#ifndef MINGW_HAS_DDRAW_H
#define MINGW_HAS_DDRAW_H 1

#endif /* MINGW_HAS_DDRAW_H */
# 1 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sdks/_mingw_ddk.h" 3
#ifndef MINGW_DDK_H
#define MINGW_DDK_H



#endif /* MINGW_DDK_H */
# 690 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#endif /* MINGW_SDK_INIT */
# 20 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
# 12
#pragma pack ( push, 8 )
# 22
typedef __builtin_va_list __gnuc_va_list; 
#endif /* __GNUC_VA_LIST */


#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED

typedef __gnuc_va_list va_list; 





#endif /* _VA_LIST_DEFINED */
# 104
#endif /* _INC_VADEFS */
# 298 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _W64
#define _W64
#endif /* _W64 */
# 310
#ifndef _CRTIMP2
#define _CRTIMP2 _CRTIMP
#endif /* _CRTIMP2 */

#ifndef _CRTIMP_ALTERNATIVE
#define _CRTIMP_ALTERNATIVE _CRTIMP

#endif /* _CRTIMP_ALTERNATIVE */

#ifndef _MRTIMP2
#define _MRTIMP2 _CRTIMP
#endif /* _MRTIMP2 */
# 332
#ifndef _MT
#define _MT
#endif /* _MT */

#ifndef _MCRTIMP
#define _MCRTIMP _CRTIMP
#endif /* _MCRTIMP */

#ifndef _CRTIMP_PURE
#define _CRTIMP_PURE _CRTIMP
#endif /* _CRTIMP_PURE */

#ifndef _PGLOBAL
#define _PGLOBAL
#endif /* _PGLOBAL */

#ifndef _AGLOBAL
#define _AGLOBAL
#endif /* _AGLOBAL */




#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_MEMORY */

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_GLOBALS */

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif /* _CRT_MANAGED_HEAP_DEPRECATE */

#ifndef _CRT_OBSOLETE
#define _CRT_OBSOLETE(_NewItem) 
#endif /* _CRT_OBSOLETE */



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
# 101 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#pragma pack ( pop )
# 285 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#pragma pack ( push, 8 )
# 377
__extension__ typedef unsigned long long size_t; 



#endif /* _SIZE_T_DEFINED */

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED


__extension__ typedef long long ssize_t; 



#endif /* _SSIZE_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#ifndef __intptr_t_defined
#define __intptr_t_defined


__extension__ typedef long long intptr_t; 



#endif /* __intptr_t_defined */
#endif /* _INTPTR_T_DEFINED */

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#ifndef __uintptr_t_defined
#define __uintptr_t_defined


__extension__ typedef unsigned long long uintptr_t; 



#endif /* __uintptr_t_defined */
#endif /* _UINTPTR_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#ifndef _PTRDIFF_T_
#define _PTRDIFF_T_


__extension__ typedef long long ptrdiff_t; 



#endif /* _PTRDIFF_T_ */
#endif /* _PTRDIFF_T_DEFINED */
# 439
#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
#ifndef _WINT_T
#define _WINT_T
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
#endif /* _WINT_T */
#endif /* _WCTYPE_T_DEFINED */
# 461
#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errno_t; 
#endif /* _ERRCODE_DEFINED */

#ifndef _TIME32_T_DEFINED
#define _TIME32_T_DEFINED
typedef long __time32_t; 
#endif /* _TIME32_T_DEFINED */

#ifndef _TIME64_T_DEFINED
#define _TIME64_T_DEFINED
__extension__ typedef long long __time64_t; 
#endif /* _TIME64_T_DEFINED */

#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED



typedef __time64_t time_t; 

#endif /* _TIME_T_DEFINED */

#ifndef _CONST_RETURN
#define _CONST_RETURN
#endif /* _CONST_RETURN */
# 507
#ifndef __CRTDECL
#define __CRTDECL __cdecl
#endif /* __CRTDECL */



#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif /* _TRUNCATE */

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
# 570
#ifndef __ANONYMOUS_DEFINED
#define __ANONYMOUS_DEFINED
# 581
#endif /* __ANONYMOUS_DEFINED */
# 656
__attribute((__cdecl__)) __attribute((gnu_inline)) extern __inline__ void __debugbreak(void); 
__attribute((__always_inline__, __gnu_inline__)) __attribute((__cdecl__)) extern __inline__ void __debugbreak(void) 
{ 
__asm__ volatile("int {$}3" : :); 
} 




const char *__mingw_get_crt_info(void); 
# 675
#endif /* _INC__MINGW_H */
# 17 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _CRTNOALIAS
#define _CRTNOALIAS
#endif /* _CRTNOALIAS */

#ifndef _CRTRESTRICT
#define _CRTRESTRICT
#endif /* _CRTRESTRICT */

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
# 672 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#pragma pack ( pop )
# 26 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
typedef size_t rsize_t; 

#endif /* _RSIZE_T_DEFINED */
# 153
struct threadlocaleinfostruct; 
struct threadmbcinfostruct; 
typedef struct threadlocaleinfostruct *pthreadlocinfo; 
typedef struct threadmbcinfostruct *pthreadmbcinfo; 
struct __lc_time_data; 




typedef 
# 159
struct localeinfo_struct { 
pthreadlocinfo locinfo; 
pthreadmbcinfo mbcinfo; 
} _locale_tstruct, *_locale_t; 

#ifndef _TAGLC_ID_DEFINED
#define _TAGLC_ID_DEFINED




typedef 
# 166
struct tagLC_ID { 
unsigned short wLanguage; 
unsigned short wCountry; 
unsigned short wCodePage; 
} LC_ID, *LPLC_ID; 
#endif /* _TAGLC_ID_DEFINED */

#ifndef _THREADLOCALEINFO
#define _THREADLOCALEINFO
# 199
typedef 
# 175
struct threadlocaleinfostruct { 
int refcount; 
unsigned lc_codepage; 
unsigned lc_collate_cp; 
unsigned long lc_handle[6]; 
LC_ID lc_id[6]; 
struct { 
char *locale; 
unsigned short *wlocale; 
int *refcount; 
int *wrefcount; 
} lc_category[6]; 
int lc_clike; 
int mb_cur_max; 
int *lconv_intl_refcount; 
int *lconv_num_refcount; 
int *lconv_mon_refcount; 
struct lconv *lconv; 
int *ctype1_refcount; 
unsigned short *ctype1; 
const unsigned short *pctype; 
const unsigned char *pclmap; 
const unsigned char *pcumap; 
struct __lc_time_data *lc_time_curr; 
} threadlocinfo; 
#endif /* _THREADLOCALEINFO */

#ifndef __crt_typefix
#define __crt_typefix(ctype) 
#endif /* __crt_typefix */

#endif /* _INC_CRTDEFS */
# 9 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stddef.h" 3
#ifndef _INC_STDDEF
#define _INC_STDDEF





#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
__attribute((__dllimport__)) extern int *_errno(void) __attribute((__cdecl__)); 

__attribute((__cdecl__)) errno_t _set_errno(int _Value); 
__attribute((__cdecl__)) errno_t _get_errno(int * _Value); 
#endif /* _CRT_ERRNO_DEFINED */

__attribute((__dllimport__)) __attribute((__cdecl__)) extern unsigned long __threadid(void); 

__attribute((__dllimport__)) __attribute((__cdecl__)) extern uintptr_t __threadhandle(void); 





#endif /* _INC_STDDEF */
# 340
#ifdef __need_wint_t
#undef __need_wint_t
#endif /* __need_wint_t */
# 35 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdint.h" 3
typedef signed char int8_t; 
typedef unsigned char uint8_t; 
typedef short int16_t; 
typedef unsigned short uint16_t; 
typedef int int32_t; 
typedef unsigned uint32_t; 
__extension__ typedef long long int64_t; 
__extension__ typedef unsigned long long uint64_t; 


typedef signed char int_least8_t; 
typedef unsigned char uint_least8_t; 
typedef short int_least16_t; 
typedef unsigned short uint_least16_t; 
typedef int int_least32_t; 
typedef unsigned uint_least32_t; 
__extension__ typedef long long int_least64_t; 
__extension__ typedef unsigned long long uint_least64_t; 
# 58
typedef signed char int_fast8_t; 
typedef unsigned char uint_fast8_t; 
typedef short int_fast16_t; 
typedef unsigned short uint_fast16_t; 
typedef int int_fast32_t; 
typedef unsigned uint_fast32_t; 
__extension__ typedef long long int_fast64_t; 
__extension__ typedef unsigned long long uint_fast64_t; 


__extension__ typedef long long intmax_t; 
__extension__ typedef unsigned long long uintmax_t; 
# 160
#ifndef WCHAR_MIN
#define WCHAR_MIN 0U

#endif /* WCHAR_MIN */
# 211
#endif /* _STDINT_H */
# 14 "C:\\LegacyApp\\TDM-GCC-64\\lib\\gcc\\x86_64-w64-mingw32\\4.9.2\\include\\stdint.h" 3
#endif /* _GCC_WRAP_STDINT_H */
# 3 "E:\\W\\T\\Trike_SpeedGoat_algo\\Data_Type.h"
typedef int32_t int32_T; 
typedef int16_t int16_T; 
typedef int8_t int8_T; 
typedef uint32_t uint32_T; 
typedef uint16_t uint16_T; 
typedef uint8_t uint8_T; 
# 20
typedef 
# 14
union { 
struct { 
uint8_T Dummy0; 
uint8_T StatusButtons1_8; 
}; 
uint8_T Message[8]; 
} RPDO_ID182; 
# 28
typedef 
# 22
union { 
struct { 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} RPDO_ID282; 
# 43
typedef 
# 31
union { 
struct { 
uint8_T Byte0; 
uint8_T Byte1; 
uint8_T Byte2; 
uint8_T Byte3; 
uint8_T Byte4; 
uint8_T Byte5; 
uint8_T Byte6; 
uint8_T Byte7; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C1; 
# 55
typedef 
# 46
union { 
struct { 
uint16_T BusVoltage; 
uint16_T dummy0; 
uint8_T MotorTemperature; 
uint8_T APTTemperature; 
uint16_T dummy1; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C2; 
# 67
typedef 
# 57
union { 
struct { 
uint8_T ErrorStatus; 
uint16_T dummy0; 
uint8_T PedalPosition; 
uint8_T Direction; 
uint16_T dummy1; 
uint8_T dummy2; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C3; 
# 79
typedef 
# 71
union { 
struct { 
uint16_T AN_01; 
uint16_T AN_02; 
uint16_T AN_03; 
uint16_T AN_04; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C8; 
# 87
typedef 
# 82
union { 
struct { 
uint32_T Encoder_Actual_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID1FF; 
# 93
typedef 
# 88
union { 
struct { 
uint32_T Encoder_Stored_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID2FF; 
# 107
typedef 
# 98
union { 
struct { 
uint8_T ClearError; 
uint8_T DeviceMode; 
uint8_T PowerEnable; 
uint8_T BrakeCtrl; 
int32_T DesiredCurrent; 
}; 
uint8_T Message[8]; 
} TPDO_ID20x; 
# 117
typedef 
# 111
union { 
struct { 
int32_T ActualCurrent; 
int32_T ActualVelocity; 
}; 
uint8_T Message[8]; 
} RPDO_ID18x; 
# 128
typedef 
# 119
union { 
struct { 
uint8_T ClearError; 
uint8_T DeviceMode; 
uint16_T dummy1; 
uint16_T dummy2; 
uint16_T dummy3; 
}; 
uint8_T Message[8]; 
} RPDO_ID28x; 
# 138
typedef 
# 131
union { 
struct { 
uint8_T StatusButtons1_8; 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} TPDO_ID185; 
# 151
typedef 
# 140
union { 
struct { 
uint8_T Status1; 
uint8_T Status2; 
uint8_T Status3; 
uint8_T Status4; 
uint8_T Status5; 
uint16_T Status6; 
uint8_T Status8; 
}; 
uint8_T Message[8]; 
} TPDO_ID186; 
# 151 "E:\\W\\T\\Trike_SpeedGoat_algo\\CANOpenSlave.h"
typedef 
# 135
struct { 
union { 
uint8_T BUF[8]; 
struct { 
uint32_T DW0; 
uint32_T DW1; 
}; 
struct { 
uint16_T W0; 
uint16_T W1; 
uint16_T W2; 
uint16_T W3; 
}; 
}; 
uint16_T ID; 
uint8_T LEN; 
} CAN_MSG; 
# 160
typedef 
# 155
struct { 
uint32_T ovf_cnt; 
CAN_MSG msg[8]; 
uint8_T in; 
uint8_T out; 
} CAN_MSG_QUEUE; 

CAN_MSG_QUEUE can_rx_queue; 
CAN_MSG *gRxCAN; 
# 180
typedef 
# 172
struct { 
uint8_T Node_ID; 
uint16_T error_code; 
uint16_T Baudrate; 
uint16_T heartbeat_time; 
uint16_T heartbeat_timestamp; 
CAN_MSG heartbeat_msg; 
uint8_T error_register; 
} CANOpenSlave_CONFIG; 
# 200
typedef 
# 184
struct { 

uint16_T event_time; 
uint16_T event_timestamp; 
# 198
uint8_T *pData; 
CAN_MSG CAN; 
} TPDO_CONFIG; 
# 208
typedef 
# 204
struct { 
uint16_T ID; 
uint8_T LEN; 
uint8_T *pData; 
} RPDO_CONFIG; 
# 215
void CANOpenSlave_ResetCommunication(void); 
void CANOpenSlave_ProcessStackAsyncRx(uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T * rxData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_GetRPDO(uint8_T no, uint8_T * data); 
void CANOpenHW_SendMessage(CAN_MSG * pTransmitBuf, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T * data); 

uint8_T Handle_SDO_Request(uint8_T * pData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
#endif /* _CANOPENSLAVE_DEFINES_H */
# 16 "E:\\W\\T\\Trike_SpeedGoat_algo\\CANOpenSlave.c"
RPDO_ID182 RPDO01; 
RPDO_ID282 RPDO02; 
RPDO_ID1FF RPDO03; 
RPDO_ID2FF RPDO04; 
RPDO_ID1C8 RPDO05; 
RPDO_ID18x RPDO06, RPDO07, RPDO08, RPDO09; 
RPDO_ID28x RPDO10, RPDO11, RPDO12, RPDO13; 


TPDO_ID20x TPDO01, TPDO02, TPDO03, TPDO04; 
# 31
uint16_T gTimCnt = (0); 
uint16_T aux_gTimCnt = (0), TimFactor = (10); 


CANOpenSlave_CONFIG gCANOPENConfig; 



TPDO_CONFIG gTPDOConfig[4]; 

uint8_T gTPDONr = (4); 




RPDO_CONFIG gRPDOConfig[13]; 




CAN_MSG gTxSDO; 


CAN_MSG gTxSDOw; 


CAN_MSG gTxEMGY; 




void CANOpenHW_SendMessage(CAN_MSG *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 
__MW_INSTRUM_NODE_2(), memcpy(txData, pTransmitBuf->BUF, pTransmitBuf->LEN); 
*txID = pTransmitBuf->ID; 
*txDLC = pTransmitBuf->LEN; __MW_INSTRUM_NODE_3(); 
} 



uint8_T CANOpenHW_IsTimeExpired(uint16_T timestamp) 
{ int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_4(); 
if (__MW_INSTRUM_NODE_5(((__mw_tmp_for_expr_1 = gTimCnt), ((__mw_tmp_for_expr_2 = timestamp), (__MW_INSTRUM_NODE_7(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ 
if (__MW_INSTRUM_NODE_10(((__mw_tmp_for_expr_3 = gTimCnt - timestamp), (__MW_INSTRUM_NODE_12(__mw_tmp_for_expr_3, 0x8000), (__mw_tmp_for_expr_3 < 0x8000))))) 
{ __MW_INSTRUM_NODE_15(); return 1; } else 

{ __MW_INSTRUM_NODE_16(); return 0; }  
} else 

{ 
if (__MW_INSTRUM_NODE_17(((__mw_tmp_for_expr_4 = timestamp - gTimCnt), (__MW_INSTRUM_NODE_19(__mw_tmp_for_expr_4, 0x8000), (__mw_tmp_for_expr_4 > 0x8000))))) 
{ __MW_INSTRUM_NODE_22(); return 1; } else 

{ __MW_INSTRUM_NODE_23(); return 0; }  
}  
} 


uint16_T CANOpenHW_GetTime(void) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_24(); 
{ uint16_T __mw_tmp_for_return = gTimCnt; __MW_INSTRUM_NODE_25(); return __mw_tmp_for_return; } 
} 
# 101
void Prepare_TPDOs(void) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_26(); { 
uint8_T i; 
i = (0); 
while (__MW_INSTRUM_NODE_27(i < 4)) 
{ 
if (__MW_INSTRUM_NODE_29(((__mw_tmp_for_expr_1 = (((gTPDOConfig)[i]).CAN).ID), (__MW_INSTRUM_NODE_31(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 != 0))))) 
{ 

__MW_INSTRUM_NODE_34(), memcpy(&(((((gTPDOConfig)[i]).CAN).BUF)[0]), ((gTPDOConfig)[i]).pData, (((gTPDOConfig)[i]).CAN).LEN); 


((gTPDOConfig)[i]).event_timestamp = (__MW_INSTRUM_NODE_35(), CANOpenHW_GetTime()); 
# 120
}  
i++; 
}  
gTPDONr = (4); } __MW_INSTRUM_NODE_36(); 
} 



void TransmitPDO(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_37(); 
# 135
((gTPDOConfig)[gTPDONr]).event_timestamp = (__MW_INSTRUM_NODE_38(), CANOpenHW_GetTime()) + ((gTPDOConfig)[gTPDONr]).event_time; 

__MW_INSTRUM_NODE_39(), CANOpenHW_SendMessage(&(((gTPDOConfig)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_40(); 
} 




void CANOpenSlave_Init(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_6(); __MW_INSTRUM_NODE_41(); { 
uint8_T i; 
# 152
can_rx_queue.in = (0); 
can_rx_queue.out = (0); 
can_rx_queue.ovf_cnt = (0); 

gCANOPENConfig.Node_ID = Node_ID; 
gCANOPENConfig.error_code = (0); 
gCANOPENConfig.Baudrate = Baudrate; 
gCANOPENConfig.heartbeat_time = Heartbeat; 
(gCANOPENConfig.heartbeat_msg).ID = 0x700 + Node_ID; 
(gCANOPENConfig.heartbeat_msg).LEN = (1); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0); 
gCANOPENConfig.error_register = (0); 



gTxSDO.ID = 0x580 + gCANOPENConfig.Node_ID; 
gTxSDO.LEN = (8); 



i = (0); 
while (__MW_INSTRUM_NODE_42(i < 4)) 
{ 
(((gTPDOConfig)[i]).CAN).ID = (0); 
i++; 
}  



i = (0); 
while (__MW_INSTRUM_NODE_44(i < 13)) 
{ 
((gRPDOConfig)[i]).ID = (0); 
i++; 
}  


gTPDONr = (0xff); } __MW_INSTRUM_NODE_46(); 
} 




void CANOpenSlave_InitRPDO(uint8_T PDO_NR, uint16_T CAN_ID, uint8_T len, uint8_T *dat) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_7(); __MW_INSTRUM_NODE_47(); 
PDO_NR--; 
((gRPDOConfig)[PDO_NR]).LEN = len; 
((gRPDOConfig)[PDO_NR]).pData = dat; 
if (__MW_INSTRUM_NODE_48(((__mw_tmp_for_expr_1 = CAN_ID), (__MW_INSTRUM_NODE_50(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0))))) 
{ 
((gRPDOConfig)[PDO_NR]).ID = (0x200 + 0x100 * (uint16_T)PDO_NR) + gCANOPENConfig.Node_ID; 
} else 

{ 
((gRPDOConfig)[PDO_NR]).ID = CAN_ID; 
}  __MW_INSTRUM_NODE_53(); 
} 
# 215
void CANOpenSlave_InitTPDO(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_8(); __MW_INSTRUM_NODE_54(); 
PDO_NR--; 
# 224
(((gTPDOConfig)[PDO_NR]).CAN).ID = CAN_ID; 

(((gTPDOConfig)[PDO_NR]).CAN).LEN = len; 
((gTPDOConfig)[PDO_NR]).pData = pDat; 

((gTPDOConfig)[PDO_NR]).event_time = event_time; __MW_INSTRUM_NODE_55(); 




} 




void CANOpenSlave_ResetApplication(void) 
{ __MW_INSTRUM_FCN_ENTER_9(); __MW_INSTRUM_NODE_56(); 
; __MW_INSTRUM_NODE_57(); 
} 




void CANOpenSlave_ResetCommunication(void) 
{ __MW_INSTRUM_FCN_ENTER_10(); __MW_INSTRUM_NODE_58(); 
__MW_INSTRUM_NODE_59(), CANOpenSlave_Init(500, 0x5, 2000); 




__MW_INSTRUM_NODE_60(), CANOpenSlave_InitTPDO(1, 0x20a, 10, 0, 8, &(TPDO01.Message)); 
__MW_INSTRUM_NODE_61(), CANOpenSlave_InitTPDO(2, 0x20b, 10, 0, 8, &(TPDO02.Message)); 
__MW_INSTRUM_NODE_62(), CANOpenSlave_InitTPDO(3, 0x20c, 10, 0, 8, &(TPDO03.Message)); 
__MW_INSTRUM_NODE_63(), CANOpenSlave_InitTPDO(4, 0x20d, 10, 0, 8, &(TPDO04.Message)); 
# 264
__MW_INSTRUM_NODE_64(), CANOpenSlave_InitRPDO(1, 0x182, 8, &(RPDO01.Message)); 
__MW_INSTRUM_NODE_65(), CANOpenSlave_InitRPDO(2, 0x282, 8, &(RPDO02.Message)); 
__MW_INSTRUM_NODE_66(), CANOpenSlave_InitRPDO(3, 0x1ff, 4, &(RPDO03.Message)); 
__MW_INSTRUM_NODE_67(), CANOpenSlave_InitRPDO(4, 0x2ff, 4, &(RPDO04.Message)); 
__MW_INSTRUM_NODE_68(), CANOpenSlave_InitRPDO(5, 0x1c8, 8, &(RPDO05.Message)); 
__MW_INSTRUM_NODE_69(), CANOpenSlave_InitRPDO(6, 0x18a, 8, &(RPDO06.Message)); 
__MW_INSTRUM_NODE_70(), CANOpenSlave_InitRPDO(7, 0x18b, 8, &(RPDO07.Message)); 
__MW_INSTRUM_NODE_71(), CANOpenSlave_InitRPDO(8, 0x18c, 8, &(RPDO08.Message)); 
__MW_INSTRUM_NODE_72(), CANOpenSlave_InitRPDO(9, 0x18d, 8, &(RPDO09.Message)); 


__MW_INSTRUM_NODE_73(), CANOpenSlave_InitRPDO(6, 0x28a, 8, &(RPDO10.Message)); 
__MW_INSTRUM_NODE_74(), CANOpenSlave_InitRPDO(7, 0x28b, 8, &(RPDO11.Message)); 
__MW_INSTRUM_NODE_75(), CANOpenSlave_InitRPDO(8, 0x28c, 8, &(RPDO12.Message)); 
__MW_INSTRUM_NODE_76(), CANOpenSlave_InitRPDO(9, 0x28d, 8, &(RPDO13.Message)); __MW_INSTRUM_NODE_77(); 




} 
# 292
const uint8_T SDOResponseTable[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((1000L >> 0) & (0xff)), ((1000L >> 8) & (0xff)), ((1000L >> 16) & (0xff)), ((1000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
# 474
uint8_T Search_OD(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_11(); __MW_INSTRUM_NODE_78(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable)[0]); 
while (__MW_INSTRUM_NODE_79(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; 
if (__MW_INSTRUM_NODE_81(__MW_INSTRUM_NODE_83(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_85(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_88(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_90(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_93(); 
return 255; 
}  __MW_INSTRUM_NODE_94(); 
if (__MW_INSTRUM_NODE_95(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_97(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ 
if (__MW_INSTRUM_NODE_100(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_102(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; 
if (__MW_INSTRUM_NODE_105(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_107(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_110(); return __mw_tmp_for_return; } 
}  
}  
}  __MW_INSTRUM_NODE_111(); 
i++; 
}  __MW_INSTRUM_NODE_112(); __MW_INSTRUM_NODE_113(); 
return 0xff; } 
} 
# 578
void Send_SDO_Abort(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_12(); __MW_INSTRUM_NODE_114(); { 
uint8_T i; 
(gTxSDO.BUF)[0] = (0x80); 
for (i = (0); __MW_INSTRUM_NODE_115(i < 4); i++) 
{ 
(gTxSDO.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_117(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); 
}  } __MW_INSTRUM_NODE_118(); 
} 


void CopyConstToData(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_13(); __MW_INSTRUM_NODE_119(); { 
uint8_T i; 
for (i = (0); __MW_INSTRUM_NODE_120(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } __MW_INSTRUM_NODE_122(); 
} 



uint8_T Handle_SDO_Request(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_14(); __MW_INSTRUM_NODE_123(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
# 618
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO.BUF)[1] = pData[1]; 
(gTxSDO.BUF)[2] = pData[2]; 
(gTxSDO.BUF)[3] = pData[3]; 


if (__MW_INSTRUM_NODE_124(__MW_INSTRUM_NODE_126(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_128(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_131(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_133(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
# 690
found = (__MW_INSTRUM_NODE_136(), Search_OD(index, subindex)); 

if (__MW_INSTRUM_NODE_137(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_139(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ 

if (__MW_INSTRUM_NODE_142(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_144(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_147(), memcpy(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8]), 8); 
__MW_INSTRUM_NODE_148(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_149(); 
return 1; 
}  __MW_INSTRUM_NODE_150(); 

__MW_INSTRUM_NODE_151(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_152(); 
return 0; 
}  __MW_INSTRUM_NODE_153(); 
if (__MW_INSTRUM_NODE_154(__MW_INSTRUM_NODE_156(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_158(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_161(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_163(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ 

if (__MW_INSTRUM_NODE_166(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_168(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_171(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_172(); 
return 1; 
}  __MW_INSTRUM_NODE_173(); 

__MW_INSTRUM_NODE_174(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_175(); 
return 0; 
}  __MW_INSTRUM_NODE_176(); 


if (__MW_INSTRUM_NODE_177(__MW_INSTRUM_NODE_179(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_181(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_184(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_186(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ 
if (__MW_INSTRUM_NODE_189(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_191(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4b); 
(gTxSDO.BUF)[4] = (uint8_T)(gCANOPENConfig.heartbeat_time); 
(gTxSDO.BUF)[5] = (uint8_T)((gCANOPENConfig.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_194(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_195(); 
return 1; 
}  __MW_INSTRUM_NODE_196(); 
if (__MW_INSTRUM_NODE_197(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_199(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig.heartbeat_time = pData[5]; 
gCANOPENConfig.heartbeat_time = ((gCANOPENConfig.heartbeat_time) << 8) + pData[4]; 
(gTxSDO.BUF)[0] = (0x60); 

(gTxSDO.BUF)[4] = (0); 
(gTxSDO.BUF)[5] = (0); 
(gTxSDO.BUF)[6] = (0); 
(gTxSDO.BUF)[7] = (0); 
__MW_INSTRUM_NODE_202(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_203(); 
return 1; 
}  __MW_INSTRUM_NODE_204(); 
__MW_INSTRUM_NODE_205(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_206(); 
return 0; 
}  __MW_INSTRUM_NODE_207(); 


found = (__MW_INSTRUM_NODE_208(), Search_OD(index, subindex)); 
if (__MW_INSTRUM_NODE_209(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_211(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ 
if (__MW_INSTRUM_NODE_214(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_216(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_219(), CopyConstToData(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8])); 
__MW_INSTRUM_NODE_220(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_221(); 
return 1; 
}  __MW_INSTRUM_NODE_222(); 

__MW_INSTRUM_NODE_223(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_224(); 
return 0; 
}  __MW_INSTRUM_NODE_225(); 
if (__MW_INSTRUM_NODE_226(__MW_INSTRUM_NODE_228(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_230(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_233(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_235(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ 
if (__MW_INSTRUM_NODE_238(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_240(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_243(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_244(); 
return 1; 
}  __MW_INSTRUM_NODE_245(); 

__MW_INSTRUM_NODE_246(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_247(); 
return 0; 
}  __MW_INSTRUM_NODE_248(); 
__MW_INSTRUM_NODE_249(), Send_SDO_Abort(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_250(); 
return 0; 
}  __MW_INSTRUM_NODE_251(); 
if (__MW_INSTRUM_NODE_252(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_254(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_257(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_258(); 
return 0; 
}  __MW_INSTRUM_NODE_259(); __MW_INSTRUM_NODE_260(); 
return 1; } 
} 

void SDO_Write(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_15(); __MW_INSTRUM_NODE_261(); { 
signed char k; 
gTxSDOw.ID = 0x600 + Node_ID; 
gTxSDOw.LEN = (8); 
(gTxSDOw.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw.BUF)[3] = subindex; 
for (k = (0); __MW_INSTRUM_NODE_262(k < 4); k++) 
{ (gTxSDOw.BUF)[4 + k] = (0); }  
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_264(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_265(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_266(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_267(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } __MW_INSTRUM_NODE_268(); 




} 
# 831
void CANOpenSlave_ProcessStackAsyncRx(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_26; int __mw_tmp_for_expr_25; int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_16(); __MW_INSTRUM_NODE_269(); { 
uint8_T i; 


aux_gTimCnt++; 

if (__MW_INSTRUM_NODE_270(((__mw_tmp_for_expr_1 = aux_gTimCnt), ((__mw_tmp_for_expr_2 = TimFactor), (__MW_INSTRUM_NODE_272(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ 
gTimCnt++; 
aux_gTimCnt = (0); 
}  


*txDLC = (0); 



if (__MW_INSTRUM_NODE_275(((__mw_tmp_for_expr_3 = can_rx_queue.in), ((__mw_tmp_for_expr_4 = can_rx_queue.out), (__MW_INSTRUM_NODE_277(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 != __mw_tmp_for_expr_4)))))) 
{ 
gRxCAN = &((can_rx_queue.msg)[can_rx_queue.out]); 




if (__MW_INSTRUM_NODE_280(__MW_INSTRUM_NODE_282(((__mw_tmp_for_expr_5 = gRxCAN->ID), (__MW_INSTRUM_NODE_284(__mw_tmp_for_expr_5, 0), (__mw_tmp_for_expr_5 == 0)))) && __MW_INSTRUM_NODE_287(((__mw_tmp_for_expr_6 = gRxCAN->LEN), (__MW_INSTRUM_NODE_289(__mw_tmp_for_expr_6, 3), (__mw_tmp_for_expr_6 < 3)))))) 
{ 
if (__MW_INSTRUM_NODE_292(__MW_INSTRUM_NODE_294(((__mw_tmp_for_expr_7 = (gRxCAN->BUF)[1]), ((__mw_tmp_for_expr_8 = gCANOPENConfig.Node_ID), (__MW_INSTRUM_NODE_296(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8))))) || __MW_INSTRUM_NODE_299(((__mw_tmp_for_expr_9 = (gRxCAN->BUF)[1]), (__MW_INSTRUM_NODE_301(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ 
switch ((gRxCAN->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_304(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_305(), Prepare_TPDOs(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_306(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_307(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_308(); 
__MW_INSTRUM_NODE_309(), CANOpenSlave_ResetApplication(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_310(); 
__MW_INSTRUM_NODE_311(), CANOpenSlave_ResetCommunication(); 
break; 
default:  __MW_INSTRUM_NODE_312(); 
break; 
}  

can_rx_queue.out = __MW_INSTRUM_NODE_313(((__mw_tmp_for_expr_10 = can_rx_queue.out), ((__mw_tmp_for_expr_11 = 8 - 1), (__MW_INSTRUM_NODE_315(__mw_tmp_for_expr_10, __mw_tmp_for_expr_11), (__mw_tmp_for_expr_10 < __mw_tmp_for_expr_11))))) ? (can_rx_queue.out + 1) : 0; __MW_INSTRUM_NODE_318(); 



return; 
}  
}  __MW_INSTRUM_NODE_319(); 




if (__MW_INSTRUM_NODE_320(((__mw_tmp_for_expr_12 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_322(__mw_tmp_for_expr_12, 0x4), (__mw_tmp_for_expr_12 != 0x4))))) 
{ 
if (__MW_INSTRUM_NODE_325(((__mw_tmp_for_expr_13 = gRxCAN->ID), ((__mw_tmp_for_expr_14 = gCANOPENConfig.Node_ID + 0x600), (__MW_INSTRUM_NODE_327(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 == __mw_tmp_for_expr_14)))))) 
{ 
i = (__MW_INSTRUM_NODE_330(), Handle_SDO_Request(&((gRxCAN->BUF)[0]), txID, txDLC, txData)); 
}  
}  




if (__MW_INSTRUM_NODE_331(((__mw_tmp_for_expr_15 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_333(__mw_tmp_for_expr_15, 0x5), (__mw_tmp_for_expr_15 == 0x5))))) 
{ 
i = (0); 
while (__MW_INSTRUM_NODE_336(i < 13)) 
{ 
if (__MW_INSTRUM_NODE_338(__MW_INSTRUM_NODE_340(((__mw_tmp_for_expr_16 = gRxCAN->ID), ((__mw_tmp_for_expr_17 = ((gRPDOConfig)[i]).ID), (__MW_INSTRUM_NODE_342(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))) && __MW_INSTRUM_NODE_345(((__mw_tmp_for_expr_18 = gRxCAN->LEN), ((__mw_tmp_for_expr_19 = ((gRPDOConfig)[i]).LEN), (__MW_INSTRUM_NODE_347(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 == __mw_tmp_for_expr_19))))))) 
{ 
# 920
__MW_INSTRUM_NODE_350(), memcpy(((gRPDOConfig)[i]).pData, &((gRxCAN->BUF)[0]), ((gRPDOConfig)[i]).LEN); 
i = (13); 
}  
i++; 
}  
}  


can_rx_queue.out = __MW_INSTRUM_NODE_351(((__mw_tmp_for_expr_20 = can_rx_queue.out), ((__mw_tmp_for_expr_21 = 8 - 1), (__MW_INSTRUM_NODE_353(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 < __mw_tmp_for_expr_21))))) ? (can_rx_queue.out + 1) : 0; 



}  __MW_INSTRUM_NODE_356(); 



if (__MW_INSTRUM_NODE_357(((__mw_tmp_for_expr_22 = gTPDONr), (__MW_INSTRUM_NODE_359(__mw_tmp_for_expr_22, 0xff), (__mw_tmp_for_expr_22 == 0xff))))) 
{ 

gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_362(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 

__MW_INSTRUM_NODE_363(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
# 948
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 

gTPDONr = (4); __MW_INSTRUM_NODE_364(); 
return; 
}  __MW_INSTRUM_NODE_365(); 



if (__MW_INSTRUM_NODE_366(((__mw_tmp_for_expr_23 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_368(__mw_tmp_for_expr_23, 0x5), (__mw_tmp_for_expr_23 == 0x5))))) 
{ 
gTPDONr++; 
if (__MW_INSTRUM_NODE_371(((__mw_tmp_for_expr_24 = gTPDONr), (__MW_INSTRUM_NODE_373(__mw_tmp_for_expr_24, 4), (__mw_tmp_for_expr_24 >= 4))))) 
{ 
gTPDONr = (0); 
}  



if (__MW_INSTRUM_NODE_376(__MW_INSTRUM_NODE_378(((__mw_tmp_for_expr_25 = ((gTPDOConfig)[gTPDONr]).event_time), (__MW_INSTRUM_NODE_380(__mw_tmp_for_expr_25, 0), (__mw_tmp_for_expr_25 != 0)))) && (__MW_INSTRUM_NODE_383((__MW_INSTRUM_NODE_385(), CANOpenHW_IsTimeExpired(((gTPDOConfig)[gTPDONr]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_386(), memcpy((((gTPDOConfig)[gTPDONr]).CAN).BUF, ((gTPDOConfig)[gTPDONr]).pData, (((gTPDOConfig)[gTPDONr]).CAN).LEN); 
__MW_INSTRUM_NODE_387(), TransmitPDO(gTPDONr, txID, txDLC, txData); __MW_INSTRUM_NODE_388(); 
return; 
}  
# 1004
}  __MW_INSTRUM_NODE_389(); 



if (__MW_INSTRUM_NODE_390(((__mw_tmp_for_expr_26 = gCANOPENConfig.heartbeat_time), (__MW_INSTRUM_NODE_392(__mw_tmp_for_expr_26, 0), (__mw_tmp_for_expr_26 != 0))))) 
{ 
if (__MW_INSTRUM_NODE_395((__MW_INSTRUM_NODE_397(), CANOpenHW_IsTimeExpired(gCANOPENConfig.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_398(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_399(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 
}  
}  } __MW_INSTRUM_NODE_400(); 
} 

void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_17(); __MW_INSTRUM_NODE_401(); 
if (__MW_INSTRUM_NODE_402(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_404(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_407(((__mw_tmp_for_expr_2 = can_rx_queue.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_409(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue.in + 1) : 0; 
if (__MW_INSTRUM_NODE_412(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue.out), (__MW_INSTRUM_NODE_414(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG *d = &((can_rx_queue.msg)[can_rx_queue.in]); 
__MW_INSTRUM_NODE_417(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue.in = n; 
}  
# 1036
}  
__MW_INSTRUM_NODE_418(), CANOpenSlave_ProcessStackAsyncRx(txID, txDLC, txData); __MW_INSTRUM_NODE_419(); 
} 

void CANOpenSlave_GetRPDO(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_18(); __MW_INSTRUM_NODE_420(); 
__MW_INSTRUM_NODE_421(), memcpy(data, ((gRPDOConfig)[no]).pData, ((gRPDOConfig)[no]).LEN); __MW_INSTRUM_NODE_422(); 
} 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_19(); __MW_INSTRUM_NODE_423(); 
__MW_INSTRUM_NODE_424(), memcpy(((gTPDOConfig)[no]).pData, data, 8); __MW_INSTRUM_NODE_425(); 
} 
