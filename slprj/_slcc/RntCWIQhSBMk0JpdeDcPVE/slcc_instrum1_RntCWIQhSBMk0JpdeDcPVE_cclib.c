#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(unsigned int decCovId);

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_81 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_81() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_81 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_83(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(83U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(84U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_83(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(83U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(84U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_88(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(88U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(89U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_88(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(88U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(89U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_81(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(81U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(82U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_81(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(81U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(82U), __MW_INSTRUM_RECORD_COMBINATION_HIT_81(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_123 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_123() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_123 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_125(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(125U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(126U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_125(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(125U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(126U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_130(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(130U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(131U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_130(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(130U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(131U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_123(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(123U), __MW_INSTRUM_RECORD_COMBINATION_HIT_123(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(124U), __MW_INSTRUM_RECORD_COMBINATION_HIT_123(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_123(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(123U), __MW_INSTRUM_RECORD_COMBINATION_HIT_123(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(124U), __MW_INSTRUM_RECORD_COMBINATION_HIT_123(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_152 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_152() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_152 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(154U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(155U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_154(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(154U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(155U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_159(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(159U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(160U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_159(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(159U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(160U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_152(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(152U), __MW_INSTRUM_RECORD_COMBINATION_HIT_152(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(153U), __MW_INSTRUM_RECORD_COMBINATION_HIT_152(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_152(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(152U), __MW_INSTRUM_RECORD_COMBINATION_HIT_152(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(153U), __MW_INSTRUM_RECORD_COMBINATION_HIT_152(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_174 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_174() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_174 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_176(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(176U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(177U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_176(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(176U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(177U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_181(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(181U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(182U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_181(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(181U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(182U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_174(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(174U), __MW_INSTRUM_RECORD_COMBINATION_HIT_174(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(175U), __MW_INSTRUM_RECORD_COMBINATION_HIT_174(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_174(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(174U), __MW_INSTRUM_RECORD_COMBINATION_HIT_174(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(175U), __MW_INSTRUM_RECORD_COMBINATION_HIT_174(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_221 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_221() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_221 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_223(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(223U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(224U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_223(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(223U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(224U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_228(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(228U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(229U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_228(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(228U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(229U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_221(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(221U), __MW_INSTRUM_RECORD_COMBINATION_HIT_221(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(222U), __MW_INSTRUM_RECORD_COMBINATION_HIT_221(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_221(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(221U), __MW_INSTRUM_RECORD_COMBINATION_HIT_221(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(222U), __MW_INSTRUM_RECORD_COMBINATION_HIT_221(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_274 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_274() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_274 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_276(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(276U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(277U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_276(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(276U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(277U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_281(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(281U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(282U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_281(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(281U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(282U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_274(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(274U), __MW_INSTRUM_RECORD_COMBINATION_HIT_274(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(275U), __MW_INSTRUM_RECORD_COMBINATION_HIT_274(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_274(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(274U), __MW_INSTRUM_RECORD_COMBINATION_HIT_274(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(275U), __MW_INSTRUM_RECORD_COMBINATION_HIT_274(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_286 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_286() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_286 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_288(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(288U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(289U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_288(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(288U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(289U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_293(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(293U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(294U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_293(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(293U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(294U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_286(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(286U), __MW_INSTRUM_RECORD_COMBINATION_HIT_286(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(287U), __MW_INSTRUM_RECORD_COMBINATION_HIT_286(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_286(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(286U), __MW_INSTRUM_RECORD_COMBINATION_HIT_286(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(287U), __MW_INSTRUM_RECORD_COMBINATION_HIT_286(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_331 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_331() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_331 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_333(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(333U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(334U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_333(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(333U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(334U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_338(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(338U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(339U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_338(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(338U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(339U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_331(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(331U), __MW_INSTRUM_RECORD_COMBINATION_HIT_331(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(332U), __MW_INSTRUM_RECORD_COMBINATION_HIT_331(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_331(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(331U), __MW_INSTRUM_RECORD_COMBINATION_HIT_331(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(332U), __MW_INSTRUM_RECORD_COMBINATION_HIT_331(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_367 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_367() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_367 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_369(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(369U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(370U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_369(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(369U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(370U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_374(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(374U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(375U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_374(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(374U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(375U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_367(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(367U), __MW_INSTRUM_RECORD_COMBINATION_HIT_367(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(368U), __MW_INSTRUM_RECORD_COMBINATION_HIT_367(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_367(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(367U), __MW_INSTRUM_RECORD_COMBINATION_HIT_367(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(368U), __MW_INSTRUM_RECORD_COMBINATION_HIT_367(), 0) : 0))
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
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_81 = 0; 
#define __MW_INSTRUM_FCN_ENTER_12() 
#define __MW_INSTRUM_FCN_ENTER_13() 
#define __MW_INSTRUM_FCN_ENTER_14() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_123 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_152 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_174 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_221 = 0; 
#define __MW_INSTRUM_FCN_ENTER_15() 
#define __MW_INSTRUM_FCN_ENTER_16() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_274 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_286 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_331 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_367 = 0; 
#define __MW_INSTRUM_FCN_ENTER_17() 
#define __MW_INSTRUM_FCN_ENTER_18() 
#define __MW_INSTRUM_FCN_ENTER_19() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_abs_tol, __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(4U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_5(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(5U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(6U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_5(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(5U), 1) : (__MW_INSTRUM_RECORD_HIT(6U), 0))
#endif
#define __MW_INSTRUM_NODE_7(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(7U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(8U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(9U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_10(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(10U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(11U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_10(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(10U), 1) : (__MW_INSTRUM_RECORD_HIT(11U), 0))
#endif
#define __MW_INSTRUM_NODE_12(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(12U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(13U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(14U) : (void) 0))) : (void) 0))
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
#define __MW_INSTRUM_NODE_19(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(19U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(20U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(21U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_22() \
  (__MW_INSTRUM_RECORD_HIT(22U))
#define __MW_INSTRUM_NODE_18() \
  (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_23() \
  (__MW_INSTRUM_RECORD_HIT(23U))
#define __MW_INSTRUM_NODE_24() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(24U))
#define __MW_INSTRUM_NODE_25() \
  (__MW_INSTRUM_RECORD_HIT(25U))
#define __MW_INSTRUM_NODE_26() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
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
#define __MW_INSTRUM_NODE_31(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(31U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(32U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(33U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_34() \
  (__MW_INSTRUM_RECORD_HIT(34U))
#define __MW_INSTRUM_NODE_35() \
  (__MW_INSTRUM_RECORD_HIT(35U))
#define __MW_INSTRUM_NODE_28() \
  (__MW_INSTRUM_RECORD_HIT(28U))
#define __MW_INSTRUM_NODE_36() \
  (__MW_INSTRUM_RECORD_HIT(36U))
#define __MW_INSTRUM_NODE_37() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(37U))
#define __MW_INSTRUM_NODE_38() \
  (__MW_INSTRUM_RECORD_HIT(38U))
#define __MW_INSTRUM_NODE_39() \
  (__MW_INSTRUM_RECORD_HIT(39U))
#define __MW_INSTRUM_NODE_40() \
  (__MW_INSTRUM_RECORD_HIT(40U))
#define __MW_INSTRUM_NODE_41() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(47U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_48(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(48U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(49U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_48(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(48U), 1) : (__MW_INSTRUM_RECORD_HIT(49U), 0))
#endif
#define __MW_INSTRUM_NODE_50(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(50U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(51U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(52U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_49() \
  (__MW_INSTRUM_RECORD_HIT(49U))
#define __MW_INSTRUM_NODE_53() \
  (__MW_INSTRUM_RECORD_HIT(53U))
#define __MW_INSTRUM_NODE_54() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(54U))
#define __MW_INSTRUM_NODE_55() \
  (__MW_INSTRUM_RECORD_HIT(55U))
#define __MW_INSTRUM_NODE_56() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(56U))
#define __MW_INSTRUM_NODE_57() \
  (__MW_INSTRUM_RECORD_HIT(57U))
#define __MW_INSTRUM_NODE_58() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(78U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_79(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(79U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(80U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_79(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(79U), 1) : (__MW_INSTRUM_RECORD_HIT(80U), 0))
#endif
#define __MW_INSTRUM_NODE_85(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(85U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(86U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(87U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_90(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(90U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(91U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(92U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_93() \
  (__MW_INSTRUM_RECORD_HIT(93U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_94(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(94U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(95U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_94(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(94U), 1) : (__MW_INSTRUM_RECORD_HIT(95U), 0))
#endif
#define __MW_INSTRUM_NODE_96(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(96U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(97U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(98U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_99(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(99U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(100U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_99(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(99U), 1) : (__MW_INSTRUM_RECORD_HIT(100U), 0))
#endif
#define __MW_INSTRUM_NODE_101(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(101U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(102U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(103U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_104(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(104U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(105U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_104(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(104U), 1) : (__MW_INSTRUM_RECORD_HIT(105U), 0))
#endif
#define __MW_INSTRUM_NODE_106(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(106U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(107U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(108U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_109() \
  (__MW_INSTRUM_RECORD_HIT(109U))
#define __MW_INSTRUM_NODE_110() \
  (__MW_INSTRUM_RECORD_HIT(110U))
#define __MW_INSTRUM_NODE_111() \
  (__MW_INSTRUM_RECORD_HIT(111U))
#define __MW_INSTRUM_NODE_112() \
  (__MW_INSTRUM_RECORD_HIT(112U))
#define __MW_INSTRUM_NODE_113() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(113U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_114(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(114U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(115U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_114(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(114U), 1) : (__MW_INSTRUM_RECORD_HIT(115U), 0))
#endif
#define __MW_INSTRUM_NODE_116() \
  (__MW_INSTRUM_RECORD_HIT(116U))
#define __MW_INSTRUM_NODE_117() \
  (__MW_INSTRUM_RECORD_HIT(117U))
#define __MW_INSTRUM_NODE_118() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(118U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_119(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(119U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(120U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_119(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(119U), 1) : (__MW_INSTRUM_RECORD_HIT(120U), 0))
#endif
#define __MW_INSTRUM_NODE_121() \
  (__MW_INSTRUM_RECORD_HIT(121U))
#define __MW_INSTRUM_NODE_122() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(122U))
#define __MW_INSTRUM_NODE_127(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(127U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(128U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(129U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_132(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(132U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(133U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(134U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_135() \
  (__MW_INSTRUM_RECORD_HIT(135U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_136(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(136U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(137U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_136(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(136U), 1) : (__MW_INSTRUM_RECORD_HIT(137U), 0))
#endif
#define __MW_INSTRUM_NODE_138(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(138U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(139U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(140U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_141(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(141U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(142U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_141(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(141U), 1) : (__MW_INSTRUM_RECORD_HIT(142U), 0))
#endif
#define __MW_INSTRUM_NODE_143(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(143U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(144U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(145U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_146() \
  (__MW_INSTRUM_RECORD_HIT(146U))
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
#define __MW_INSTRUM_NODE_156(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(156U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(157U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(158U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_161(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(161U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(162U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(163U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_164(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(164U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(165U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_164(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(164U), 1) : (__MW_INSTRUM_RECORD_HIT(165U), 0))
#endif
#define __MW_INSTRUM_NODE_166(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(166U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(167U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(168U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_169() \
  (__MW_INSTRUM_RECORD_HIT(169U))
#define __MW_INSTRUM_NODE_170() \
  (__MW_INSTRUM_RECORD_HIT(170U))
#define __MW_INSTRUM_NODE_171() \
  (__MW_INSTRUM_RECORD_HIT(171U))
#define __MW_INSTRUM_NODE_172() \
  (__MW_INSTRUM_RECORD_HIT(172U))
#define __MW_INSTRUM_NODE_173() \
  (__MW_INSTRUM_RECORD_HIT(173U))
#define __MW_INSTRUM_NODE_178(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(178U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(179U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(180U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_183(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(183U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(184U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(185U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_186(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(186U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(187U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_186(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(186U), 1) : (__MW_INSTRUM_RECORD_HIT(187U), 0))
#endif
#define __MW_INSTRUM_NODE_188(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(188U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(189U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(190U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_191() \
  (__MW_INSTRUM_RECORD_HIT(191U))
#define __MW_INSTRUM_NODE_192() \
  (__MW_INSTRUM_RECORD_HIT(192U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_193(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(193U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(194U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_193(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(193U), 1) : (__MW_INSTRUM_RECORD_HIT(194U), 0))
#endif
#define __MW_INSTRUM_NODE_195(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(195U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(196U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(197U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_198() \
  (__MW_INSTRUM_RECORD_HIT(198U))
#define __MW_INSTRUM_NODE_199() \
  (__MW_INSTRUM_RECORD_HIT(199U))
#define __MW_INSTRUM_NODE_200() \
  (__MW_INSTRUM_RECORD_HIT(200U))
#define __MW_INSTRUM_NODE_201() \
  (__MW_INSTRUM_RECORD_HIT(201U))
#define __MW_INSTRUM_NODE_202() \
  (__MW_INSTRUM_RECORD_HIT(202U))
#define __MW_INSTRUM_NODE_203() \
  (__MW_INSTRUM_RECORD_HIT(203U))
#define __MW_INSTRUM_NODE_204() \
  (__MW_INSTRUM_RECORD_HIT(204U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_205(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(205U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(206U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_205(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(205U), 1) : (__MW_INSTRUM_RECORD_HIT(206U), 0))
#endif
#define __MW_INSTRUM_NODE_207(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(207U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(208U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(209U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_210(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(210U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(211U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_210(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(210U), 1) : (__MW_INSTRUM_RECORD_HIT(211U), 0))
#endif
#define __MW_INSTRUM_NODE_212(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(212U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(213U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(214U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_215() \
  (__MW_INSTRUM_RECORD_HIT(215U))
#define __MW_INSTRUM_NODE_216() \
  (__MW_INSTRUM_RECORD_HIT(216U))
#define __MW_INSTRUM_NODE_217() \
  (__MW_INSTRUM_RECORD_HIT(217U))
#define __MW_INSTRUM_NODE_218() \
  (__MW_INSTRUM_RECORD_HIT(218U))
#define __MW_INSTRUM_NODE_219() \
  (__MW_INSTRUM_RECORD_HIT(219U))
#define __MW_INSTRUM_NODE_220() \
  (__MW_INSTRUM_RECORD_HIT(220U))
#define __MW_INSTRUM_NODE_225(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(225U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(226U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(227U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_230(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(230U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(231U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(232U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_233(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(233U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(234U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_233(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(233U), 1) : (__MW_INSTRUM_RECORD_HIT(234U), 0))
#endif
#define __MW_INSTRUM_NODE_235(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(235U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(236U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(237U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_238() \
  (__MW_INSTRUM_RECORD_HIT(238U))
#define __MW_INSTRUM_NODE_239() \
  (__MW_INSTRUM_RECORD_HIT(239U))
#define __MW_INSTRUM_NODE_240() \
  (__MW_INSTRUM_RECORD_HIT(240U))
#define __MW_INSTRUM_NODE_241() \
  (__MW_INSTRUM_RECORD_HIT(241U))
#define __MW_INSTRUM_NODE_242() \
  (__MW_INSTRUM_RECORD_HIT(242U))
#define __MW_INSTRUM_NODE_243() \
  (__MW_INSTRUM_RECORD_HIT(243U))
#define __MW_INSTRUM_NODE_244() \
  (__MW_INSTRUM_RECORD_HIT(244U))
#define __MW_INSTRUM_NODE_245() \
  (__MW_INSTRUM_RECORD_HIT(245U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_246(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(246U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(247U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_246(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(246U), 1) : (__MW_INSTRUM_RECORD_HIT(247U), 0))
#endif
#define __MW_INSTRUM_NODE_248(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(248U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(249U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(250U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_251() \
  (__MW_INSTRUM_RECORD_HIT(251U))
#define __MW_INSTRUM_NODE_252() \
  (__MW_INSTRUM_RECORD_HIT(252U))
#define __MW_INSTRUM_NODE_253() \
  (__MW_INSTRUM_RECORD_HIT(253U))
#define __MW_INSTRUM_NODE_254() \
  (__MW_INSTRUM_RECORD_HIT(254U))
#define __MW_INSTRUM_NODE_255() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(255U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_256(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(256U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(257U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_256(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(256U), 1) : (__MW_INSTRUM_RECORD_HIT(257U), 0))
#endif
#define __MW_INSTRUM_NODE_257() \
  (__MW_INSTRUM_RECORD_HIT(257U))
#define __MW_INSTRUM_NODE_258() \
  (__MW_INSTRUM_RECORD_HIT(258U))
#define __MW_INSTRUM_NODE_259() \
  (__MW_INSTRUM_RECORD_HIT(259U))
#define __MW_INSTRUM_NODE_260() \
  (__MW_INSTRUM_RECORD_HIT(260U))
#define __MW_INSTRUM_NODE_261() \
  (__MW_INSTRUM_RECORD_HIT(261U))
#define __MW_INSTRUM_NODE_262() \
  (__MW_INSTRUM_RECORD_HIT(262U))
#define __MW_INSTRUM_NODE_263() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(263U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_264(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(264U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(265U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_264(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(264U), 1) : (__MW_INSTRUM_RECORD_HIT(265U), 0))
#endif
#define __MW_INSTRUM_NODE_266(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(266U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(267U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(268U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_269(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(269U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(270U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_269(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(269U), 1) : (__MW_INSTRUM_RECORD_HIT(270U), 0))
#endif
#define __MW_INSTRUM_NODE_271(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(271U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(272U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(273U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_278(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(278U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(279U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(280U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_283(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(283U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(284U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(285U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_290(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(290U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(291U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(292U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_295(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(295U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(296U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(297U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_298() \
  (__MW_INSTRUM_RECORD_HIT(298U))
#define __MW_INSTRUM_NODE_299() \
  (__MW_INSTRUM_RECORD_HIT(299U))
#define __MW_INSTRUM_NODE_300() \
  (__MW_INSTRUM_RECORD_HIT(300U))
#define __MW_INSTRUM_NODE_301() \
  (__MW_INSTRUM_RECORD_HIT(301U))
#define __MW_INSTRUM_NODE_302() \
  (__MW_INSTRUM_RECORD_HIT(302U))
#define __MW_INSTRUM_NODE_303() \
  (__MW_INSTRUM_RECORD_HIT(303U))
#define __MW_INSTRUM_NODE_304() \
  (__MW_INSTRUM_RECORD_HIT(304U))
#define __MW_INSTRUM_NODE_305() \
  (__MW_INSTRUM_RECORD_HIT(305U))
#define __MW_INSTRUM_NODE_306() \
  (__MW_INSTRUM_RECORD_HIT(306U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_307(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(307U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(308U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_307(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(307U), 1) : (__MW_INSTRUM_RECORD_HIT(308U), 0))
#endif
#define __MW_INSTRUM_NODE_309(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(309U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(310U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(311U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_312() \
  (__MW_INSTRUM_RECORD_HIT(312U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_313(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(313U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(314U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_313(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(313U), 1) : (__MW_INSTRUM_RECORD_HIT(314U), 0))
#endif
#define __MW_INSTRUM_NODE_315(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(315U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(316U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(317U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_318(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(318U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(319U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_318(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(318U), 1) : (__MW_INSTRUM_RECORD_HIT(319U), 0))
#endif
#define __MW_INSTRUM_NODE_320(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(320U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(321U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(322U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_323() \
  (__MW_INSTRUM_RECORD_HIT(323U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_324(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(324U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(325U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_324(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(324U), 1) : (__MW_INSTRUM_RECORD_HIT(325U), 0))
#endif
#define __MW_INSTRUM_NODE_326(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(326U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(327U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(328U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_329(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(329U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(330U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_329(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(329U), 1) : (__MW_INSTRUM_RECORD_HIT(330U), 0))
#endif
#define __MW_INSTRUM_NODE_335(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(335U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(336U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(337U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_340(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(340U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(341U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(342U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_343() \
  (__MW_INSTRUM_RECORD_HIT(343U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_344(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(344U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(345U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_344(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(344U), 1) : (__MW_INSTRUM_RECORD_HIT(345U), 0))
#endif
#define __MW_INSTRUM_NODE_346(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(346U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(347U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(348U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_349(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(349U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(350U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_349(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(349U), 1) : (__MW_INSTRUM_RECORD_HIT(350U), 0))
#endif
#define __MW_INSTRUM_NODE_351(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(351U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(352U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(353U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_354() \
  (__MW_INSTRUM_RECORD_HIT(354U))
#define __MW_INSTRUM_NODE_355() \
  (__MW_INSTRUM_RECORD_HIT(355U))
#define __MW_INSTRUM_NODE_356() \
  (__MW_INSTRUM_RECORD_HIT(356U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_357(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(357U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(358U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_357(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(357U), 1) : (__MW_INSTRUM_RECORD_HIT(358U), 0))
#endif
#define __MW_INSTRUM_NODE_359(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(359U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(360U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(361U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_362(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(362U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(363U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_362(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(362U), 1) : (__MW_INSTRUM_RECORD_HIT(363U), 0))
#endif
#define __MW_INSTRUM_NODE_364(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(364U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(365U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(366U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_371(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(371U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(372U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(373U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_376() \
  (__MW_INSTRUM_RECORD_HIT(376U))
#define __MW_INSTRUM_NODE_377() \
  (__MW_INSTRUM_RECORD_HIT(377U))
#define __MW_INSTRUM_NODE_378() \
  (__MW_INSTRUM_RECORD_HIT(378U))
#define __MW_INSTRUM_NODE_379() \
  (__MW_INSTRUM_RECORD_HIT(379U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_380(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(380U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(381U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_380(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(380U), 1) : (__MW_INSTRUM_RECORD_HIT(381U), 0))
#endif
#define __MW_INSTRUM_NODE_382(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(382U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(383U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(384U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_385(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(385U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(386U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_385(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(385U), 1) : (__MW_INSTRUM_RECORD_HIT(386U), 0))
#endif
#define __MW_INSTRUM_NODE_387() \
  (__MW_INSTRUM_RECORD_HIT(387U))
#define __MW_INSTRUM_NODE_388() \
  (__MW_INSTRUM_RECORD_HIT(388U))
#define __MW_INSTRUM_NODE_389() \
  (__MW_INSTRUM_RECORD_HIT(389U))
#define __MW_INSTRUM_NODE_390() \
  (__MW_INSTRUM_RECORD_HIT(390U))
#define __MW_INSTRUM_NODE_391() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(391U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_392(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(392U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(393U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_392(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(392U), 1) : (__MW_INSTRUM_RECORD_HIT(393U), 0))
#endif
#define __MW_INSTRUM_NODE_394(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(394U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(395U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(396U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_397(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(397U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(398U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_397(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(397U), 1) : (__MW_INSTRUM_RECORD_HIT(398U), 0))
#endif
#define __MW_INSTRUM_NODE_399(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(399U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(400U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(401U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_402(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(402U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(403U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_402(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(402U), 1) : (__MW_INSTRUM_RECORD_HIT(403U), 0))
#endif
#define __MW_INSTRUM_NODE_404(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(404U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(405U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(406U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_407() \
  (__MW_INSTRUM_RECORD_HIT(407U))
#define __MW_INSTRUM_NODE_408() \
  (__MW_INSTRUM_RECORD_HIT(408U))
#define __MW_INSTRUM_NODE_409() \
  (__MW_INSTRUM_RECORD_HIT(409U))
#define __MW_INSTRUM_NODE_410() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(410U))
#define __MW_INSTRUM_NODE_411() \
  (__MW_INSTRUM_RECORD_HIT(411U))
#define __MW_INSTRUM_NODE_412() \
  (__MW_INSTRUM_RECORD_HIT(412U))
#define __MW_INSTRUM_NODE_413() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(81)))), \
   __MW_INSTRUM_RECORD_HIT(413U))
#define __MW_INSTRUM_NODE_414() \
  (__MW_INSTRUM_RECORD_HIT(414U))
#define __MW_INSTRUM_NODE_415() \
  (__MW_INSTRUM_RECORD_HIT(415U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_83CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_83(...) (__MW_INSTRUM_RECORD_HIT_83CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_83(exp) (__MW_INSTRUM_RECORD_HIT_83CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_88CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_88(...) (__MW_INSTRUM_RECORD_HIT_88CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_88(exp) (__MW_INSTRUM_RECORD_HIT_88CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_81DA_83_88Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_81(...) (__MW_INSTRUM_RECORD_HIT_81DA_83_88Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_81(exp) (__MW_INSTRUM_RECORD_HIT_81DA_83_88Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_125CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_125(...) (__MW_INSTRUM_RECORD_HIT_125CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_125(exp) (__MW_INSTRUM_RECORD_HIT_125CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_130CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_130(...) (__MW_INSTRUM_RECORD_HIT_130CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_130(exp) (__MW_INSTRUM_RECORD_HIT_130CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_123DO_125_130Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_123(...) (__MW_INSTRUM_RECORD_HIT_123DO_125_130Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_123(exp) (__MW_INSTRUM_RECORD_HIT_123DO_125_130Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_154CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) (__MW_INSTRUM_RECORD_HIT_154CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_154(exp) (__MW_INSTRUM_RECORD_HIT_154CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_159CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_159(...) (__MW_INSTRUM_RECORD_HIT_159CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_159(exp) (__MW_INSTRUM_RECORD_HIT_159CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_152DA_154_159Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_152(...) (__MW_INSTRUM_RECORD_HIT_152DA_154_159Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_152(exp) (__MW_INSTRUM_RECORD_HIT_152DA_154_159Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_176CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_176(...) (__MW_INSTRUM_RECORD_HIT_176CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_176(exp) (__MW_INSTRUM_RECORD_HIT_176CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_181CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_181(...) (__MW_INSTRUM_RECORD_HIT_181CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_181(exp) (__MW_INSTRUM_RECORD_HIT_181CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_174DA_176_181Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_174(...) (__MW_INSTRUM_RECORD_HIT_174DA_176_181Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_174(exp) (__MW_INSTRUM_RECORD_HIT_174DA_176_181Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_223CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_223(...) (__MW_INSTRUM_RECORD_HIT_223CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_223(exp) (__MW_INSTRUM_RECORD_HIT_223CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_228CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_228(...) (__MW_INSTRUM_RECORD_HIT_228CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_228(exp) (__MW_INSTRUM_RECORD_HIT_228CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_221DA_223_228Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_221(...) (__MW_INSTRUM_RECORD_HIT_221DA_223_228Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_221(exp) (__MW_INSTRUM_RECORD_HIT_221DA_223_228Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_276CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_276(...) (__MW_INSTRUM_RECORD_HIT_276CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_276(exp) (__MW_INSTRUM_RECORD_HIT_276CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_281CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_281(...) (__MW_INSTRUM_RECORD_HIT_281CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_281(exp) (__MW_INSTRUM_RECORD_HIT_281CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_274DA_276_281Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_274(...) (__MW_INSTRUM_RECORD_HIT_274DA_276_281Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_274(exp) (__MW_INSTRUM_RECORD_HIT_274DA_276_281Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_288CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_288(...) (__MW_INSTRUM_RECORD_HIT_288CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_288(exp) (__MW_INSTRUM_RECORD_HIT_288CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_293CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_293(...) (__MW_INSTRUM_RECORD_HIT_293CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_293(exp) (__MW_INSTRUM_RECORD_HIT_293CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_286DO_288_293Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_286(...) (__MW_INSTRUM_RECORD_HIT_286DO_288_293Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_286(exp) (__MW_INSTRUM_RECORD_HIT_286DO_288_293Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_333CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_333(...) (__MW_INSTRUM_RECORD_HIT_333CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_333(exp) (__MW_INSTRUM_RECORD_HIT_333CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_338CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_338(...) (__MW_INSTRUM_RECORD_HIT_338CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_338(exp) (__MW_INSTRUM_RECORD_HIT_338CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_331DA_333_338Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_331(...) (__MW_INSTRUM_RECORD_HIT_331DA_333_338Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_331(exp) (__MW_INSTRUM_RECORD_HIT_331DA_333_338Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_369CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_369(...) (__MW_INSTRUM_RECORD_HIT_369CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_369(exp) (__MW_INSTRUM_RECORD_HIT_369CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_374CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_374(...) (__MW_INSTRUM_RECORD_HIT_374CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_374(exp) (__MW_INSTRUM_RECORD_HIT_374CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_367DA_369_374Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_367(...) (__MW_INSTRUM_RECORD_HIT_367DA_369_374Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_367(exp) (__MW_INSTRUM_RECORD_HIT_367DA_369_374Z_RntCWIQhSBMk0JpdeDcPVE(exp))
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
void __MW_INSTRUM_RECORD_HIT_1EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_2() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_5DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_5(...) (__MW_INSTRUM_RECORD_HIT_5DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_5(exp) (__MW_INSTRUM_RECORD_HIT_5DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_7IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_7(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_7IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_10DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_10(...) (__MW_INSTRUM_RECORD_HIT_10DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_10(exp) (__MW_INSTRUM_RECORD_HIT_10DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_12(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_12IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_15XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_15() __MW_INSTRUM_RECORD_HIT_15XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_11() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_6() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_17DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_17(...) (__MW_INSTRUM_RECORD_HIT_17DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_17(exp) (__MW_INSTRUM_RECORD_HIT_17DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_19(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_19IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_22XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_22() __MW_INSTRUM_RECORD_HIT_22XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_18() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_23XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_23() __MW_INSTRUM_RECORD_HIT_23XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_24() __MW_INSTRUM_RECORD_HIT_24EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_25XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_25() __MW_INSTRUM_RECORD_HIT_25XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_26EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_26() __MW_INSTRUM_RECORD_HIT_26EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_31(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_31IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_34() ((void)0)


#define __MW_INSTRUM_NODE_35() ((void)0)


#define __MW_INSTRUM_NODE_28() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_36XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_36() __MW_INSTRUM_RECORD_HIT_36XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_37EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_37() __MW_INSTRUM_RECORD_HIT_37EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_38() ((void)0)


#define __MW_INSTRUM_NODE_39() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_40XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_40() __MW_INSTRUM_RECORD_HIT_40XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_41EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_41() __MW_INSTRUM_RECORD_HIT_41EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_42DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_42(...) (__MW_INSTRUM_RECORD_HIT_42DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_42(exp) (__MW_INSTRUM_RECORD_HIT_42DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_43() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_44DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_44(...) (__MW_INSTRUM_RECORD_HIT_44DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_44(exp) (__MW_INSTRUM_RECORD_HIT_44DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_45() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_46XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_46() __MW_INSTRUM_RECORD_HIT_46XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_47EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_47() __MW_INSTRUM_RECORD_HIT_47EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_48DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_48(...) (__MW_INSTRUM_RECORD_HIT_48DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_48(exp) (__MW_INSTRUM_RECORD_HIT_48DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_50IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_50(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_50IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_49() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_53XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_53() __MW_INSTRUM_RECORD_HIT_53XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_54EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_54() __MW_INSTRUM_RECORD_HIT_54EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_55XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_55() __MW_INSTRUM_RECORD_HIT_55XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_56EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_56() __MW_INSTRUM_RECORD_HIT_56EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_57XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_57() __MW_INSTRUM_RECORD_HIT_57XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_58EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_58() __MW_INSTRUM_RECORD_HIT_58EZ_RntCWIQhSBMk0JpdeDcPVE()

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
void __MW_INSTRUM_RECORD_HIT_77XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_77() __MW_INSTRUM_RECORD_HIT_77XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_78EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_78() __MW_INSTRUM_RECORD_HIT_78EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_79DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_79(...) (__MW_INSTRUM_RECORD_HIT_79DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_79(exp) (__MW_INSTRUM_RECORD_HIT_79DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_85IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_85(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_85IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_90IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_90(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_90IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_93XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_93() __MW_INSTRUM_RECORD_HIT_93XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_94DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_94(...) (__MW_INSTRUM_RECORD_HIT_94DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_94(exp) (__MW_INSTRUM_RECORD_HIT_94DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_96IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_96(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_96IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_99DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_99(...) (__MW_INSTRUM_RECORD_HIT_99DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_99(exp) (__MW_INSTRUM_RECORD_HIT_99DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_101IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_101(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_101IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_104DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_104(...) (__MW_INSTRUM_RECORD_HIT_104DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_104(exp) (__MW_INSTRUM_RECORD_HIT_104DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_106IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_106(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_106IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_109XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_109() __MW_INSTRUM_RECORD_HIT_109XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_110() ((void)0)


#define __MW_INSTRUM_NODE_111() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_112XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_112() __MW_INSTRUM_RECORD_HIT_112XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_113EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_113() __MW_INSTRUM_RECORD_HIT_113EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_114DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_114(...) (__MW_INSTRUM_RECORD_HIT_114DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_114(exp) (__MW_INSTRUM_RECORD_HIT_114DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_116() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_117XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_117() __MW_INSTRUM_RECORD_HIT_117XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_118EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_118() __MW_INSTRUM_RECORD_HIT_118EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_119DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_119(...) (__MW_INSTRUM_RECORD_HIT_119DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_119(exp) (__MW_INSTRUM_RECORD_HIT_119DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_121XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_121() __MW_INSTRUM_RECORD_HIT_121XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_122EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_122() __MW_INSTRUM_RECORD_HIT_122EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_127IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_127(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_127IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_132IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_132(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_132IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_135() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_136DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_136(...) (__MW_INSTRUM_RECORD_HIT_136DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_136(exp) (__MW_INSTRUM_RECORD_HIT_136DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_138IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_138(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_138IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_141DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_141(...) (__MW_INSTRUM_RECORD_HIT_141DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_141(exp) (__MW_INSTRUM_RECORD_HIT_141DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_143IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_143(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_143IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_146() ((void)0)


#define __MW_INSTRUM_NODE_147() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_148XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_148() __MW_INSTRUM_RECORD_HIT_148XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_149() ((void)0)


#define __MW_INSTRUM_NODE_150() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_151XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_151() __MW_INSTRUM_RECORD_HIT_151XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_156IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_156(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_156IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_161IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_161(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_161IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_164DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_164(...) (__MW_INSTRUM_RECORD_HIT_164DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_164(exp) (__MW_INSTRUM_RECORD_HIT_164DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_166IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_166(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_166IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_169() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_170XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_170() __MW_INSTRUM_RECORD_HIT_170XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_171() ((void)0)


#define __MW_INSTRUM_NODE_172() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_173XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_173() __MW_INSTRUM_RECORD_HIT_173XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_178IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_178(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_178IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_183IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_183(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_183IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_186DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_186(...) (__MW_INSTRUM_RECORD_HIT_186DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_186(exp) (__MW_INSTRUM_RECORD_HIT_186DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_188IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_188(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_188IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_191() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_192XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_192() __MW_INSTRUM_RECORD_HIT_192XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_193DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_193(...) (__MW_INSTRUM_RECORD_HIT_193DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_193(exp) (__MW_INSTRUM_RECORD_HIT_193DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_195IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_195(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_195IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_198() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_199XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_199() __MW_INSTRUM_RECORD_HIT_199XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_200() ((void)0)


#define __MW_INSTRUM_NODE_201() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_202XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_202() __MW_INSTRUM_RECORD_HIT_202XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_203() ((void)0)


#define __MW_INSTRUM_NODE_204() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_205DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_205(...) (__MW_INSTRUM_RECORD_HIT_205DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_205(exp) (__MW_INSTRUM_RECORD_HIT_205DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_207IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_207(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_207IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_210DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_210(...) (__MW_INSTRUM_RECORD_HIT_210DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_210(exp) (__MW_INSTRUM_RECORD_HIT_210DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_212IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_212(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_212IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_215() ((void)0)


#define __MW_INSTRUM_NODE_216() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_217XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_217() __MW_INSTRUM_RECORD_HIT_217XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_218() ((void)0)


#define __MW_INSTRUM_NODE_219() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_220XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_220() __MW_INSTRUM_RECORD_HIT_220XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_225IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_225(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_225IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_230IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_230(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_230IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_233DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_233(...) (__MW_INSTRUM_RECORD_HIT_233DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_233(exp) (__MW_INSTRUM_RECORD_HIT_233DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_235IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_235(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_235IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_238() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_239XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_239() __MW_INSTRUM_RECORD_HIT_239XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_240() ((void)0)


#define __MW_INSTRUM_NODE_241() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_242XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_242() __MW_INSTRUM_RECORD_HIT_242XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_243() ((void)0)


#define __MW_INSTRUM_NODE_244() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_245XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_245() __MW_INSTRUM_RECORD_HIT_245XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_246DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_246(...) (__MW_INSTRUM_RECORD_HIT_246DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_246(exp) (__MW_INSTRUM_RECORD_HIT_246DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_248IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_248(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_248IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_251() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_252XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_252() __MW_INSTRUM_RECORD_HIT_252XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_253() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_254XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_254() __MW_INSTRUM_RECORD_HIT_254XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_255EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_255() __MW_INSTRUM_RECORD_HIT_255EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_256DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_256(...) (__MW_INSTRUM_RECORD_HIT_256DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_256(exp) (__MW_INSTRUM_RECORD_HIT_256DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_257() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_258DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_258() __MW_INSTRUM_RECORD_HIT_258DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_259DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_259() __MW_INSTRUM_RECORD_HIT_259DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_260DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_260() __MW_INSTRUM_RECORD_HIT_260DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_261DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_261() __MW_INSTRUM_RECORD_HIT_261DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_262XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_262() __MW_INSTRUM_RECORD_HIT_262XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_263EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_263() __MW_INSTRUM_RECORD_HIT_263EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_264DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_264(...) (__MW_INSTRUM_RECORD_HIT_264DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_264(exp) (__MW_INSTRUM_RECORD_HIT_264DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_266IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_266(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_266IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_269DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_269(...) (__MW_INSTRUM_RECORD_HIT_269DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_269(exp) (__MW_INSTRUM_RECORD_HIT_269DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_271IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_271(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_271IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_278IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_278(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_278IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_283IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_283(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_283IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_290IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_290(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_290IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_295IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_295(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_295IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_298DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_298() __MW_INSTRUM_RECORD_HIT_298DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_299() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_300DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_300() __MW_INSTRUM_RECORD_HIT_300DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_301DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_301() __MW_INSTRUM_RECORD_HIT_301DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_302DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_302() __MW_INSTRUM_RECORD_HIT_302DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_303() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_304DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_304() __MW_INSTRUM_RECORD_HIT_304DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_305() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_306DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_306() __MW_INSTRUM_RECORD_HIT_306DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_307DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_307(...) (__MW_INSTRUM_RECORD_HIT_307DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_307(exp) (__MW_INSTRUM_RECORD_HIT_307DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_309IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_309(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_309IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_312XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_312() __MW_INSTRUM_RECORD_HIT_312XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_313DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_313(...) (__MW_INSTRUM_RECORD_HIT_313DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_313(exp) (__MW_INSTRUM_RECORD_HIT_313DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_315IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_315(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_315IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_318DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_318(...) (__MW_INSTRUM_RECORD_HIT_318DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_318(exp) (__MW_INSTRUM_RECORD_HIT_318DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_320IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_320(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_320IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_323() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_324DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_324(...) (__MW_INSTRUM_RECORD_HIT_324DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_324(exp) (__MW_INSTRUM_RECORD_HIT_324DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_326IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_326(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_326IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_329DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_329(...) (__MW_INSTRUM_RECORD_HIT_329DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_329(exp) (__MW_INSTRUM_RECORD_HIT_329DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_335IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_335(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_335IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_340IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_340(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_340IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_343() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_344DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_344(...) (__MW_INSTRUM_RECORD_HIT_344DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_344(exp) (__MW_INSTRUM_RECORD_HIT_344DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_346IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_346(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_346IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_349DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_349(...) (__MW_INSTRUM_RECORD_HIT_349DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_349(exp) (__MW_INSTRUM_RECORD_HIT_349DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_351IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_351(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_351IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_354() ((void)0)


#define __MW_INSTRUM_NODE_355() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_356XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_356() __MW_INSTRUM_RECORD_HIT_356XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_357DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_357(...) (__MW_INSTRUM_RECORD_HIT_357DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_357(exp) (__MW_INSTRUM_RECORD_HIT_357DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_359IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_359(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_359IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_362DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_362(...) (__MW_INSTRUM_RECORD_HIT_362DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_362(exp) (__MW_INSTRUM_RECORD_HIT_362DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_364IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_364(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_364IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_371IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_371(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_371IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_376() ((void)0)


#define __MW_INSTRUM_NODE_377() ((void)0)


#define __MW_INSTRUM_NODE_378() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_379XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_379() __MW_INSTRUM_RECORD_HIT_379XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_380DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_380(...) (__MW_INSTRUM_RECORD_HIT_380DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_380(exp) (__MW_INSTRUM_RECORD_HIT_380DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_382IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_382(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_382IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_385DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_385(...) (__MW_INSTRUM_RECORD_HIT_385DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_385(exp) (__MW_INSTRUM_RECORD_HIT_385DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_387() ((void)0)


#define __MW_INSTRUM_NODE_388() ((void)0)


#define __MW_INSTRUM_NODE_389() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_390XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_390() __MW_INSTRUM_RECORD_HIT_390XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_391EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_391() __MW_INSTRUM_RECORD_HIT_391EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_392DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_392(...) (__MW_INSTRUM_RECORD_HIT_392DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_392(exp) (__MW_INSTRUM_RECORD_HIT_392DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_394IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_394(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_394IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_397DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_397(...) (__MW_INSTRUM_RECORD_HIT_397DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_397(exp) (__MW_INSTRUM_RECORD_HIT_397DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_399IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_399(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_399IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_402DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_402(...) (__MW_INSTRUM_RECORD_HIT_402DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_402(exp) (__MW_INSTRUM_RECORD_HIT_402DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_404IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_404(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_404IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_407() ((void)0)


#define __MW_INSTRUM_NODE_408() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_409XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_409() __MW_INSTRUM_RECORD_HIT_409XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_410EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_410() __MW_INSTRUM_RECORD_HIT_410EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_411() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_412XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_412() __MW_INSTRUM_RECORD_HIT_412XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_413EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_413() __MW_INSTRUM_RECORD_HIT_413EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_414() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_415XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_415() __MW_INSTRUM_RECORD_HIT_415XZ_RntCWIQhSBMk0JpdeDcPVE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlave.c"
#line 8 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlave.h"
#ifndef _CANOPENSLAVE_DEFINES_H
#define _CANOPENSLAVE_DEFINES_H
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H

#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2363
#ifndef __nothrow
#define __nothrow
#endif /* __nothrow */
#line 2879
#ifndef __fallthrough
#define __fallthrough __inner_fallthrough

#endif /* __fallthrough */
#line 16 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 266
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 357
#endif /* CONCURRENCYSAL_H */
#line 25 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 28
typedef unsigned __int64 uintptr_t; 



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



typedef char *va_list; 

#endif /* _VA_LIST_DEFINED */
#line 112
void __cdecl __va_start(va_list *, ...); 
#line 164
#pragma pack ( pop )
#line 83 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) 
#line 180
typedef unsigned __int64 size_t; 
typedef __int64 ptrdiff_t; 
typedef __int64 intptr_t; 
#line 196
typedef _Bool __vcrt_bool; 



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */


#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned short wchar_t; 
#endif /* _WCHAR_T_DEFINED */
#line 277
void __cdecl __security_init_cookie(void); 
#line 283
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 



extern uintptr_t __security_cookie; 
#line 298
#endif /* _VCRUNTIME_H */
#line 296
__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\stdint.h"
typedef char int8_t; 
typedef short int16_t; 
typedef int int32_t; 
typedef __int64 int64_t; 
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t; 
typedef unsigned uint32_t; 
typedef unsigned __int64 uint64_t; 

typedef char int_least8_t; 
typedef short int_least16_t; 
typedef int int_least32_t; 
typedef __int64 int_least64_t; 
typedef unsigned char uint_least8_t; 
typedef unsigned short uint_least16_t; 
typedef unsigned uint_least32_t; 
typedef unsigned __int64 uint_least64_t; 

typedef char int_fast8_t; 
typedef int int_fast16_t; 
typedef int int_fast32_t; 
typedef __int64 int_fast64_t; 
typedef unsigned char uint_fast8_t; 
typedef unsigned uint_fast16_t; 
typedef unsigned uint_fast32_t; 
typedef unsigned __int64 uint_fast64_t; 

typedef __int64 intmax_t; 
typedef unsigned __int64 uintmax_t; 
#line 104
#ifndef SIZE_MAX
#define SIZE_MAX UINTPTR_MAX
#endif /* SIZE_MAX */
#line 3 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\Data_Type.h"
typedef int32_t int32_T; 
typedef int16_t int16_T; 
typedef int8_t int8_T; 
typedef uint32_t uint32_T; 
typedef uint16_t uint16_T; 
typedef uint8_t uint8_T; 
#line 20
typedef 
#line 14
union { 
struct { 
uint8_T Dummy0; 
uint8_T StatusButtons1_8; 
}; 
uint8_T Message[8]; 
} RPDO_ID182; 
#line 28
typedef 
#line 22
union { 
struct { 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} RPDO_ID282; 
#line 79
typedef 
#line 71
union { 
struct { 
uint16_T AN_01; 
uint16_T AN_02; 
uint16_T AN_03; 
uint16_T AN_04; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C8; 
#line 87
typedef 
#line 82
union { 
struct { 
uint32_T Encoder_Actual_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID1FF; 
#line 93
typedef 
#line 88
union { 
struct { 
uint32_T Encoder_Stored_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID2FF; 
#line 107
typedef 
#line 98
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
#line 117
typedef 
#line 111
union { 
struct { 
int32_T ActualCurrent; 
int32_T ActualVelocity; 
}; 
uint8_T Message[8]; 
} RPDO_ID18x; 
#line 128
typedef 
#line 119
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
#line 138
typedef 
#line 131
union { 
struct { 
uint8_T StatusButtons1_8; 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} TPDO_ID185; 
#line 151
typedef 
#line 140
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
#line 151 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlave.h"
typedef 
#line 135
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
#line 160
typedef 
#line 155
struct { 
uint32_T ovf_cnt; 
CAN_MSG msg[8]; 
uint8_T in; 
uint8_T out; 
} CAN_MSG_QUEUE; 

CAN_MSG_QUEUE can_rx_queue; 
CAN_MSG *gRxCAN; 
#line 180
typedef 
#line 172
struct { 
uint8_T Node_ID; 
uint16_T error_code; 
uint16_T Baudrate; 
uint16_T heartbeat_time; 
uint16_T heartbeat_timestamp; 
CAN_MSG heartbeat_msg; 
uint8_T error_register; 
} CANOpenSlave_CONFIG; 
#line 200
typedef 
#line 184
struct { 

uint16_T event_time; 
uint16_T event_timestamp; 
#line 198
uint8_T *pData; 
CAN_MSG CAN; 
} TPDO_CONFIG; 
#line 208
typedef 
#line 204
struct { 
uint16_T ID; 
uint8_T LEN; 
uint8_T *pData; 
} RPDO_CONFIG; 
#line 215
void CANOpenSlave_ResetCommunication(void); 
void CANOpenSlave_ProcessStackAsyncRx(uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T * rxData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_GetRPDO(uint8_T no, uint8_T * data); 
void CANOpenHW_SendMessage(CAN_MSG * pTransmitBuf, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T * data); 

uint8_T Handle_SDO_Request(uint8_T * pData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
#endif /* _CANOPENSLAVE_DEFINES_H */
#line 16 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlave.c"
RPDO_ID182 RPDO01; 
RPDO_ID282 RPDO02; 
RPDO_ID1FF RPDO03; 
RPDO_ID2FF RPDO04; 
RPDO_ID1C8 RPDO05; 
RPDO_ID18x RPDO06, RPDO07, RPDO08, RPDO09; 
RPDO_ID28x RPDO10, RPDO11, RPDO12, RPDO13; 


TPDO_ID20x TPDO01, TPDO02, TPDO03, TPDO04; 
#line 31
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
{ int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_4(); { 
if (__MW_INSTRUM_NODE_5(((__mw_tmp_for_expr_1 = gTimCnt), ((__mw_tmp_for_expr_2 = timestamp), (__MW_INSTRUM_NODE_7(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ { 
if (__MW_INSTRUM_NODE_10(((__mw_tmp_for_expr_3 = gTimCnt - timestamp), (__MW_INSTRUM_NODE_12(__mw_tmp_for_expr_3, 0x8000), (__mw_tmp_for_expr_3 < 0x8000))))) 
{ __MW_INSTRUM_NODE_15(); return 1; } else 

{ __MW_INSTRUM_NODE_16(); return 0; }  } 
} else 

{ { 
if (__MW_INSTRUM_NODE_17(((__mw_tmp_for_expr_4 = timestamp - gTimCnt), (__MW_INSTRUM_NODE_19(__mw_tmp_for_expr_4, 0x8000), (__mw_tmp_for_expr_4 > 0x8000))))) 
{ __MW_INSTRUM_NODE_22(); return 1; } else 

{ __MW_INSTRUM_NODE_23(); return 0; }  } 
}  } 
} 


uint16_T CANOpenHW_GetTime(void) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_24(); 
{ uint16_T __mw_tmp_for_return = gTimCnt; __MW_INSTRUM_NODE_25(); return __mw_tmp_for_return; } 
} 
#line 101
void Prepare_TPDOs(void) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_26(); { 
uint8_T i; 
i = (0); { 
while (__MW_INSTRUM_NODE_27(i < 4)) 
{ { 
if (__MW_INSTRUM_NODE_29(((__mw_tmp_for_expr_1 = (((gTPDOConfig)[i]).CAN).ID), (__MW_INSTRUM_NODE_31(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 != 0))))) 
{ 

__MW_INSTRUM_NODE_34(), memcpy(&(((((gTPDOConfig)[i]).CAN).BUF)[0]), ((gTPDOConfig)[i]).pData, (((gTPDOConfig)[i]).CAN).LEN); 


((gTPDOConfig)[i]).event_timestamp = (__MW_INSTRUM_NODE_35(), CANOpenHW_GetTime()); 
#line 120
}  } 
i++; 
}  } 
gTPDONr = (4); } __MW_INSTRUM_NODE_36(); 
} 



void TransmitPDO(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_37(); 
#line 135
((gTPDOConfig)[gTPDONr]).event_timestamp = (__MW_INSTRUM_NODE_38(), CANOpenHW_GetTime()) + ((gTPDOConfig)[gTPDONr]).event_time; 

__MW_INSTRUM_NODE_39(), CANOpenHW_SendMessage(&(((gTPDOConfig)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_40(); 
} 




void CANOpenSlave_Init(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_6(); __MW_INSTRUM_NODE_41(); { 
uint8_T i; 
#line 152
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



i = (0); { 
while (__MW_INSTRUM_NODE_42(i < 4)) 
{ 
(((gTPDOConfig)[i]).CAN).ID = (0); 
i++; 
}  } 



i = (0); { 
while (__MW_INSTRUM_NODE_44(i < 13)) 
{ 
((gRPDOConfig)[i]).ID = (0); 
i++; 
}  } 


gTPDONr = (0xff); } __MW_INSTRUM_NODE_46(); 
} 




void CANOpenSlave_InitRPDO(uint8_T PDO_NR, uint16_T CAN_ID, uint8_T len, uint8_T *dat) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_7(); __MW_INSTRUM_NODE_47(); 
PDO_NR--; 
((gRPDOConfig)[PDO_NR]).LEN = len; 
((gRPDOConfig)[PDO_NR]).pData = dat; { 
if (__MW_INSTRUM_NODE_48(((__mw_tmp_for_expr_1 = CAN_ID), (__MW_INSTRUM_NODE_50(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0))))) 
{ 
((gRPDOConfig)[PDO_NR]).ID = (0x200 + 0x100 * (uint16_T)PDO_NR) + gCANOPENConfig.Node_ID; 
} else 

{ 
((gRPDOConfig)[PDO_NR]).ID = CAN_ID; 
}  } __MW_INSTRUM_NODE_53(); 
} 
#line 215
void CANOpenSlave_InitTPDO(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_8(); __MW_INSTRUM_NODE_54(); 
PDO_NR--; 
#line 224
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
#line 264
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
#line 292
const uint8_T SDOResponseTable[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((1000L >> 0) & (0xff)), ((1000L >> 8) & (0xff)), ((1000L >> 16) & (0xff)), ((1000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 474
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
r = &((SDOResponseTable)[0]); { 
while (__MW_INSTRUM_NODE_79(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_81(__MW_INSTRUM_NODE_83(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_85(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_88(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_90(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_93(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_94(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_96(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_99(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_101(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_104(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_106(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_109(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_110(); 
i++; 
}  } __MW_INSTRUM_NODE_111(); __MW_INSTRUM_NODE_112(); 
return 0xff; } 
} 
#line 578
void Send_SDO_Abort(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_12(); __MW_INSTRUM_NODE_113(); { 
uint8_T i; 
(gTxSDO.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_114(i < 4); i++) 
{ 
(gTxSDO.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_116(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_117(); 
} 


void CopyConstToData(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_13(); __MW_INSTRUM_NODE_118(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_119(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_121(); 
} 



uint8_T Handle_SDO_Request(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_14(); __MW_INSTRUM_NODE_122(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
#line 618
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO.BUF)[1] = pData[1]; 
(gTxSDO.BUF)[2] = pData[2]; 
(gTxSDO.BUF)[3] = pData[3]; { 


if (__MW_INSTRUM_NODE_123(__MW_INSTRUM_NODE_125(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_127(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_130(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_132(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 690
found = (__MW_INSTRUM_NODE_135(), Search_OD(index, subindex)); { 

if (__MW_INSTRUM_NODE_136(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_138(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_141(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_143(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_146(), memcpy(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8]), 8); 
__MW_INSTRUM_NODE_147(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_148(); 
return 1; 
}  } __MW_INSTRUM_NODE_149(); 

__MW_INSTRUM_NODE_150(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_151(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_152(__MW_INSTRUM_NODE_154(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_156(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_159(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_161(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_164(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_166(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_169(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_170(); 
return 1; 
}  } __MW_INSTRUM_NODE_171(); 

__MW_INSTRUM_NODE_172(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_173(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_174(__MW_INSTRUM_NODE_176(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_178(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_181(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_183(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_186(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_188(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4b); 
(gTxSDO.BUF)[4] = (uint8_T)(gCANOPENConfig.heartbeat_time); 
(gTxSDO.BUF)[5] = (uint8_T)((gCANOPENConfig.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_191(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_192(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_193(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_195(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig.heartbeat_time = pData[5]; 
gCANOPENConfig.heartbeat_time = ((gCANOPENConfig.heartbeat_time) << 8) + pData[4]; 
(gTxSDO.BUF)[0] = (0x60); 

(gTxSDO.BUF)[4] = (0); 
(gTxSDO.BUF)[5] = (0); 
(gTxSDO.BUF)[6] = (0); 
(gTxSDO.BUF)[7] = (0); 
__MW_INSTRUM_NODE_198(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_199(); 
return 1; 
}  } __MW_INSTRUM_NODE_200(); 
__MW_INSTRUM_NODE_201(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_202(); 
return 0; 
}  } __MW_INSTRUM_NODE_203(); 


found = (__MW_INSTRUM_NODE_204(), Search_OD(index, subindex)); { 
if (__MW_INSTRUM_NODE_205(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_207(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_210(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_212(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_215(), CopyConstToData(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8])); 
__MW_INSTRUM_NODE_216(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_217(); 
return 1; 
}  } __MW_INSTRUM_NODE_218(); 

__MW_INSTRUM_NODE_219(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_220(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_221(__MW_INSTRUM_NODE_223(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_225(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_228(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_230(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_233(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_235(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_238(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_239(); 
return 1; 
}  } __MW_INSTRUM_NODE_240(); 

__MW_INSTRUM_NODE_241(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_242(); 
return 0; 
}  } __MW_INSTRUM_NODE_243(); 
__MW_INSTRUM_NODE_244(), Send_SDO_Abort(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_245(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_246(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_248(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_251(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_252(); 
return 0; 
}  } __MW_INSTRUM_NODE_253(); __MW_INSTRUM_NODE_254(); 
return 1; } 
} 

void SDO_Write(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_15(); __MW_INSTRUM_NODE_255(); { 
char k; 
gTxSDOw.ID = 0x600 + Node_ID; 
gTxSDOw.LEN = (8); 
(gTxSDOw.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_256(k < 4); k++) 
{ (gTxSDOw.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_258(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_259(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_260(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_261(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_262(); 




} 
#line 831
void CANOpenSlave_ProcessStackAsyncRx(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_26; int __mw_tmp_for_expr_25; int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_16(); __MW_INSTRUM_NODE_263(); { 
uint8_T i; 


aux_gTimCnt++; { 

if (__MW_INSTRUM_NODE_264(((__mw_tmp_for_expr_1 = aux_gTimCnt), ((__mw_tmp_for_expr_2 = TimFactor), (__MW_INSTRUM_NODE_266(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ 
gTimCnt++; 
aux_gTimCnt = (0); 
}  } 


*txDLC = (0); { 



if (__MW_INSTRUM_NODE_269(((__mw_tmp_for_expr_3 = can_rx_queue.in), ((__mw_tmp_for_expr_4 = can_rx_queue.out), (__MW_INSTRUM_NODE_271(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 != __mw_tmp_for_expr_4)))))) 
{ 
gRxCAN = &((can_rx_queue.msg)[can_rx_queue.out]); { 




if (__MW_INSTRUM_NODE_274(__MW_INSTRUM_NODE_276(((__mw_tmp_for_expr_5 = gRxCAN->ID), (__MW_INSTRUM_NODE_278(__mw_tmp_for_expr_5, 0), (__mw_tmp_for_expr_5 == 0)))) && __MW_INSTRUM_NODE_281(((__mw_tmp_for_expr_6 = gRxCAN->LEN), (__MW_INSTRUM_NODE_283(__mw_tmp_for_expr_6, 3), (__mw_tmp_for_expr_6 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_286(__MW_INSTRUM_NODE_288(((__mw_tmp_for_expr_7 = (gRxCAN->BUF)[1]), ((__mw_tmp_for_expr_8 = gCANOPENConfig.Node_ID), (__MW_INSTRUM_NODE_290(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8))))) || __MW_INSTRUM_NODE_293(((__mw_tmp_for_expr_9 = (gRxCAN->BUF)[1]), (__MW_INSTRUM_NODE_295(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
switch ((gRxCAN->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_298(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_299(), Prepare_TPDOs(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_300(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_301(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_302(); 
__MW_INSTRUM_NODE_303(), CANOpenSlave_ResetApplication(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_304(); 
__MW_INSTRUM_NODE_305(), CANOpenSlave_ResetCommunication(); 
break; 
default:  __MW_INSTRUM_NODE_306(); 
break; 
}  } 

can_rx_queue.out = __MW_INSTRUM_NODE_307(((__mw_tmp_for_expr_10 = can_rx_queue.out), ((__mw_tmp_for_expr_11 = 8 - 1), (__MW_INSTRUM_NODE_309(__mw_tmp_for_expr_10, __mw_tmp_for_expr_11), (__mw_tmp_for_expr_10 < __mw_tmp_for_expr_11))))) ? (can_rx_queue.out + 1) : 0; __MW_INSTRUM_NODE_312(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_313(((__mw_tmp_for_expr_12 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_315(__mw_tmp_for_expr_12, 0x4), (__mw_tmp_for_expr_12 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_318(((__mw_tmp_for_expr_13 = gRxCAN->ID), ((__mw_tmp_for_expr_14 = gCANOPENConfig.Node_ID + 0x600), (__MW_INSTRUM_NODE_320(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 == __mw_tmp_for_expr_14)))))) 
{ 
i = (__MW_INSTRUM_NODE_323(), Handle_SDO_Request(&((gRxCAN->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_324(((__mw_tmp_for_expr_15 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_326(__mw_tmp_for_expr_15, 0x5), (__mw_tmp_for_expr_15 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_329(i < 13)) 
{ { 
if (__MW_INSTRUM_NODE_331(__MW_INSTRUM_NODE_333(((__mw_tmp_for_expr_16 = gRxCAN->ID), ((__mw_tmp_for_expr_17 = ((gRPDOConfig)[i]).ID), (__MW_INSTRUM_NODE_335(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))) && __MW_INSTRUM_NODE_338(((__mw_tmp_for_expr_18 = gRxCAN->LEN), ((__mw_tmp_for_expr_19 = ((gRPDOConfig)[i]).LEN), (__MW_INSTRUM_NODE_340(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 == __mw_tmp_for_expr_19))))))) 
{ 
#line 920
__MW_INSTRUM_NODE_343(), memcpy(((gRPDOConfig)[i]).pData, &((gRxCAN->BUF)[0]), ((gRPDOConfig)[i]).LEN); 
i = (13); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue.out = __MW_INSTRUM_NODE_344(((__mw_tmp_for_expr_20 = can_rx_queue.out), ((__mw_tmp_for_expr_21 = 8 - 1), (__MW_INSTRUM_NODE_346(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 < __mw_tmp_for_expr_21))))) ? (can_rx_queue.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_349(((__mw_tmp_for_expr_22 = gTPDONr), (__MW_INSTRUM_NODE_351(__mw_tmp_for_expr_22, 0xff), (__mw_tmp_for_expr_22 == 0xff))))) 
{ 

gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_354(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 

__MW_INSTRUM_NODE_355(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
#line 948
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 

gTPDONr = (4); __MW_INSTRUM_NODE_356(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_357(((__mw_tmp_for_expr_23 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_359(__mw_tmp_for_expr_23, 0x5), (__mw_tmp_for_expr_23 == 0x5))))) 
{ 
gTPDONr++; { 
if (__MW_INSTRUM_NODE_362(((__mw_tmp_for_expr_24 = gTPDONr), (__MW_INSTRUM_NODE_364(__mw_tmp_for_expr_24, 4), (__mw_tmp_for_expr_24 >= 4))))) 
{ 
gTPDONr = (0); 
}  } { 



if (__MW_INSTRUM_NODE_367(__MW_INSTRUM_NODE_369(((__mw_tmp_for_expr_25 = ((gTPDOConfig)[gTPDONr]).event_time), (__MW_INSTRUM_NODE_371(__mw_tmp_for_expr_25, 0), (__mw_tmp_for_expr_25 != 0)))) && (__MW_INSTRUM_NODE_374((__MW_INSTRUM_NODE_376(), CANOpenHW_IsTimeExpired(((gTPDOConfig)[gTPDONr]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_377(), memcpy((((gTPDOConfig)[gTPDONr]).CAN).BUF, ((gTPDOConfig)[gTPDONr]).pData, (((gTPDOConfig)[gTPDONr]).CAN).LEN); 
__MW_INSTRUM_NODE_378(), TransmitPDO(gTPDONr, txID, txDLC, txData); __MW_INSTRUM_NODE_379(); 
return; 
}  } 
#line 1004
}  } { 



if (__MW_INSTRUM_NODE_380(((__mw_tmp_for_expr_26 = gCANOPENConfig.heartbeat_time), (__MW_INSTRUM_NODE_382(__mw_tmp_for_expr_26, 0), (__mw_tmp_for_expr_26 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_385((__MW_INSTRUM_NODE_387(), CANOpenHW_IsTimeExpired(gCANOPENConfig.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_388(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_389(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_390(); 
} 

void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_17(); __MW_INSTRUM_NODE_391(); { 
if (__MW_INSTRUM_NODE_392(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_394(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_397(((__mw_tmp_for_expr_2 = can_rx_queue.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_399(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue.in + 1) : 0; { 
if (__MW_INSTRUM_NODE_402(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue.out), (__MW_INSTRUM_NODE_404(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG *d = &((can_rx_queue.msg)[can_rx_queue.in]); 
__MW_INSTRUM_NODE_407(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue.in = n; 
}  } 
#line 1036
}  } 
__MW_INSTRUM_NODE_408(), CANOpenSlave_ProcessStackAsyncRx(txID, txDLC, txData); __MW_INSTRUM_NODE_409(); 
} 

void CANOpenSlave_GetRPDO(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_18(); __MW_INSTRUM_NODE_410(); 
__MW_INSTRUM_NODE_411(), memcpy(data, ((gRPDOConfig)[no]).pData, ((gRPDOConfig)[no]).LEN); __MW_INSTRUM_NODE_412(); 
} 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_19(); __MW_INSTRUM_NODE_413(); 
__MW_INSTRUM_NODE_414(), memcpy(((gTPDOConfig)[no]).pData, data, 8); __MW_INSTRUM_NODE_415(); 
} 
