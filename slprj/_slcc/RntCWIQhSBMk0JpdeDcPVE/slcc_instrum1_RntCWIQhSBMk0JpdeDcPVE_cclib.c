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

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_78 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_78() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_78 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_80(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(80U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(81U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_80(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(80U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(81U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_85(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(85U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(86U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_85(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(85U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(86U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_78(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(78U), __MW_INSTRUM_RECORD_COMBINATION_HIT_78(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(79U), __MW_INSTRUM_RECORD_COMBINATION_HIT_78(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_78(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(78U), __MW_INSTRUM_RECORD_COMBINATION_HIT_78(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(79U), __MW_INSTRUM_RECORD_COMBINATION_HIT_78(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_120 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_120() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_120 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_122(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(122U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(123U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_122(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(122U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(123U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_127(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(127U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(128U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_127(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(127U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(128U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_120(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(120U), __MW_INSTRUM_RECORD_COMBINATION_HIT_120(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(121U), __MW_INSTRUM_RECORD_COMBINATION_HIT_120(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_120(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(120U), __MW_INSTRUM_RECORD_COMBINATION_HIT_120(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(121U), __MW_INSTRUM_RECORD_COMBINATION_HIT_120(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_149 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_149() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_149 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_151(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(151U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(152U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_151(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(151U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(152U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(156U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(157U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_156(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(156U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(157U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_149(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(149U), __MW_INSTRUM_RECORD_COMBINATION_HIT_149(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(150U), __MW_INSTRUM_RECORD_COMBINATION_HIT_149(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_149(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(149U), __MW_INSTRUM_RECORD_COMBINATION_HIT_149(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(150U), __MW_INSTRUM_RECORD_COMBINATION_HIT_149(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_171 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_171() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_171 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_173(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(173U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(174U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_173(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(173U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(174U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_178(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(178U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(179U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_178(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(178U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(179U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_171(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(171U), __MW_INSTRUM_RECORD_COMBINATION_HIT_171(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(172U), __MW_INSTRUM_RECORD_COMBINATION_HIT_171(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_171(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(171U), __MW_INSTRUM_RECORD_COMBINATION_HIT_171(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(172U), __MW_INSTRUM_RECORD_COMBINATION_HIT_171(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_218 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_218() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_218 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_220(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(220U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(221U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_220(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(220U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(221U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_225(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(225U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(226U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_225(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(225U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(226U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_218(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(218U), __MW_INSTRUM_RECORD_COMBINATION_HIT_218(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(219U), __MW_INSTRUM_RECORD_COMBINATION_HIT_218(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_218(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(218U), __MW_INSTRUM_RECORD_COMBINATION_HIT_218(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(219U), __MW_INSTRUM_RECORD_COMBINATION_HIT_218(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_266 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_266() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_266 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_268(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(268U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(269U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_268(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(268U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(269U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_273(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(273U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(274U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_273(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(273U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(274U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_266(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(266U), __MW_INSTRUM_RECORD_COMBINATION_HIT_266(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(267U), __MW_INSTRUM_RECORD_COMBINATION_HIT_266(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_266(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(266U), __MW_INSTRUM_RECORD_COMBINATION_HIT_266(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(267U), __MW_INSTRUM_RECORD_COMBINATION_HIT_266(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_278 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_278() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_278 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_280(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(280U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(281U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_280(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(280U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(281U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_285(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(285U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(286U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_285(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(285U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(286U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_278(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(278U), __MW_INSTRUM_RECORD_COMBINATION_HIT_278(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(279U), __MW_INSTRUM_RECORD_COMBINATION_HIT_278(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_278(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(278U), __MW_INSTRUM_RECORD_COMBINATION_HIT_278(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(279U), __MW_INSTRUM_RECORD_COMBINATION_HIT_278(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_323 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_323() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_323 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_325(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(325U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(326U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_325(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(325U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(326U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_330(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(330U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(331U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_330(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(330U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(331U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_323(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(323U), __MW_INSTRUM_RECORD_COMBINATION_HIT_323(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(324U), __MW_INSTRUM_RECORD_COMBINATION_HIT_323(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_323(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(323U), __MW_INSTRUM_RECORD_COMBINATION_HIT_323(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(324U), __MW_INSTRUM_RECORD_COMBINATION_HIT_323(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_359 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_359() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_359 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_361(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(361U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(362U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_361(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(361U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(362U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_366(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(366U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(367U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_366(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(366U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(367U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_359(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(359U), __MW_INSTRUM_RECORD_COMBINATION_HIT_359(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(360U), __MW_INSTRUM_RECORD_COMBINATION_HIT_359(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_359(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(359U), __MW_INSTRUM_RECORD_COMBINATION_HIT_359(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(360U), __MW_INSTRUM_RECORD_COMBINATION_HIT_359(), 0) : 0))
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
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_78 = 0; 
#define __MW_INSTRUM_FCN_ENTER_12() 
#define __MW_INSTRUM_FCN_ENTER_13() 
#define __MW_INSTRUM_FCN_ENTER_14() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_120 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_149 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_171 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_218 = 0; 
#define __MW_INSTRUM_FCN_ENTER_15() 
#define __MW_INSTRUM_FCN_ENTER_16() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_266 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_278 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_323 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_359 = 0; 
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(24U))
#define __MW_INSTRUM_NODE_25() \
  (__MW_INSTRUM_RECORD_HIT(25U))
#define __MW_INSTRUM_NODE_26() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(54U))
#define __MW_INSTRUM_NODE_55() \
  (__MW_INSTRUM_RECORD_HIT(55U))
#define __MW_INSTRUM_NODE_56() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(56U))
#define __MW_INSTRUM_NODE_57() \
  (__MW_INSTRUM_RECORD_HIT(57U))
#define __MW_INSTRUM_NODE_58() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(75U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_76(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(76U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(77U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_76(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(76U), 1) : (__MW_INSTRUM_RECORD_HIT(77U), 0))
#endif
#define __MW_INSTRUM_NODE_82(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(82U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(83U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(84U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_87(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(87U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(88U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(89U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_90() \
  (__MW_INSTRUM_RECORD_HIT(90U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_91(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(91U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(92U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_91(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(91U), 1) : (__MW_INSTRUM_RECORD_HIT(92U), 0))
#endif
#define __MW_INSTRUM_NODE_93(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(93U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(94U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(95U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_96(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(96U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(97U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_96(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(96U), 1) : (__MW_INSTRUM_RECORD_HIT(97U), 0))
#endif
#define __MW_INSTRUM_NODE_98(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(98U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(99U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(100U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_101(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(101U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(102U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_101(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(101U), 1) : (__MW_INSTRUM_RECORD_HIT(102U), 0))
#endif
#define __MW_INSTRUM_NODE_103(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(103U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(104U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(105U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_106() \
  (__MW_INSTRUM_RECORD_HIT(106U))
#define __MW_INSTRUM_NODE_107() \
  (__MW_INSTRUM_RECORD_HIT(107U))
#define __MW_INSTRUM_NODE_108() \
  (__MW_INSTRUM_RECORD_HIT(108U))
#define __MW_INSTRUM_NODE_109() \
  (__MW_INSTRUM_RECORD_HIT(109U))
#define __MW_INSTRUM_NODE_110() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(110U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_111(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(111U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(112U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_111(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(111U), 1) : (__MW_INSTRUM_RECORD_HIT(112U), 0))
#endif
#define __MW_INSTRUM_NODE_113() \
  (__MW_INSTRUM_RECORD_HIT(113U))
#define __MW_INSTRUM_NODE_114() \
  (__MW_INSTRUM_RECORD_HIT(114U))
#define __MW_INSTRUM_NODE_115() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(115U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_116(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(116U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(117U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_116(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(116U), 1) : (__MW_INSTRUM_RECORD_HIT(117U), 0))
#endif
#define __MW_INSTRUM_NODE_118() \
  (__MW_INSTRUM_RECORD_HIT(118U))
#define __MW_INSTRUM_NODE_119() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(119U))
#define __MW_INSTRUM_NODE_124(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(124U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(125U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(126U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_129(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(129U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(130U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(131U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_132() \
  (__MW_INSTRUM_RECORD_HIT(132U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_133(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(133U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(134U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_133(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(133U), 1) : (__MW_INSTRUM_RECORD_HIT(134U), 0))
#endif
#define __MW_INSTRUM_NODE_135(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(135U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(136U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(137U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_138(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(138U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(139U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_138(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(138U), 1) : (__MW_INSTRUM_RECORD_HIT(139U), 0))
#endif
#define __MW_INSTRUM_NODE_140(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(140U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(141U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(142U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_143() \
  (__MW_INSTRUM_RECORD_HIT(143U))
#define __MW_INSTRUM_NODE_144() \
  (__MW_INSTRUM_RECORD_HIT(144U))
#define __MW_INSTRUM_NODE_145() \
  (__MW_INSTRUM_RECORD_HIT(145U))
#define __MW_INSTRUM_NODE_146() \
  (__MW_INSTRUM_RECORD_HIT(146U))
#define __MW_INSTRUM_NODE_147() \
  (__MW_INSTRUM_RECORD_HIT(147U))
#define __MW_INSTRUM_NODE_148() \
  (__MW_INSTRUM_RECORD_HIT(148U))
#define __MW_INSTRUM_NODE_153(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(153U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(154U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(155U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_158(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(158U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(159U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(160U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_161(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(161U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(162U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_161(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(161U), 1) : (__MW_INSTRUM_RECORD_HIT(162U), 0))
#endif
#define __MW_INSTRUM_NODE_163(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(163U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(164U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(165U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_166() \
  (__MW_INSTRUM_RECORD_HIT(166U))
#define __MW_INSTRUM_NODE_167() \
  (__MW_INSTRUM_RECORD_HIT(167U))
#define __MW_INSTRUM_NODE_168() \
  (__MW_INSTRUM_RECORD_HIT(168U))
#define __MW_INSTRUM_NODE_169() \
  (__MW_INSTRUM_RECORD_HIT(169U))
#define __MW_INSTRUM_NODE_170() \
  (__MW_INSTRUM_RECORD_HIT(170U))
#define __MW_INSTRUM_NODE_175(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(175U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(176U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(177U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_180(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(180U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(181U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(182U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_183(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(183U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(184U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_183(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(183U), 1) : (__MW_INSTRUM_RECORD_HIT(184U), 0))
#endif
#define __MW_INSTRUM_NODE_185(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(185U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(186U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(187U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_188() \
  (__MW_INSTRUM_RECORD_HIT(188U))
#define __MW_INSTRUM_NODE_189() \
  (__MW_INSTRUM_RECORD_HIT(189U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_190(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(190U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(191U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_190(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(190U), 1) : (__MW_INSTRUM_RECORD_HIT(191U), 0))
#endif
#define __MW_INSTRUM_NODE_192(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(192U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(193U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(194U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_195() \
  (__MW_INSTRUM_RECORD_HIT(195U))
#define __MW_INSTRUM_NODE_196() \
  (__MW_INSTRUM_RECORD_HIT(196U))
#define __MW_INSTRUM_NODE_197() \
  (__MW_INSTRUM_RECORD_HIT(197U))
#define __MW_INSTRUM_NODE_198() \
  (__MW_INSTRUM_RECORD_HIT(198U))
#define __MW_INSTRUM_NODE_199() \
  (__MW_INSTRUM_RECORD_HIT(199U))
#define __MW_INSTRUM_NODE_200() \
  (__MW_INSTRUM_RECORD_HIT(200U))
#define __MW_INSTRUM_NODE_201() \
  (__MW_INSTRUM_RECORD_HIT(201U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_202(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(202U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(203U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_202(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(202U), 1) : (__MW_INSTRUM_RECORD_HIT(203U), 0))
#endif
#define __MW_INSTRUM_NODE_204(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(204U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(205U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(206U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_207(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(207U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(208U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_207(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(207U), 1) : (__MW_INSTRUM_RECORD_HIT(208U), 0))
#endif
#define __MW_INSTRUM_NODE_209(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(209U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(210U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(211U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_212() \
  (__MW_INSTRUM_RECORD_HIT(212U))
#define __MW_INSTRUM_NODE_213() \
  (__MW_INSTRUM_RECORD_HIT(213U))
#define __MW_INSTRUM_NODE_214() \
  (__MW_INSTRUM_RECORD_HIT(214U))
#define __MW_INSTRUM_NODE_215() \
  (__MW_INSTRUM_RECORD_HIT(215U))
#define __MW_INSTRUM_NODE_216() \
  (__MW_INSTRUM_RECORD_HIT(216U))
#define __MW_INSTRUM_NODE_217() \
  (__MW_INSTRUM_RECORD_HIT(217U))
#define __MW_INSTRUM_NODE_222(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(222U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(223U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(224U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_227(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(227U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(228U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(229U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_230(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(230U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(231U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_230(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(230U), 1) : (__MW_INSTRUM_RECORD_HIT(231U), 0))
#endif
#define __MW_INSTRUM_NODE_232(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(232U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(233U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(234U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_235() \
  (__MW_INSTRUM_RECORD_HIT(235U))
#define __MW_INSTRUM_NODE_236() \
  (__MW_INSTRUM_RECORD_HIT(236U))
#define __MW_INSTRUM_NODE_237() \
  (__MW_INSTRUM_RECORD_HIT(237U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_243(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(243U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(244U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_243(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(243U), 1) : (__MW_INSTRUM_RECORD_HIT(244U), 0))
#endif
#define __MW_INSTRUM_NODE_245(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(245U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(246U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(247U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_248() \
  (__MW_INSTRUM_RECORD_HIT(248U))
#define __MW_INSTRUM_NODE_249() \
  (__MW_INSTRUM_RECORD_HIT(249U))
#define __MW_INSTRUM_NODE_250() \
  (__MW_INSTRUM_RECORD_HIT(250U))
#define __MW_INSTRUM_NODE_251() \
  (__MW_INSTRUM_RECORD_HIT(251U))
#define __MW_INSTRUM_NODE_252() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(252U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_253(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(253U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(254U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_253(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(253U), 1) : (__MW_INSTRUM_RECORD_HIT(254U), 0))
#endif
#define __MW_INSTRUM_NODE_254() \
  (__MW_INSTRUM_RECORD_HIT(254U))
#define __MW_INSTRUM_NODE_255() \
  (__MW_INSTRUM_RECORD_HIT(255U))
#define __MW_INSTRUM_NODE_256() \
  (__MW_INSTRUM_RECORD_HIT(256U))
#define __MW_INSTRUM_NODE_257() \
  (__MW_INSTRUM_RECORD_HIT(257U))
#define __MW_INSTRUM_NODE_258() \
  (__MW_INSTRUM_RECORD_HIT(258U))
#define __MW_INSTRUM_NODE_259() \
  (__MW_INSTRUM_RECORD_HIT(259U))
#define __MW_INSTRUM_NODE_260() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(260U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_261(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(261U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(262U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_261(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(261U), 1) : (__MW_INSTRUM_RECORD_HIT(262U), 0))
#endif
#define __MW_INSTRUM_NODE_263(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(263U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(264U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(265U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_270(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(270U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(271U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(272U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_275(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(275U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(276U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(277U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_282(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(282U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(283U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(284U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_287(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(287U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(288U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(289U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_290() \
  (__MW_INSTRUM_RECORD_HIT(290U))
#define __MW_INSTRUM_NODE_291() \
  (__MW_INSTRUM_RECORD_HIT(291U))
#define __MW_INSTRUM_NODE_292() \
  (__MW_INSTRUM_RECORD_HIT(292U))
#define __MW_INSTRUM_NODE_293() \
  (__MW_INSTRUM_RECORD_HIT(293U))
#define __MW_INSTRUM_NODE_294() \
  (__MW_INSTRUM_RECORD_HIT(294U))
#define __MW_INSTRUM_NODE_295() \
  (__MW_INSTRUM_RECORD_HIT(295U))
#define __MW_INSTRUM_NODE_296() \
  (__MW_INSTRUM_RECORD_HIT(296U))
#define __MW_INSTRUM_NODE_297() \
  (__MW_INSTRUM_RECORD_HIT(297U))
#define __MW_INSTRUM_NODE_298() \
  (__MW_INSTRUM_RECORD_HIT(298U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_299(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(299U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(300U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_299(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(299U), 1) : (__MW_INSTRUM_RECORD_HIT(300U), 0))
#endif
#define __MW_INSTRUM_NODE_301(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(301U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(302U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(303U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_304() \
  (__MW_INSTRUM_RECORD_HIT(304U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_305(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(305U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(306U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_305(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(305U), 1) : (__MW_INSTRUM_RECORD_HIT(306U), 0))
#endif
#define __MW_INSTRUM_NODE_307(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(307U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(308U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(309U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_310(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(310U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(311U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_310(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(310U), 1) : (__MW_INSTRUM_RECORD_HIT(311U), 0))
#endif
#define __MW_INSTRUM_NODE_312(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(312U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(313U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(314U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_315() \
  (__MW_INSTRUM_RECORD_HIT(315U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_316(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(316U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(317U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_316(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(316U), 1) : (__MW_INSTRUM_RECORD_HIT(317U), 0))
#endif
#define __MW_INSTRUM_NODE_318(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(318U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(319U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(320U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_321(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(321U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(322U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_321(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(321U), 1) : (__MW_INSTRUM_RECORD_HIT(322U), 0))
#endif
#define __MW_INSTRUM_NODE_327(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(327U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(328U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(329U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_332(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(332U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(333U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(334U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_335() \
  (__MW_INSTRUM_RECORD_HIT(335U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_336(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(336U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(337U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_336(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(336U), 1) : (__MW_INSTRUM_RECORD_HIT(337U), 0))
#endif
#define __MW_INSTRUM_NODE_338(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(338U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(339U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(340U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_341(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(341U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(342U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_341(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(341U), 1) : (__MW_INSTRUM_RECORD_HIT(342U), 0))
#endif
#define __MW_INSTRUM_NODE_343(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(343U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(344U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(345U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_346() \
  (__MW_INSTRUM_RECORD_HIT(346U))
#define __MW_INSTRUM_NODE_347() \
  (__MW_INSTRUM_RECORD_HIT(347U))
#define __MW_INSTRUM_NODE_348() \
  (__MW_INSTRUM_RECORD_HIT(348U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_349(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(349U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(350U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_349(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(349U), 1) : (__MW_INSTRUM_RECORD_HIT(350U), 0))
#endif
#define __MW_INSTRUM_NODE_351(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(351U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(352U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(353U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_354(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(354U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(355U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_354(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(354U), 1) : (__MW_INSTRUM_RECORD_HIT(355U), 0))
#endif
#define __MW_INSTRUM_NODE_356(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(356U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(357U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(358U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_363(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(363U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(364U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(365U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_368() \
  (__MW_INSTRUM_RECORD_HIT(368U))
#define __MW_INSTRUM_NODE_369() \
  (__MW_INSTRUM_RECORD_HIT(369U))
#define __MW_INSTRUM_NODE_370() \
  (__MW_INSTRUM_RECORD_HIT(370U))
#define __MW_INSTRUM_NODE_371() \
  (__MW_INSTRUM_RECORD_HIT(371U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_372(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(372U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(373U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_372(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(372U), 1) : (__MW_INSTRUM_RECORD_HIT(373U), 0))
#endif
#define __MW_INSTRUM_NODE_374(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(374U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(375U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(376U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_377(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(377U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(378U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_377(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(377U), 1) : (__MW_INSTRUM_RECORD_HIT(378U), 0))
#endif
#define __MW_INSTRUM_NODE_379() \
  (__MW_INSTRUM_RECORD_HIT(379U))
#define __MW_INSTRUM_NODE_380() \
  (__MW_INSTRUM_RECORD_HIT(380U))
#define __MW_INSTRUM_NODE_381() \
  (__MW_INSTRUM_RECORD_HIT(381U))
#define __MW_INSTRUM_NODE_382() \
  (__MW_INSTRUM_RECORD_HIT(382U))
#define __MW_INSTRUM_NODE_383() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(383U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_384(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(384U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(385U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_384(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(384U), 1) : (__MW_INSTRUM_RECORD_HIT(385U), 0))
#endif
#define __MW_INSTRUM_NODE_386(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(386U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(387U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(388U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_389(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(389U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(390U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_389(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(389U), 1) : (__MW_INSTRUM_RECORD_HIT(390U), 0))
#endif
#define __MW_INSTRUM_NODE_391(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(391U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(392U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(393U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_394(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(394U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(395U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_394(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(394U), 1) : (__MW_INSTRUM_RECORD_HIT(395U), 0))
#endif
#define __MW_INSTRUM_NODE_396(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(396U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(397U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(398U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_399() \
  (__MW_INSTRUM_RECORD_HIT(399U))
#define __MW_INSTRUM_NODE_400() \
  (__MW_INSTRUM_RECORD_HIT(400U))
#define __MW_INSTRUM_NODE_401() \
  (__MW_INSTRUM_RECORD_HIT(401U))
#define __MW_INSTRUM_NODE_402() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(402U))
#define __MW_INSTRUM_NODE_403() \
  (__MW_INSTRUM_RECORD_HIT(403U))
#define __MW_INSTRUM_NODE_404() \
  (__MW_INSTRUM_RECORD_HIT(404U))
#define __MW_INSTRUM_NODE_405() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(78)))), \
   __MW_INSTRUM_RECORD_HIT(405U))
#define __MW_INSTRUM_NODE_406() \
  (__MW_INSTRUM_RECORD_HIT(406U))
#define __MW_INSTRUM_NODE_407() \
  (__MW_INSTRUM_RECORD_HIT(407U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_80CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_80(...) (__MW_INSTRUM_RECORD_HIT_80CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_80(exp) (__MW_INSTRUM_RECORD_HIT_80CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_85CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_85(...) (__MW_INSTRUM_RECORD_HIT_85CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_85(exp) (__MW_INSTRUM_RECORD_HIT_85CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_78DA_80_85Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_78(...) (__MW_INSTRUM_RECORD_HIT_78DA_80_85Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_78(exp) (__MW_INSTRUM_RECORD_HIT_78DA_80_85Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_122CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_122(...) (__MW_INSTRUM_RECORD_HIT_122CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_122(exp) (__MW_INSTRUM_RECORD_HIT_122CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_127CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_127(...) (__MW_INSTRUM_RECORD_HIT_127CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_127(exp) (__MW_INSTRUM_RECORD_HIT_127CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_120DO_122_127Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_120(...) (__MW_INSTRUM_RECORD_HIT_120DO_122_127Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_120(exp) (__MW_INSTRUM_RECORD_HIT_120DO_122_127Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_151CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_151(...) (__MW_INSTRUM_RECORD_HIT_151CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_151(exp) (__MW_INSTRUM_RECORD_HIT_151CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_156CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) (__MW_INSTRUM_RECORD_HIT_156CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_156(exp) (__MW_INSTRUM_RECORD_HIT_156CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_149DA_151_156Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_149(...) (__MW_INSTRUM_RECORD_HIT_149DA_151_156Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_149(exp) (__MW_INSTRUM_RECORD_HIT_149DA_151_156Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_173CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_173(...) (__MW_INSTRUM_RECORD_HIT_173CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_173(exp) (__MW_INSTRUM_RECORD_HIT_173CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_178CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_178(...) (__MW_INSTRUM_RECORD_HIT_178CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_178(exp) (__MW_INSTRUM_RECORD_HIT_178CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_171DA_173_178Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_171(...) (__MW_INSTRUM_RECORD_HIT_171DA_173_178Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_171(exp) (__MW_INSTRUM_RECORD_HIT_171DA_173_178Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_220CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_220(...) (__MW_INSTRUM_RECORD_HIT_220CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_220(exp) (__MW_INSTRUM_RECORD_HIT_220CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_225CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_225(...) (__MW_INSTRUM_RECORD_HIT_225CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_225(exp) (__MW_INSTRUM_RECORD_HIT_225CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_218DA_220_225Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_218(...) (__MW_INSTRUM_RECORD_HIT_218DA_220_225Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_218(exp) (__MW_INSTRUM_RECORD_HIT_218DA_220_225Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_268CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_268(...) (__MW_INSTRUM_RECORD_HIT_268CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_268(exp) (__MW_INSTRUM_RECORD_HIT_268CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_273CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_273(...) (__MW_INSTRUM_RECORD_HIT_273CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_273(exp) (__MW_INSTRUM_RECORD_HIT_273CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_266DA_268_273Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_266(...) (__MW_INSTRUM_RECORD_HIT_266DA_268_273Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_266(exp) (__MW_INSTRUM_RECORD_HIT_266DA_268_273Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_280CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_280(...) (__MW_INSTRUM_RECORD_HIT_280CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_280(exp) (__MW_INSTRUM_RECORD_HIT_280CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_285CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_285(...) (__MW_INSTRUM_RECORD_HIT_285CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_285(exp) (__MW_INSTRUM_RECORD_HIT_285CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_278DO_280_285Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_278(...) (__MW_INSTRUM_RECORD_HIT_278DO_280_285Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_278(exp) (__MW_INSTRUM_RECORD_HIT_278DO_280_285Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_325CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_325(...) (__MW_INSTRUM_RECORD_HIT_325CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_325(exp) (__MW_INSTRUM_RECORD_HIT_325CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_330CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_330(...) (__MW_INSTRUM_RECORD_HIT_330CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_330(exp) (__MW_INSTRUM_RECORD_HIT_330CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_323DA_325_330Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_323(...) (__MW_INSTRUM_RECORD_HIT_323DA_325_330Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_323(exp) (__MW_INSTRUM_RECORD_HIT_323DA_325_330Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_361CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_361(...) (__MW_INSTRUM_RECORD_HIT_361CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_361(exp) (__MW_INSTRUM_RECORD_HIT_361CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_366CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_366(...) (__MW_INSTRUM_RECORD_HIT_366CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_366(exp) (__MW_INSTRUM_RECORD_HIT_366CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_359DA_361_366Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_359(...) (__MW_INSTRUM_RECORD_HIT_359DA_361_366Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_359(exp) (__MW_INSTRUM_RECORD_HIT_359DA_361_366Z_RntCWIQhSBMk0JpdeDcPVE(exp))
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


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_74XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_74() __MW_INSTRUM_RECORD_HIT_74XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_75EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_75() __MW_INSTRUM_RECORD_HIT_75EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_76DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_76(...) (__MW_INSTRUM_RECORD_HIT_76DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_76(exp) (__MW_INSTRUM_RECORD_HIT_76DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_82IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_82(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_82IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_87IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_87(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_87IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_90XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_90() __MW_INSTRUM_RECORD_HIT_90XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_91DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_91(...) (__MW_INSTRUM_RECORD_HIT_91DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_91(exp) (__MW_INSTRUM_RECORD_HIT_91DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_93IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_93(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_93IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_96DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_96(...) (__MW_INSTRUM_RECORD_HIT_96DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_96(exp) (__MW_INSTRUM_RECORD_HIT_96DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_98IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_98(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_98IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_101DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_101(...) (__MW_INSTRUM_RECORD_HIT_101DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_101(exp) (__MW_INSTRUM_RECORD_HIT_101DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_103IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_103(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_103IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_106XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_106() __MW_INSTRUM_RECORD_HIT_106XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_107() ((void)0)


#define __MW_INSTRUM_NODE_108() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_109XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_109() __MW_INSTRUM_RECORD_HIT_109XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_110EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_110() __MW_INSTRUM_RECORD_HIT_110EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_111DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_111(...) (__MW_INSTRUM_RECORD_HIT_111DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_111(exp) (__MW_INSTRUM_RECORD_HIT_111DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_113() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_114XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_114() __MW_INSTRUM_RECORD_HIT_114XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_115EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_115() __MW_INSTRUM_RECORD_HIT_115EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_116DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_116(...) (__MW_INSTRUM_RECORD_HIT_116DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_116(exp) (__MW_INSTRUM_RECORD_HIT_116DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_118XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_118() __MW_INSTRUM_RECORD_HIT_118XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_119EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_119() __MW_INSTRUM_RECORD_HIT_119EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_124IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_124(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_124IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_129IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_129(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_129IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_132() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_133DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_133(...) (__MW_INSTRUM_RECORD_HIT_133DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_133(exp) (__MW_INSTRUM_RECORD_HIT_133DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_135IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_135(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_135IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_138DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_138(...) (__MW_INSTRUM_RECORD_HIT_138DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_138(exp) (__MW_INSTRUM_RECORD_HIT_138DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_140IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_140(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_140IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_143() ((void)0)


#define __MW_INSTRUM_NODE_144() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_145XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_145() __MW_INSTRUM_RECORD_HIT_145XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_146() ((void)0)


#define __MW_INSTRUM_NODE_147() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_148XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_148() __MW_INSTRUM_RECORD_HIT_148XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_153IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_153(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_153IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_158IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_158(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_158IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_161DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_161(...) (__MW_INSTRUM_RECORD_HIT_161DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_161(exp) (__MW_INSTRUM_RECORD_HIT_161DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_163IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_163(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_163IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_166() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_167XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_167() __MW_INSTRUM_RECORD_HIT_167XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_168() ((void)0)


#define __MW_INSTRUM_NODE_169() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_170XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_170() __MW_INSTRUM_RECORD_HIT_170XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_175IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_175(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_175IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_180IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_180(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_180IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_183DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_183(...) (__MW_INSTRUM_RECORD_HIT_183DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_183(exp) (__MW_INSTRUM_RECORD_HIT_183DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_185IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_185(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_185IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_188() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_189XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_189() __MW_INSTRUM_RECORD_HIT_189XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_190DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_190(...) (__MW_INSTRUM_RECORD_HIT_190DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_190(exp) (__MW_INSTRUM_RECORD_HIT_190DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_192IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_192(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_192IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_195() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_196XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_196() __MW_INSTRUM_RECORD_HIT_196XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_197() ((void)0)


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
int __MW_INSTRUM_RECORD_HIT_202DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_202(...) (__MW_INSTRUM_RECORD_HIT_202DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_202(exp) (__MW_INSTRUM_RECORD_HIT_202DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_204IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_204(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_204IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_207DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_207(...) (__MW_INSTRUM_RECORD_HIT_207DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_207(exp) (__MW_INSTRUM_RECORD_HIT_207DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_209IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_209(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_209IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_212() ((void)0)


#define __MW_INSTRUM_NODE_213() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_214XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_214() __MW_INSTRUM_RECORD_HIT_214XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_215() ((void)0)


#define __MW_INSTRUM_NODE_216() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_217XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_217() __MW_INSTRUM_RECORD_HIT_217XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_222IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_222(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_222IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_227IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_227(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_227IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_230DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_230(...) (__MW_INSTRUM_RECORD_HIT_230DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_230(exp) (__MW_INSTRUM_RECORD_HIT_230DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_232IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_232(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_232IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_235() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_236XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_236() __MW_INSTRUM_RECORD_HIT_236XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_237() ((void)0)


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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_243DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_243(...) (__MW_INSTRUM_RECORD_HIT_243DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_243(exp) (__MW_INSTRUM_RECORD_HIT_243DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_245IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_245(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_245IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_248() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_249XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_249() __MW_INSTRUM_RECORD_HIT_249XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_250() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_251XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_251() __MW_INSTRUM_RECORD_HIT_251XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_252EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_252() __MW_INSTRUM_RECORD_HIT_252EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_253DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_253(...) (__MW_INSTRUM_RECORD_HIT_253DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_253(exp) (__MW_INSTRUM_RECORD_HIT_253DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_254() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_255DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_255() __MW_INSTRUM_RECORD_HIT_255DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_256DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_256() __MW_INSTRUM_RECORD_HIT_256DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_257DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_257() __MW_INSTRUM_RECORD_HIT_257DZ_RntCWIQhSBMk0JpdeDcPVE()

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
void __MW_INSTRUM_RECORD_HIT_259XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_259() __MW_INSTRUM_RECORD_HIT_259XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_260EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_260() __MW_INSTRUM_RECORD_HIT_260EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_261DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_261(...) (__MW_INSTRUM_RECORD_HIT_261DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_261(exp) (__MW_INSTRUM_RECORD_HIT_261DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_263IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_263(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_263IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_270IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_270(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_270IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_275IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_275(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_275IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_282IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_282(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_282IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_287IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_287(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_287IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_290DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_290() __MW_INSTRUM_RECORD_HIT_290DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_291() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_292DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_292() __MW_INSTRUM_RECORD_HIT_292DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_293DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_293() __MW_INSTRUM_RECORD_HIT_293DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_294DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_294() __MW_INSTRUM_RECORD_HIT_294DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_295() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_296DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_296() __MW_INSTRUM_RECORD_HIT_296DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_297() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_298DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_298() __MW_INSTRUM_RECORD_HIT_298DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_299DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_299(...) (__MW_INSTRUM_RECORD_HIT_299DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_299(exp) (__MW_INSTRUM_RECORD_HIT_299DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_301IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_301(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_301IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_304XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_304() __MW_INSTRUM_RECORD_HIT_304XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_305DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_305(...) (__MW_INSTRUM_RECORD_HIT_305DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_305(exp) (__MW_INSTRUM_RECORD_HIT_305DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_307IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_307(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_307IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_310DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_310(...) (__MW_INSTRUM_RECORD_HIT_310DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_310(exp) (__MW_INSTRUM_RECORD_HIT_310DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_312IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_312(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_312IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_315() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_316DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_316(...) (__MW_INSTRUM_RECORD_HIT_316DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_316(exp) (__MW_INSTRUM_RECORD_HIT_316DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_318IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_318(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_318IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_321DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_321(...) (__MW_INSTRUM_RECORD_HIT_321DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_321(exp) (__MW_INSTRUM_RECORD_HIT_321DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_327IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_327(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_327IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_332IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_332(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_332IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_335() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_336DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_336(...) (__MW_INSTRUM_RECORD_HIT_336DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_336(exp) (__MW_INSTRUM_RECORD_HIT_336DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_338IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_338(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_338IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_341DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_341(...) (__MW_INSTRUM_RECORD_HIT_341DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_341(exp) (__MW_INSTRUM_RECORD_HIT_341DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_343IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_343(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_343IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_346() ((void)0)


#define __MW_INSTRUM_NODE_347() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_348XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_348() __MW_INSTRUM_RECORD_HIT_348XZ_RntCWIQhSBMk0JpdeDcPVE()

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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_354DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_354(...) (__MW_INSTRUM_RECORD_HIT_354DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_354(exp) (__MW_INSTRUM_RECORD_HIT_354DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_356IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_356(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_356IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_363IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_363(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_363IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_368() ((void)0)


#define __MW_INSTRUM_NODE_369() ((void)0)


#define __MW_INSTRUM_NODE_370() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_371XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_371() __MW_INSTRUM_RECORD_HIT_371XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_372DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_372(...) (__MW_INSTRUM_RECORD_HIT_372DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_372(exp) (__MW_INSTRUM_RECORD_HIT_372DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_374IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_374(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_374IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_377DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_377(...) (__MW_INSTRUM_RECORD_HIT_377DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_377(exp) (__MW_INSTRUM_RECORD_HIT_377DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_379() ((void)0)


#define __MW_INSTRUM_NODE_380() ((void)0)


#define __MW_INSTRUM_NODE_381() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_382XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_382() __MW_INSTRUM_RECORD_HIT_382XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_383EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_383() __MW_INSTRUM_RECORD_HIT_383EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_384DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_384(...) (__MW_INSTRUM_RECORD_HIT_384DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_384(exp) (__MW_INSTRUM_RECORD_HIT_384DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_386IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_386(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_386IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_389DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_389(...) (__MW_INSTRUM_RECORD_HIT_389DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_389(exp) (__MW_INSTRUM_RECORD_HIT_389DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_391IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_391(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_391IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_394DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_394(...) (__MW_INSTRUM_RECORD_HIT_394DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_394(exp) (__MW_INSTRUM_RECORD_HIT_394DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_396IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_396(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_396IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_399() ((void)0)


#define __MW_INSTRUM_NODE_400() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_401XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_401() __MW_INSTRUM_RECORD_HIT_401XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_402EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_402() __MW_INSTRUM_RECORD_HIT_402EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_403() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_404XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_404() __MW_INSTRUM_RECORD_HIT_404XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_405EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_405() __MW_INSTRUM_RECORD_HIT_405EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_406() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_407XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_407() __MW_INSTRUM_RECORD_HIT_407XZ_RntCWIQhSBMk0JpdeDcPVE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlave.c"
#line 8 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlave.h"
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
#line 3 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\Data_Type.h"
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
#line 39
typedef 
#line 31
union { 
struct { 
int16_T AN_01; 
int16_T AN_02; 
int16_T AN_03; 
int16_T AN_04; 
}; 
uint8_T Message[8]; 
} RPDO_ID290; 
#line 54
typedef 
#line 42
union { 
struct { 
uint8_T X_Dir; 
uint8_T X_AngleH; 
uint8_T X_AngleL; 
uint8_T Y_Dir; 
uint8_T Y_AngleH; 
uint8_T Y_AngleL; 
uint8_T dummy0; 
uint8_T dummy1; 
}; 
uint8_T Message[8]; 
} RPDO_ID589; 
#line 62
typedef 
#line 57
union { 
struct { 
uint32_T Encoder_Actual_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID1FF; 
#line 68
typedef 
#line 63
union { 
struct { 
uint32_T Encoder_Stored_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID2FF; 
#line 82
typedef 
#line 73
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
#line 90
typedef 
#line 84
union { 
struct { 
int32_T ActualCurrent; 
int32_T ActualVelocity; 
}; 
uint8_T Message[8]; 
} RPDO_ID18x; 
#line 101
typedef 
#line 92
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
#line 112
typedef 
#line 105
union { 
struct { 
uint8_T StatusButtons1_8; 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} TPDO_ID185; 
#line 125
typedef 
#line 114
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
#line 151 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlave.h"
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
CAN_MSG msg[16]; 
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
void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T * rxData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData, uint8_T * inData, uint8_T * outData); 
void CANOpenSlave_GetRPDO(uint8_T no, uint8_T * data); 
void CANOpenHW_SendMessage(CAN_MSG * pTransmitBuf, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T * data); 

uint8_T Handle_SDO_Request(uint8_T * pData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
#endif /* _CANOPENSLAVE_DEFINES_H */
#line 16 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlave.c"
RPDO_ID182 RPDO01; 
RPDO_ID282 RPDO02; 
RPDO_ID1FF RPDO03; 
RPDO_ID2FF RPDO04; 
RPDO_ID290 RPDO05; 
RPDO_ID18x RPDO06, RPDO07, RPDO08, RPDO09; 
RPDO_ID28x RPDO10, RPDO11, RPDO12, RPDO13; 
RPDO_ID589 RPDO14; 


TPDO_ID20x TPDO01, TPDO02, TPDO03, TPDO04; 
#line 35
uint8_T out_gl = (1); 
uint16_T gTimCnt = (0); 
uint16_T aux_gTimCnt = (0), TimFactor = (10); 


CANOpenSlave_CONFIG gCANOPENConfig; 



TPDO_CONFIG gTPDOConfig[4]; 

uint8_T gTPDONr = (4); 




RPDO_CONFIG gRPDOConfig[14]; 




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
#line 106
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
#line 125
}  } 
i++; 
}  } 
gTPDONr = (4); } __MW_INSTRUM_NODE_36(); 
} 



void TransmitPDO(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_37(); 
#line 140
((gTPDOConfig)[gTPDONr]).event_timestamp = (__MW_INSTRUM_NODE_38(), CANOpenHW_GetTime()) + ((gTPDOConfig)[gTPDONr]).event_time; 

__MW_INSTRUM_NODE_39(), CANOpenHW_SendMessage(&(((gTPDOConfig)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_40(); 
} 




void CANOpenSlave_Init(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_6(); __MW_INSTRUM_NODE_41(); { 
uint8_T i; 
#line 157
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
while (__MW_INSTRUM_NODE_44(i < 14)) 
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
#line 220
void CANOpenSlave_InitTPDO(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_8(); __MW_INSTRUM_NODE_54(); 
PDO_NR--; 
#line 229
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
__MW_INSTRUM_NODE_59(), CANOpenSlave_Init(500, 0x5, 1000L); 



__MW_INSTRUM_NODE_60(), CANOpenSlave_InitTPDO(1, 0x20a, 5, 0, 8, &(TPDO01.Message)); 
__MW_INSTRUM_NODE_61(), CANOpenSlave_InitTPDO(2, 0x20b, 5, 0, 8, &(TPDO02.Message)); 
__MW_INSTRUM_NODE_62(), CANOpenSlave_InitTPDO(3, 0x20c, 5, 0, 8, &(TPDO03.Message)); 
__MW_INSTRUM_NODE_63(), CANOpenSlave_InitTPDO(4, 0x20d, 5, 0, 8, &(TPDO04.Message)); 
#line 267
__MW_INSTRUM_NODE_64(), CANOpenSlave_InitRPDO(1, 0x18b, 8, &(RPDO07.Message)); 
__MW_INSTRUM_NODE_65(), CANOpenSlave_InitRPDO(2, 0x18c, 8, &(RPDO08.Message)); 
__MW_INSTRUM_NODE_66(), CANOpenSlave_InitRPDO(3, 0x1ff, 4, &(RPDO03.Message)); 
__MW_INSTRUM_NODE_67(), CANOpenSlave_InitRPDO(4, 0x2ff, 4, &(RPDO04.Message)); 
__MW_INSTRUM_NODE_68(), CANOpenSlave_InitRPDO(5, 0x290, 8, &(RPDO05.Message)); 
__MW_INSTRUM_NODE_69(), CANOpenSlave_InitRPDO(6, 0x182, 8, &(RPDO01.Message)); 
__MW_INSTRUM_NODE_70(), CANOpenSlave_InitRPDO(7, 0x282, 8, &(RPDO02.Message)); 
__MW_INSTRUM_NODE_71(), CANOpenSlave_InitRPDO(8, 0x18a, 8, &(RPDO06.Message)); 
__MW_INSTRUM_NODE_72(), CANOpenSlave_InitRPDO(9, 0x18d, 8, &(RPDO09.Message)); 
__MW_INSTRUM_NODE_73(), CANOpenSlave_InitRPDO(10, 0x589, 8, &(RPDO14.Message)); __MW_INSTRUM_NODE_74(); 




} 
#line 290
const uint8_T SDOResponseTable[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((1000L >> 0) & (0xff)), ((1000L >> 8) & (0xff)), ((1000L >> 16) & (0xff)), ((1000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 472
uint8_T Search_OD(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_11(); __MW_INSTRUM_NODE_75(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable)[0]); { 
while (__MW_INSTRUM_NODE_76(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_78(__MW_INSTRUM_NODE_80(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_82(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_85(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_87(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_90(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_91(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_93(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_96(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_98(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_101(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_103(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_106(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_107(); 
i++; 
}  } __MW_INSTRUM_NODE_108(); __MW_INSTRUM_NODE_109(); 
return 0xff; } 
} 
#line 576
void Send_SDO_Abort(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_12(); __MW_INSTRUM_NODE_110(); { 
uint8_T i; 
(gTxSDO.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_111(i < 4); i++) 
{ 
(gTxSDO.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_113(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_114(); 
} 


void CopyConstToData(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_13(); __MW_INSTRUM_NODE_115(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_116(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_118(); 
} 



uint8_T Handle_SDO_Request(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_14(); __MW_INSTRUM_NODE_119(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
#line 616
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO.BUF)[1] = pData[1]; 
(gTxSDO.BUF)[2] = pData[2]; 
(gTxSDO.BUF)[3] = pData[3]; { 


if (__MW_INSTRUM_NODE_120(__MW_INSTRUM_NODE_122(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_124(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_127(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_129(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 688
found = (__MW_INSTRUM_NODE_132(), Search_OD(index, subindex)); { 

if (__MW_INSTRUM_NODE_133(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_135(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_138(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_140(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_143(), memcpy(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8]), 8); 
__MW_INSTRUM_NODE_144(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_145(); 
return 1; 
}  } __MW_INSTRUM_NODE_146(); 

__MW_INSTRUM_NODE_147(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_148(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_149(__MW_INSTRUM_NODE_151(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_153(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_156(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_158(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_161(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_163(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_166(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_167(); 
return 1; 
}  } __MW_INSTRUM_NODE_168(); 

__MW_INSTRUM_NODE_169(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_170(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_171(__MW_INSTRUM_NODE_173(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_175(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_178(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_180(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_183(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_185(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4b); 
(gTxSDO.BUF)[4] = (uint8_T)(gCANOPENConfig.heartbeat_time); 
(gTxSDO.BUF)[5] = (uint8_T)((gCANOPENConfig.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_188(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_189(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_190(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_192(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig.heartbeat_time = pData[5]; 
gCANOPENConfig.heartbeat_time = ((gCANOPENConfig.heartbeat_time) << 8) + pData[4]; 
(gTxSDO.BUF)[0] = (0x60); 

(gTxSDO.BUF)[4] = (0); 
(gTxSDO.BUF)[5] = (0); 
(gTxSDO.BUF)[6] = (0); 
(gTxSDO.BUF)[7] = (0); 
__MW_INSTRUM_NODE_195(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_196(); 
return 1; 
}  } __MW_INSTRUM_NODE_197(); 
__MW_INSTRUM_NODE_198(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_199(); 
return 0; 
}  } __MW_INSTRUM_NODE_200(); 


found = (__MW_INSTRUM_NODE_201(), Search_OD(index, subindex)); { 
if (__MW_INSTRUM_NODE_202(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_204(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_207(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_209(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_212(), CopyConstToData(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8])); 
__MW_INSTRUM_NODE_213(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_214(); 
return 1; 
}  } __MW_INSTRUM_NODE_215(); 

__MW_INSTRUM_NODE_216(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_217(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_218(__MW_INSTRUM_NODE_220(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_222(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_225(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_227(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_230(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_232(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_235(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_236(); 
return 1; 
}  } __MW_INSTRUM_NODE_237(); 

__MW_INSTRUM_NODE_238(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_239(); 
return 0; 
}  } __MW_INSTRUM_NODE_240(); 
__MW_INSTRUM_NODE_241(), Send_SDO_Abort(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_242(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_243(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_245(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_248(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_249(); 
return 0; 
}  } __MW_INSTRUM_NODE_250(); __MW_INSTRUM_NODE_251(); 
return 1; } 
} 

void SDO_Write(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_15(); __MW_INSTRUM_NODE_252(); { 
char k; 
gTxSDOw.ID = 0x600 + Node_ID; 
gTxSDOw.LEN = (8); 
(gTxSDOw.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_253(k < 4); k++) 
{ (gTxSDOw.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_255(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_256(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_257(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_258(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_259(); 




} 
#line 829
void CANOpenSlave_ProcessStackAsyncRx(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_16(); __MW_INSTRUM_NODE_260(); { 
uint8_T i; 
gTimCnt++; 
#line 843
*txDLC = (0); { 



if (__MW_INSTRUM_NODE_261(((__mw_tmp_for_expr_1 = can_rx_queue.in), ((__mw_tmp_for_expr_2 = can_rx_queue.out), (__MW_INSTRUM_NODE_263(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 != __mw_tmp_for_expr_2)))))) 
{ 
gRxCAN = &((can_rx_queue.msg)[can_rx_queue.out]); { 




if (__MW_INSTRUM_NODE_266(__MW_INSTRUM_NODE_268(((__mw_tmp_for_expr_3 = gRxCAN->ID), (__MW_INSTRUM_NODE_270(__mw_tmp_for_expr_3, 0), (__mw_tmp_for_expr_3 == 0)))) && __MW_INSTRUM_NODE_273(((__mw_tmp_for_expr_4 = gRxCAN->LEN), (__MW_INSTRUM_NODE_275(__mw_tmp_for_expr_4, 3), (__mw_tmp_for_expr_4 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_278(__MW_INSTRUM_NODE_280(((__mw_tmp_for_expr_5 = (gRxCAN->BUF)[1]), ((__mw_tmp_for_expr_6 = gCANOPENConfig.Node_ID), (__MW_INSTRUM_NODE_282(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6))))) || __MW_INSTRUM_NODE_285(((__mw_tmp_for_expr_7 = (gRxCAN->BUF)[1]), (__MW_INSTRUM_NODE_287(__mw_tmp_for_expr_7, 0), (__mw_tmp_for_expr_7 == 0)))))) 
{ { 
switch ((gRxCAN->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_290(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_291(), Prepare_TPDOs(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_292(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_293(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_294(); 
__MW_INSTRUM_NODE_295(), CANOpenSlave_ResetApplication(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_296(); 
__MW_INSTRUM_NODE_297(), CANOpenSlave_ResetCommunication(); 
break; 
default:  __MW_INSTRUM_NODE_298(); 
break; 
}  } 

can_rx_queue.out = __MW_INSTRUM_NODE_299(((__mw_tmp_for_expr_8 = can_rx_queue.out), ((__mw_tmp_for_expr_9 = 16 - 1), (__MW_INSTRUM_NODE_301(__mw_tmp_for_expr_8, __mw_tmp_for_expr_9), (__mw_tmp_for_expr_8 < __mw_tmp_for_expr_9))))) ? (can_rx_queue.out + 1) : 0; __MW_INSTRUM_NODE_304(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_305(((__mw_tmp_for_expr_10 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_307(__mw_tmp_for_expr_10, 0x4), (__mw_tmp_for_expr_10 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_310(((__mw_tmp_for_expr_11 = gRxCAN->ID), ((__mw_tmp_for_expr_12 = gCANOPENConfig.Node_ID + 0x600), (__MW_INSTRUM_NODE_312(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 == __mw_tmp_for_expr_12)))))) 
{ 
i = (__MW_INSTRUM_NODE_315(), Handle_SDO_Request(&((gRxCAN->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_316(((__mw_tmp_for_expr_13 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_318(__mw_tmp_for_expr_13, 0x5), (__mw_tmp_for_expr_13 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_321(i < 14)) 
{ { 
if (__MW_INSTRUM_NODE_323(__MW_INSTRUM_NODE_325(((__mw_tmp_for_expr_14 = gRxCAN->ID), ((__mw_tmp_for_expr_15 = ((gRPDOConfig)[i]).ID), (__MW_INSTRUM_NODE_327(__mw_tmp_for_expr_14, __mw_tmp_for_expr_15), (__mw_tmp_for_expr_14 == __mw_tmp_for_expr_15))))) && __MW_INSTRUM_NODE_330(((__mw_tmp_for_expr_16 = gRxCAN->LEN), ((__mw_tmp_for_expr_17 = ((gRPDOConfig)[i]).LEN), (__MW_INSTRUM_NODE_332(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))))) 
{ 
#line 918
__MW_INSTRUM_NODE_335(), memcpy(((gRPDOConfig)[i]).pData, &((gRxCAN->BUF)[0]), ((gRPDOConfig)[i]).LEN); 
i = (14); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue.out = __MW_INSTRUM_NODE_336(((__mw_tmp_for_expr_18 = can_rx_queue.out), ((__mw_tmp_for_expr_19 = 16 - 1), (__MW_INSTRUM_NODE_338(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 < __mw_tmp_for_expr_19))))) ? (can_rx_queue.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_341(((__mw_tmp_for_expr_20 = gTPDONr), (__MW_INSTRUM_NODE_343(__mw_tmp_for_expr_20, 0xff), (__mw_tmp_for_expr_20 == 0xff))))) 
{ 

gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_346(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 

__MW_INSTRUM_NODE_347(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
#line 946
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 

gTPDONr = (4); __MW_INSTRUM_NODE_348(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_349(((__mw_tmp_for_expr_21 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_351(__mw_tmp_for_expr_21, 0x5), (__mw_tmp_for_expr_21 == 0x5))))) 
{ 
gTPDONr++; { 
if (__MW_INSTRUM_NODE_354(((__mw_tmp_for_expr_22 = gTPDONr), (__MW_INSTRUM_NODE_356(__mw_tmp_for_expr_22, 4), (__mw_tmp_for_expr_22 >= 4))))) 
{ 
gTPDONr = (0); 
}  } { 



if (__MW_INSTRUM_NODE_359(__MW_INSTRUM_NODE_361(((__mw_tmp_for_expr_23 = ((gTPDOConfig)[gTPDONr]).event_time), (__MW_INSTRUM_NODE_363(__mw_tmp_for_expr_23, 0), (__mw_tmp_for_expr_23 != 0)))) && (__MW_INSTRUM_NODE_366((__MW_INSTRUM_NODE_368(), CANOpenHW_IsTimeExpired(((gTPDOConfig)[gTPDONr]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_369(), memcpy((((gTPDOConfig)[gTPDONr]).CAN).BUF, ((gTPDOConfig)[gTPDONr]).pData, (((gTPDOConfig)[gTPDONr]).CAN).LEN); 
__MW_INSTRUM_NODE_370(), TransmitPDO(gTPDONr, txID, txDLC, txData); __MW_INSTRUM_NODE_371(); 
return; 
}  } 
#line 1002
}  } { 



if (__MW_INSTRUM_NODE_372(((__mw_tmp_for_expr_24 = gCANOPENConfig.heartbeat_time), (__MW_INSTRUM_NODE_374(__mw_tmp_for_expr_24, 0), (__mw_tmp_for_expr_24 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_377((__MW_INSTRUM_NODE_379(), CANOpenHW_IsTimeExpired(gCANOPENConfig.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_380(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_381(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_382(); 

} 

void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData, uint8_T *inData, uint8_T *outData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_17(); __MW_INSTRUM_NODE_383(); { 


if (__MW_INSTRUM_NODE_384(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_386(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_389(((__mw_tmp_for_expr_2 = can_rx_queue.in), ((__mw_tmp_for_expr_3 = 16 - 1), (__MW_INSTRUM_NODE_391(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue.in + 1) : 0; { 

if (__MW_INSTRUM_NODE_394(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue.out), (__MW_INSTRUM_NODE_396(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG *d = &((can_rx_queue.msg)[can_rx_queue.in]); 
__MW_INSTRUM_NODE_399(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue.in = n; 
}  } 
#line 1039
*inData = can_rx_queue.in; 

*outData = can_rx_queue.out; 
}  } 
__MW_INSTRUM_NODE_400(), CANOpenSlave_ProcessStackAsyncRx(txID, txDLC, txData); __MW_INSTRUM_NODE_401(); 


} 

void CANOpenSlave_GetRPDO(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_18(); __MW_INSTRUM_NODE_402(); 
__MW_INSTRUM_NODE_403(), memcpy(data, ((gRPDOConfig)[no]).pData, ((gRPDOConfig)[no]).LEN); __MW_INSTRUM_NODE_404(); 
} 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_19(); __MW_INSTRUM_NODE_405(); 
__MW_INSTRUM_NODE_406(), memcpy(((gTPDOConfig)[no]).pData, data, 8); __MW_INSTRUM_NODE_407(); 
} 
