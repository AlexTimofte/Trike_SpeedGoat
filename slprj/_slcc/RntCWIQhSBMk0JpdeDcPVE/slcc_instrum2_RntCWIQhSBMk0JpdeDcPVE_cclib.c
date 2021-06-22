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

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_481 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_481() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_481 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_483(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(483U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(484U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_483(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(483U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(484U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_488(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(488U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(489U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_488(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(488U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(489U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_481(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(481U), __MW_INSTRUM_RECORD_COMBINATION_HIT_481(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(482U), __MW_INSTRUM_RECORD_COMBINATION_HIT_481(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_481(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(481U), __MW_INSTRUM_RECORD_COMBINATION_HIT_481(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(482U), __MW_INSTRUM_RECORD_COMBINATION_HIT_481(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_523 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_523() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_523 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_525(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(525U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(526U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_525(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(525U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(526U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_530(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(530U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(531U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_530(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(530U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(531U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_523(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(523U), __MW_INSTRUM_RECORD_COMBINATION_HIT_523(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(524U), __MW_INSTRUM_RECORD_COMBINATION_HIT_523(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_523(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(523U), __MW_INSTRUM_RECORD_COMBINATION_HIT_523(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(524U), __MW_INSTRUM_RECORD_COMBINATION_HIT_523(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_552 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_552() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_552 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_554(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(554U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(555U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_554(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(554U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(555U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_559(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(559U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(560U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_559(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(559U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(560U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_552(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(552U), __MW_INSTRUM_RECORD_COMBINATION_HIT_552(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(553U), __MW_INSTRUM_RECORD_COMBINATION_HIT_552(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_552(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(552U), __MW_INSTRUM_RECORD_COMBINATION_HIT_552(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(553U), __MW_INSTRUM_RECORD_COMBINATION_HIT_552(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_574 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_574() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_574 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_576(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(576U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(577U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_576(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(576U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(577U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_581(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(581U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(582U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_581(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(581U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(582U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_574(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(574U), __MW_INSTRUM_RECORD_COMBINATION_HIT_574(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(575U), __MW_INSTRUM_RECORD_COMBINATION_HIT_574(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_574(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(574U), __MW_INSTRUM_RECORD_COMBINATION_HIT_574(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(575U), __MW_INSTRUM_RECORD_COMBINATION_HIT_574(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_621 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_621() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_621 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_623(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(623U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(624U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_623(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(623U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(624U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_628(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(628U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(629U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_628(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(628U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(629U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_621(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(621U), __MW_INSTRUM_RECORD_COMBINATION_HIT_621(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(622U), __MW_INSTRUM_RECORD_COMBINATION_HIT_621(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_621(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(621U), __MW_INSTRUM_RECORD_COMBINATION_HIT_621(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(622U), __MW_INSTRUM_RECORD_COMBINATION_HIT_621(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_669 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_669() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_669 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_671(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(671U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(672U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_671(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(671U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(672U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_676(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(676U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(677U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_676(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(676U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(677U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_669(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(669U), __MW_INSTRUM_RECORD_COMBINATION_HIT_669(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(670U), __MW_INSTRUM_RECORD_COMBINATION_HIT_669(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_669(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(669U), __MW_INSTRUM_RECORD_COMBINATION_HIT_669(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(670U), __MW_INSTRUM_RECORD_COMBINATION_HIT_669(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_681 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_681() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_681 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_683(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(683U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(684U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_683(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(683U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(684U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_688(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(688U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(689U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_688(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(688U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(689U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_681(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(681U), __MW_INSTRUM_RECORD_COMBINATION_HIT_681(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(682U), __MW_INSTRUM_RECORD_COMBINATION_HIT_681(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_681(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(681U), __MW_INSTRUM_RECORD_COMBINATION_HIT_681(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(682U), __MW_INSTRUM_RECORD_COMBINATION_HIT_681(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_726 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_726() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_726 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_728(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(728U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(729U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_728(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(728U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(729U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_733(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(733U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(734U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_733(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(733U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(734U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_726(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(726U), __MW_INSTRUM_RECORD_COMBINATION_HIT_726(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(727U), __MW_INSTRUM_RECORD_COMBINATION_HIT_726(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_726(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(726U), __MW_INSTRUM_RECORD_COMBINATION_HIT_726(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(727U), __MW_INSTRUM_RECORD_COMBINATION_HIT_726(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_763 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_763() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_763 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_765(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(765U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(766U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_765(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(765U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(766U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_770(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(770U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(771U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_770(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(770U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(771U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_763(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(763U), __MW_INSTRUM_RECORD_COMBINATION_HIT_763(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(764U), __MW_INSTRUM_RECORD_COMBINATION_HIT_763(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_763(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(763U), __MW_INSTRUM_RECORD_COMBINATION_HIT_763(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(764U), __MW_INSTRUM_RECORD_COMBINATION_HIT_763(), 0) : 0))
#endif


#define __MW_INSTRUM_FCN_ENTER_20() 
#define __MW_INSTRUM_FCN_ENTER_21() 
#define __MW_INSTRUM_FCN_ENTER_22() 
#define __MW_INSTRUM_FCN_ENTER_23() 
#define __MW_INSTRUM_FCN_ENTER_24() 
#define __MW_INSTRUM_FCN_ENTER_25() 
#define __MW_INSTRUM_FCN_ENTER_26() 
#define __MW_INSTRUM_FCN_ENTER_27() 
#define __MW_INSTRUM_FCN_ENTER_28() 
#define __MW_INSTRUM_FCN_ENTER_29() 
#define __MW_INSTRUM_FCN_ENTER_30() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_481 = 0; 
#define __MW_INSTRUM_FCN_ENTER_31() 
#define __MW_INSTRUM_FCN_ENTER_32() 
#define __MW_INSTRUM_FCN_ENTER_33() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_523 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_552 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_574 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_621 = 0; 
#define __MW_INSTRUM_FCN_ENTER_34() 
#define __MW_INSTRUM_FCN_ENTER_35() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_669 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_681 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_726 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_763 = 0; 
#define __MW_INSTRUM_FCN_ENTER_36() 
#define __MW_INSTRUM_FCN_ENTER_37() 
#define __MW_INSTRUM_FCN_ENTER_38() 

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

#define __MW_INSTRUM_NODE_416() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(416U))
#define __MW_INSTRUM_NODE_417() \
  (__MW_INSTRUM_RECORD_HIT(417U))
#define __MW_INSTRUM_NODE_418() \
  (__MW_INSTRUM_RECORD_HIT(418U))
#define __MW_INSTRUM_NODE_419() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(419U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_420(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(420U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(421U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_420(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(420U), 1) : (__MW_INSTRUM_RECORD_HIT(421U), 0))
#endif
#define __MW_INSTRUM_NODE_422(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(422U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(423U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(424U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_425(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(425U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(426U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_425(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(425U), 1) : (__MW_INSTRUM_RECORD_HIT(426U), 0))
#endif
#define __MW_INSTRUM_NODE_427(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(427U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(428U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(429U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_430() \
  (__MW_INSTRUM_RECORD_HIT(430U))
#define __MW_INSTRUM_NODE_426() \
  (__MW_INSTRUM_RECORD_HIT(426U))
#define __MW_INSTRUM_NODE_431() \
  (__MW_INSTRUM_RECORD_HIT(431U))
#define __MW_INSTRUM_NODE_421() \
  (__MW_INSTRUM_RECORD_HIT(421U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_432(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(432U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(433U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_432(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(432U), 1) : (__MW_INSTRUM_RECORD_HIT(433U), 0))
#endif
#define __MW_INSTRUM_NODE_434(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(434U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(435U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(436U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_437() \
  (__MW_INSTRUM_RECORD_HIT(437U))
#define __MW_INSTRUM_NODE_433() \
  (__MW_INSTRUM_RECORD_HIT(433U))
#define __MW_INSTRUM_NODE_438() \
  (__MW_INSTRUM_RECORD_HIT(438U))
#define __MW_INSTRUM_NODE_439() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(439U))
#define __MW_INSTRUM_NODE_440() \
  (__MW_INSTRUM_RECORD_HIT(440U))
#define __MW_INSTRUM_NODE_441() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(441U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_442(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(442U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(443U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_442(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(442U), 1) : (__MW_INSTRUM_RECORD_HIT(443U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_444(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(444U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(445U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_444(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(444U), 1) : (__MW_INSTRUM_RECORD_HIT(445U), 0))
#endif
#define __MW_INSTRUM_NODE_446(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(446U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(447U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(448U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_449() \
  (__MW_INSTRUM_RECORD_HIT(449U))
#define __MW_INSTRUM_NODE_450() \
  (__MW_INSTRUM_RECORD_HIT(450U))
#define __MW_INSTRUM_NODE_443() \
  (__MW_INSTRUM_RECORD_HIT(443U))
#define __MW_INSTRUM_NODE_451() \
  (__MW_INSTRUM_RECORD_HIT(451U))
#define __MW_INSTRUM_NODE_452() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(452U))
#define __MW_INSTRUM_NODE_453() \
  (__MW_INSTRUM_RECORD_HIT(453U))
#define __MW_INSTRUM_NODE_454() \
  (__MW_INSTRUM_RECORD_HIT(454U))
#define __MW_INSTRUM_NODE_455() \
  (__MW_INSTRUM_RECORD_HIT(455U))
#define __MW_INSTRUM_NODE_456() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(456U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_457(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(457U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(458U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_457(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(457U), 1) : (__MW_INSTRUM_RECORD_HIT(458U), 0))
#endif
#define __MW_INSTRUM_NODE_458() \
  (__MW_INSTRUM_RECORD_HIT(458U))
#define __MW_INSTRUM_NODE_459() \
  (__MW_INSTRUM_RECORD_HIT(459U))
#define __MW_INSTRUM_NODE_460() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(460U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_461(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(461U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(462U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_461(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(461U), 1) : (__MW_INSTRUM_RECORD_HIT(462U), 0))
#endif
#define __MW_INSTRUM_NODE_463(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(463U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(464U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(465U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_462() \
  (__MW_INSTRUM_RECORD_HIT(462U))
#define __MW_INSTRUM_NODE_466() \
  (__MW_INSTRUM_RECORD_HIT(466U))
#define __MW_INSTRUM_NODE_467() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(467U))
#define __MW_INSTRUM_NODE_468() \
  (__MW_INSTRUM_RECORD_HIT(468U))
#define __MW_INSTRUM_NODE_469() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(469U))
#define __MW_INSTRUM_NODE_470() \
  (__MW_INSTRUM_RECORD_HIT(470U))
#define __MW_INSTRUM_NODE_471() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(471U))
#define __MW_INSTRUM_NODE_472() \
  (__MW_INSTRUM_RECORD_HIT(472U))
#define __MW_INSTRUM_NODE_473() \
  (__MW_INSTRUM_RECORD_HIT(473U))
#define __MW_INSTRUM_NODE_474() \
  (__MW_INSTRUM_RECORD_HIT(474U))
#define __MW_INSTRUM_NODE_475() \
  (__MW_INSTRUM_RECORD_HIT(475U))
#define __MW_INSTRUM_NODE_476() \
  (__MW_INSTRUM_RECORD_HIT(476U))
#define __MW_INSTRUM_NODE_477() \
  (__MW_INSTRUM_RECORD_HIT(477U))
#define __MW_INSTRUM_NODE_478() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(478U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_479(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(479U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(480U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_479(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(479U), 1) : (__MW_INSTRUM_RECORD_HIT(480U), 0))
#endif
#define __MW_INSTRUM_NODE_485(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(485U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(486U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(487U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_490(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(490U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(491U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(492U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_493() \
  (__MW_INSTRUM_RECORD_HIT(493U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_494(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(494U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(495U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_494(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(494U), 1) : (__MW_INSTRUM_RECORD_HIT(495U), 0))
#endif
#define __MW_INSTRUM_NODE_496(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(496U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(497U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(498U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_499(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(499U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(500U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_499(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(499U), 1) : (__MW_INSTRUM_RECORD_HIT(500U), 0))
#endif
#define __MW_INSTRUM_NODE_501(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(501U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(502U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(503U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_504(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(504U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(505U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_504(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(504U), 1) : (__MW_INSTRUM_RECORD_HIT(505U), 0))
#endif
#define __MW_INSTRUM_NODE_506(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(506U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(507U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(508U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_509() \
  (__MW_INSTRUM_RECORD_HIT(509U))
#define __MW_INSTRUM_NODE_510() \
  (__MW_INSTRUM_RECORD_HIT(510U))
#define __MW_INSTRUM_NODE_511() \
  (__MW_INSTRUM_RECORD_HIT(511U))
#define __MW_INSTRUM_NODE_512() \
  (__MW_INSTRUM_RECORD_HIT(512U))
#define __MW_INSTRUM_NODE_513() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(513U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_514(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(514U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(515U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_514(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(514U), 1) : (__MW_INSTRUM_RECORD_HIT(515U), 0))
#endif
#define __MW_INSTRUM_NODE_516() \
  (__MW_INSTRUM_RECORD_HIT(516U))
#define __MW_INSTRUM_NODE_517() \
  (__MW_INSTRUM_RECORD_HIT(517U))
#define __MW_INSTRUM_NODE_518() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(518U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_519(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(519U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(520U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_519(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(519U), 1) : (__MW_INSTRUM_RECORD_HIT(520U), 0))
#endif
#define __MW_INSTRUM_NODE_521() \
  (__MW_INSTRUM_RECORD_HIT(521U))
#define __MW_INSTRUM_NODE_522() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(522U))
#define __MW_INSTRUM_NODE_527(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(527U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(528U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(529U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_532(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(532U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(533U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(534U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_535() \
  (__MW_INSTRUM_RECORD_HIT(535U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_536(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(536U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(537U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_536(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(536U), 1) : (__MW_INSTRUM_RECORD_HIT(537U), 0))
#endif
#define __MW_INSTRUM_NODE_538(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(538U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(539U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(540U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_541(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(541U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(542U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_541(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(541U), 1) : (__MW_INSTRUM_RECORD_HIT(542U), 0))
#endif
#define __MW_INSTRUM_NODE_543(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(543U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(544U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(545U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_546() \
  (__MW_INSTRUM_RECORD_HIT(546U))
#define __MW_INSTRUM_NODE_547() \
  (__MW_INSTRUM_RECORD_HIT(547U))
#define __MW_INSTRUM_NODE_548() \
  (__MW_INSTRUM_RECORD_HIT(548U))
#define __MW_INSTRUM_NODE_549() \
  (__MW_INSTRUM_RECORD_HIT(549U))
#define __MW_INSTRUM_NODE_550() \
  (__MW_INSTRUM_RECORD_HIT(550U))
#define __MW_INSTRUM_NODE_551() \
  (__MW_INSTRUM_RECORD_HIT(551U))
#define __MW_INSTRUM_NODE_556(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(556U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(557U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(558U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_561(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(561U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(562U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(563U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_564(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(564U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(565U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_564(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(564U), 1) : (__MW_INSTRUM_RECORD_HIT(565U), 0))
#endif
#define __MW_INSTRUM_NODE_566(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(566U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(567U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(568U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_569() \
  (__MW_INSTRUM_RECORD_HIT(569U))
#define __MW_INSTRUM_NODE_570() \
  (__MW_INSTRUM_RECORD_HIT(570U))
#define __MW_INSTRUM_NODE_571() \
  (__MW_INSTRUM_RECORD_HIT(571U))
#define __MW_INSTRUM_NODE_572() \
  (__MW_INSTRUM_RECORD_HIT(572U))
#define __MW_INSTRUM_NODE_573() \
  (__MW_INSTRUM_RECORD_HIT(573U))
#define __MW_INSTRUM_NODE_578(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(578U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(579U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(580U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_583(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(583U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(584U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(585U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_586(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(586U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(587U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_586(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(586U), 1) : (__MW_INSTRUM_RECORD_HIT(587U), 0))
#endif
#define __MW_INSTRUM_NODE_588(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(588U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(589U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(590U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_591() \
  (__MW_INSTRUM_RECORD_HIT(591U))
#define __MW_INSTRUM_NODE_592() \
  (__MW_INSTRUM_RECORD_HIT(592U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_593(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(593U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(594U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_593(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(593U), 1) : (__MW_INSTRUM_RECORD_HIT(594U), 0))
#endif
#define __MW_INSTRUM_NODE_595(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(595U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(596U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(597U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_598() \
  (__MW_INSTRUM_RECORD_HIT(598U))
#define __MW_INSTRUM_NODE_599() \
  (__MW_INSTRUM_RECORD_HIT(599U))
#define __MW_INSTRUM_NODE_600() \
  (__MW_INSTRUM_RECORD_HIT(600U))
#define __MW_INSTRUM_NODE_601() \
  (__MW_INSTRUM_RECORD_HIT(601U))
#define __MW_INSTRUM_NODE_602() \
  (__MW_INSTRUM_RECORD_HIT(602U))
#define __MW_INSTRUM_NODE_603() \
  (__MW_INSTRUM_RECORD_HIT(603U))
#define __MW_INSTRUM_NODE_604() \
  (__MW_INSTRUM_RECORD_HIT(604U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_605(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(605U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(606U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_605(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(605U), 1) : (__MW_INSTRUM_RECORD_HIT(606U), 0))
#endif
#define __MW_INSTRUM_NODE_607(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(607U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(608U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(609U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_610(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(610U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(611U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_610(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(610U), 1) : (__MW_INSTRUM_RECORD_HIT(611U), 0))
#endif
#define __MW_INSTRUM_NODE_612(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(612U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(613U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(614U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_615() \
  (__MW_INSTRUM_RECORD_HIT(615U))
#define __MW_INSTRUM_NODE_616() \
  (__MW_INSTRUM_RECORD_HIT(616U))
#define __MW_INSTRUM_NODE_617() \
  (__MW_INSTRUM_RECORD_HIT(617U))
#define __MW_INSTRUM_NODE_618() \
  (__MW_INSTRUM_RECORD_HIT(618U))
#define __MW_INSTRUM_NODE_619() \
  (__MW_INSTRUM_RECORD_HIT(619U))
#define __MW_INSTRUM_NODE_620() \
  (__MW_INSTRUM_RECORD_HIT(620U))
#define __MW_INSTRUM_NODE_625(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(625U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(626U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(627U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_630(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(630U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(631U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(632U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_633(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(633U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(634U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_633(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(633U), 1) : (__MW_INSTRUM_RECORD_HIT(634U), 0))
#endif
#define __MW_INSTRUM_NODE_635(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(635U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(636U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(637U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_638() \
  (__MW_INSTRUM_RECORD_HIT(638U))
#define __MW_INSTRUM_NODE_639() \
  (__MW_INSTRUM_RECORD_HIT(639U))
#define __MW_INSTRUM_NODE_640() \
  (__MW_INSTRUM_RECORD_HIT(640U))
#define __MW_INSTRUM_NODE_641() \
  (__MW_INSTRUM_RECORD_HIT(641U))
#define __MW_INSTRUM_NODE_642() \
  (__MW_INSTRUM_RECORD_HIT(642U))
#define __MW_INSTRUM_NODE_643() \
  (__MW_INSTRUM_RECORD_HIT(643U))
#define __MW_INSTRUM_NODE_644() \
  (__MW_INSTRUM_RECORD_HIT(644U))
#define __MW_INSTRUM_NODE_645() \
  (__MW_INSTRUM_RECORD_HIT(645U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_646(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(646U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(647U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_646(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(646U), 1) : (__MW_INSTRUM_RECORD_HIT(647U), 0))
#endif
#define __MW_INSTRUM_NODE_648(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(648U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(649U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(650U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_651() \
  (__MW_INSTRUM_RECORD_HIT(651U))
#define __MW_INSTRUM_NODE_652() \
  (__MW_INSTRUM_RECORD_HIT(652U))
#define __MW_INSTRUM_NODE_653() \
  (__MW_INSTRUM_RECORD_HIT(653U))
#define __MW_INSTRUM_NODE_654() \
  (__MW_INSTRUM_RECORD_HIT(654U))
#define __MW_INSTRUM_NODE_655() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(655U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_656(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(656U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(657U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_656(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(656U), 1) : (__MW_INSTRUM_RECORD_HIT(657U), 0))
#endif
#define __MW_INSTRUM_NODE_657() \
  (__MW_INSTRUM_RECORD_HIT(657U))
#define __MW_INSTRUM_NODE_658() \
  (__MW_INSTRUM_RECORD_HIT(658U))
#define __MW_INSTRUM_NODE_659() \
  (__MW_INSTRUM_RECORD_HIT(659U))
#define __MW_INSTRUM_NODE_660() \
  (__MW_INSTRUM_RECORD_HIT(660U))
#define __MW_INSTRUM_NODE_661() \
  (__MW_INSTRUM_RECORD_HIT(661U))
#define __MW_INSTRUM_NODE_662() \
  (__MW_INSTRUM_RECORD_HIT(662U))
#define __MW_INSTRUM_NODE_663() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(663U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_664(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(664U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(665U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_664(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(664U), 1) : (__MW_INSTRUM_RECORD_HIT(665U), 0))
#endif
#define __MW_INSTRUM_NODE_666(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(666U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(667U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(668U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_673(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(673U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(674U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(675U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_678(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(678U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(679U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(680U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_685(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(685U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(686U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(687U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_690(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(690U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(691U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(692U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_693() \
  (__MW_INSTRUM_RECORD_HIT(693U))
#define __MW_INSTRUM_NODE_694() \
  (__MW_INSTRUM_RECORD_HIT(694U))
#define __MW_INSTRUM_NODE_695() \
  (__MW_INSTRUM_RECORD_HIT(695U))
#define __MW_INSTRUM_NODE_696() \
  (__MW_INSTRUM_RECORD_HIT(696U))
#define __MW_INSTRUM_NODE_697() \
  (__MW_INSTRUM_RECORD_HIT(697U))
#define __MW_INSTRUM_NODE_698() \
  (__MW_INSTRUM_RECORD_HIT(698U))
#define __MW_INSTRUM_NODE_699() \
  (__MW_INSTRUM_RECORD_HIT(699U))
#define __MW_INSTRUM_NODE_700() \
  (__MW_INSTRUM_RECORD_HIT(700U))
#define __MW_INSTRUM_NODE_701() \
  (__MW_INSTRUM_RECORD_HIT(701U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_702(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(702U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(703U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_702(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(702U), 1) : (__MW_INSTRUM_RECORD_HIT(703U), 0))
#endif
#define __MW_INSTRUM_NODE_704(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(704U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(705U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(706U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_707() \
  (__MW_INSTRUM_RECORD_HIT(707U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_708(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(708U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(709U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_708(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(708U), 1) : (__MW_INSTRUM_RECORD_HIT(709U), 0))
#endif
#define __MW_INSTRUM_NODE_710(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(710U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(711U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(712U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_713(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(713U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(714U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_713(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(713U), 1) : (__MW_INSTRUM_RECORD_HIT(714U), 0))
#endif
#define __MW_INSTRUM_NODE_715(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(715U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(716U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(717U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_718() \
  (__MW_INSTRUM_RECORD_HIT(718U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_719(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(719U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(720U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_719(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(719U), 1) : (__MW_INSTRUM_RECORD_HIT(720U), 0))
#endif
#define __MW_INSTRUM_NODE_721(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(721U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(722U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(723U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_724(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(724U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(725U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_724(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(724U), 1) : (__MW_INSTRUM_RECORD_HIT(725U), 0))
#endif
#define __MW_INSTRUM_NODE_730(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(730U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(731U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(732U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_735(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(735U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(736U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(737U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_738() \
  (__MW_INSTRUM_RECORD_HIT(738U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_739(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(739U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(740U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_739(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(739U), 1) : (__MW_INSTRUM_RECORD_HIT(740U), 0))
#endif
#define __MW_INSTRUM_NODE_741(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(741U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(742U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(743U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_744(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(744U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(745U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_744(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(744U), 1) : (__MW_INSTRUM_RECORD_HIT(745U), 0))
#endif
#define __MW_INSTRUM_NODE_746(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(746U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(747U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(748U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_749() \
  (__MW_INSTRUM_RECORD_HIT(749U))
#define __MW_INSTRUM_NODE_750() \
  (__MW_INSTRUM_RECORD_HIT(750U))
#define __MW_INSTRUM_NODE_751() \
  (__MW_INSTRUM_RECORD_HIT(751U))
#define __MW_INSTRUM_NODE_752() \
  (__MW_INSTRUM_RECORD_HIT(752U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_753(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(753U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(754U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_753(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(753U), 1) : (__MW_INSTRUM_RECORD_HIT(754U), 0))
#endif
#define __MW_INSTRUM_NODE_755(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(755U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(756U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(757U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_758(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(758U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(759U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_758(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(758U), 1) : (__MW_INSTRUM_RECORD_HIT(759U), 0))
#endif
#define __MW_INSTRUM_NODE_760(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(760U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(761U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(762U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_767(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(767U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(768U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(769U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_772() \
  (__MW_INSTRUM_RECORD_HIT(772U))
#define __MW_INSTRUM_NODE_773() \
  (__MW_INSTRUM_RECORD_HIT(773U))
#define __MW_INSTRUM_NODE_774() \
  (__MW_INSTRUM_RECORD_HIT(774U))
#define __MW_INSTRUM_NODE_775() \
  (__MW_INSTRUM_RECORD_HIT(775U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_776(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(776U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(777U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_776(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(776U), 1) : (__MW_INSTRUM_RECORD_HIT(777U), 0))
#endif
#define __MW_INSTRUM_NODE_778(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(778U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(779U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(780U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_781(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(781U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(782U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_781(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(781U), 1) : (__MW_INSTRUM_RECORD_HIT(782U), 0))
#endif
#define __MW_INSTRUM_NODE_783() \
  (__MW_INSTRUM_RECORD_HIT(783U))
#define __MW_INSTRUM_NODE_784() \
  (__MW_INSTRUM_RECORD_HIT(784U))
#define __MW_INSTRUM_NODE_785() \
  (__MW_INSTRUM_RECORD_HIT(785U))
#define __MW_INSTRUM_NODE_786() \
  (__MW_INSTRUM_RECORD_HIT(786U))
#define __MW_INSTRUM_NODE_787() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(787U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_788(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(788U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(789U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_788(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(788U), 1) : (__MW_INSTRUM_RECORD_HIT(789U), 0))
#endif
#define __MW_INSTRUM_NODE_790(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(790U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(791U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(792U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_793(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(793U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(794U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_793(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(793U), 1) : (__MW_INSTRUM_RECORD_HIT(794U), 0))
#endif
#define __MW_INSTRUM_NODE_795(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(795U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(796U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(797U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_798(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(798U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(799U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_798(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(798U), 1) : (__MW_INSTRUM_RECORD_HIT(799U), 0))
#endif
#define __MW_INSTRUM_NODE_800(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(800U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(801U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(802U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_803() \
  (__MW_INSTRUM_RECORD_HIT(803U))
#define __MW_INSTRUM_NODE_804() \
  (__MW_INSTRUM_RECORD_HIT(804U))
#define __MW_INSTRUM_NODE_805() \
  (__MW_INSTRUM_RECORD_HIT(805U))
#define __MW_INSTRUM_NODE_806() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(806U))
#define __MW_INSTRUM_NODE_807() \
  (__MW_INSTRUM_RECORD_HIT(807U))
#define __MW_INSTRUM_NODE_808() \
  (__MW_INSTRUM_RECORD_HIT(808U))
#define __MW_INSTRUM_NODE_809() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(481)))), \
   __MW_INSTRUM_RECORD_HIT(809U))
#define __MW_INSTRUM_NODE_810() \
  (__MW_INSTRUM_RECORD_HIT(810U))
#define __MW_INSTRUM_NODE_811() \
  (__MW_INSTRUM_RECORD_HIT(811U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_483CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_483(...) (__MW_INSTRUM_RECORD_HIT_483CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_483(exp) (__MW_INSTRUM_RECORD_HIT_483CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_488CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_488(...) (__MW_INSTRUM_RECORD_HIT_488CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_488(exp) (__MW_INSTRUM_RECORD_HIT_488CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_481DA_483_488Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_481(...) (__MW_INSTRUM_RECORD_HIT_481DA_483_488Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_481(exp) (__MW_INSTRUM_RECORD_HIT_481DA_483_488Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_525CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_525(...) (__MW_INSTRUM_RECORD_HIT_525CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_525(exp) (__MW_INSTRUM_RECORD_HIT_525CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_530CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_530(...) (__MW_INSTRUM_RECORD_HIT_530CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_530(exp) (__MW_INSTRUM_RECORD_HIT_530CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_523DO_525_530Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_523(...) (__MW_INSTRUM_RECORD_HIT_523DO_525_530Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_523(exp) (__MW_INSTRUM_RECORD_HIT_523DO_525_530Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_554CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_554(...) (__MW_INSTRUM_RECORD_HIT_554CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_554(exp) (__MW_INSTRUM_RECORD_HIT_554CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_559CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_559(...) (__MW_INSTRUM_RECORD_HIT_559CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_559(exp) (__MW_INSTRUM_RECORD_HIT_559CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_552DA_554_559Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_552(...) (__MW_INSTRUM_RECORD_HIT_552DA_554_559Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_552(exp) (__MW_INSTRUM_RECORD_HIT_552DA_554_559Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_576CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_576(...) (__MW_INSTRUM_RECORD_HIT_576CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_576(exp) (__MW_INSTRUM_RECORD_HIT_576CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_581CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_581(...) (__MW_INSTRUM_RECORD_HIT_581CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_581(exp) (__MW_INSTRUM_RECORD_HIT_581CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_574DA_576_581Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_574(...) (__MW_INSTRUM_RECORD_HIT_574DA_576_581Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_574(exp) (__MW_INSTRUM_RECORD_HIT_574DA_576_581Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_623CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_623(...) (__MW_INSTRUM_RECORD_HIT_623CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_623(exp) (__MW_INSTRUM_RECORD_HIT_623CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_628CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_628(...) (__MW_INSTRUM_RECORD_HIT_628CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_628(exp) (__MW_INSTRUM_RECORD_HIT_628CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_621DA_623_628Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_621(...) (__MW_INSTRUM_RECORD_HIT_621DA_623_628Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_621(exp) (__MW_INSTRUM_RECORD_HIT_621DA_623_628Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_671CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_671(...) (__MW_INSTRUM_RECORD_HIT_671CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_671(exp) (__MW_INSTRUM_RECORD_HIT_671CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_676CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_676(...) (__MW_INSTRUM_RECORD_HIT_676CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_676(exp) (__MW_INSTRUM_RECORD_HIT_676CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_669DA_671_676Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_669(...) (__MW_INSTRUM_RECORD_HIT_669DA_671_676Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_669(exp) (__MW_INSTRUM_RECORD_HIT_669DA_671_676Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_683CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_683(...) (__MW_INSTRUM_RECORD_HIT_683CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_683(exp) (__MW_INSTRUM_RECORD_HIT_683CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_688CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_688(...) (__MW_INSTRUM_RECORD_HIT_688CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_688(exp) (__MW_INSTRUM_RECORD_HIT_688CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_681DO_683_688Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_681(...) (__MW_INSTRUM_RECORD_HIT_681DO_683_688Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_681(exp) (__MW_INSTRUM_RECORD_HIT_681DO_683_688Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_728CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_728(...) (__MW_INSTRUM_RECORD_HIT_728CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_728(exp) (__MW_INSTRUM_RECORD_HIT_728CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_733CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_733(...) (__MW_INSTRUM_RECORD_HIT_733CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_733(exp) (__MW_INSTRUM_RECORD_HIT_733CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_726DA_728_733Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_726(...) (__MW_INSTRUM_RECORD_HIT_726DA_728_733Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_726(exp) (__MW_INSTRUM_RECORD_HIT_726DA_728_733Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_765CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_765(...) (__MW_INSTRUM_RECORD_HIT_765CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_765(exp) (__MW_INSTRUM_RECORD_HIT_765CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_770CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_770(...) (__MW_INSTRUM_RECORD_HIT_770CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_770(exp) (__MW_INSTRUM_RECORD_HIT_770CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_763DA_765_770Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_763(...) (__MW_INSTRUM_RECORD_HIT_763DA_765_770Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_763(exp) (__MW_INSTRUM_RECORD_HIT_763DA_765_770Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_20() 

#define __MW_INSTRUM_FCN_ENTER_21() 

#define __MW_INSTRUM_FCN_ENTER_22() 

#define __MW_INSTRUM_FCN_ENTER_23() 

#define __MW_INSTRUM_FCN_ENTER_24() 

#define __MW_INSTRUM_FCN_ENTER_25() 

#define __MW_INSTRUM_FCN_ENTER_26() 

#define __MW_INSTRUM_FCN_ENTER_27() 

#define __MW_INSTRUM_FCN_ENTER_28() 

#define __MW_INSTRUM_FCN_ENTER_29() 

#define __MW_INSTRUM_FCN_ENTER_30() 

#define __MW_INSTRUM_FCN_ENTER_31() 

#define __MW_INSTRUM_FCN_ENTER_32() 

#define __MW_INSTRUM_FCN_ENTER_33() 

#define __MW_INSTRUM_FCN_ENTER_34() 

#define __MW_INSTRUM_FCN_ENTER_35() 

#define __MW_INSTRUM_FCN_ENTER_36() 

#define __MW_INSTRUM_FCN_ENTER_37() 

#define __MW_INSTRUM_FCN_ENTER_38() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_416EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_416() __MW_INSTRUM_RECORD_HIT_416EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_417() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_418XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_418() __MW_INSTRUM_RECORD_HIT_418XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_419EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_419() __MW_INSTRUM_RECORD_HIT_419EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_420DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_420(...) (__MW_INSTRUM_RECORD_HIT_420DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_420(exp) (__MW_INSTRUM_RECORD_HIT_420DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_422IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_422(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_422IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_425DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_425(...) (__MW_INSTRUM_RECORD_HIT_425DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_425(exp) (__MW_INSTRUM_RECORD_HIT_425DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_427IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_427(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_427IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_430XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_430() __MW_INSTRUM_RECORD_HIT_430XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_426() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_431XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_431() __MW_INSTRUM_RECORD_HIT_431XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_421() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_432DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_432(...) (__MW_INSTRUM_RECORD_HIT_432DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_432(exp) (__MW_INSTRUM_RECORD_HIT_432DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_434IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_434(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_434IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_437XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_437() __MW_INSTRUM_RECORD_HIT_437XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_433() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_438XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_438() __MW_INSTRUM_RECORD_HIT_438XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_439EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_439() __MW_INSTRUM_RECORD_HIT_439EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_440XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_440() __MW_INSTRUM_RECORD_HIT_440XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_441EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_441() __MW_INSTRUM_RECORD_HIT_441EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_442DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_442(...) (__MW_INSTRUM_RECORD_HIT_442DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_442(exp) (__MW_INSTRUM_RECORD_HIT_442DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_444DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_444(...) (__MW_INSTRUM_RECORD_HIT_444DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_444(exp) (__MW_INSTRUM_RECORD_HIT_444DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_446IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_446(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_446IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_449() ((void)0)


#define __MW_INSTRUM_NODE_450() ((void)0)


#define __MW_INSTRUM_NODE_443() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_451XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_451() __MW_INSTRUM_RECORD_HIT_451XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_452EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_452() __MW_INSTRUM_RECORD_HIT_452EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_453() ((void)0)


#define __MW_INSTRUM_NODE_454() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_455XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_455() __MW_INSTRUM_RECORD_HIT_455XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_456EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_456() __MW_INSTRUM_RECORD_HIT_456EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_457DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_457(...) (__MW_INSTRUM_RECORD_HIT_457DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_457(exp) (__MW_INSTRUM_RECORD_HIT_457DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_458() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_459XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_459() __MW_INSTRUM_RECORD_HIT_459XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_460EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_460() __MW_INSTRUM_RECORD_HIT_460EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_461DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_461(...) (__MW_INSTRUM_RECORD_HIT_461DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_461(exp) (__MW_INSTRUM_RECORD_HIT_461DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_463IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_463(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_463IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_462() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_466XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_466() __MW_INSTRUM_RECORD_HIT_466XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_467EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_467() __MW_INSTRUM_RECORD_HIT_467EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_468XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_468() __MW_INSTRUM_RECORD_HIT_468XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_469EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_469() __MW_INSTRUM_RECORD_HIT_469EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_470XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_470() __MW_INSTRUM_RECORD_HIT_470XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_471EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_471() __MW_INSTRUM_RECORD_HIT_471EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_472() ((void)0)


#define __MW_INSTRUM_NODE_473() ((void)0)


#define __MW_INSTRUM_NODE_474() ((void)0)


#define __MW_INSTRUM_NODE_475() ((void)0)


#define __MW_INSTRUM_NODE_476() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_477XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_477() __MW_INSTRUM_RECORD_HIT_477XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_478EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_478() __MW_INSTRUM_RECORD_HIT_478EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_479DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_479(...) (__MW_INSTRUM_RECORD_HIT_479DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_479(exp) (__MW_INSTRUM_RECORD_HIT_479DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_485IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_485(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_485IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_490IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_490(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_490IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_493XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_493() __MW_INSTRUM_RECORD_HIT_493XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_494DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_494(...) (__MW_INSTRUM_RECORD_HIT_494DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_494(exp) (__MW_INSTRUM_RECORD_HIT_494DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_496IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_496(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_496IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_499DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_499(...) (__MW_INSTRUM_RECORD_HIT_499DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_499(exp) (__MW_INSTRUM_RECORD_HIT_499DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_501IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_501(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_501IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_504DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_504(...) (__MW_INSTRUM_RECORD_HIT_504DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_504(exp) (__MW_INSTRUM_RECORD_HIT_504DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_506IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_506(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_506IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_509XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_509() __MW_INSTRUM_RECORD_HIT_509XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_510() ((void)0)


#define __MW_INSTRUM_NODE_511() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_512XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_512() __MW_INSTRUM_RECORD_HIT_512XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_513EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_513() __MW_INSTRUM_RECORD_HIT_513EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_514DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_514(...) (__MW_INSTRUM_RECORD_HIT_514DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_514(exp) (__MW_INSTRUM_RECORD_HIT_514DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_516() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_517XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_517() __MW_INSTRUM_RECORD_HIT_517XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_518EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_518() __MW_INSTRUM_RECORD_HIT_518EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_519DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_519(...) (__MW_INSTRUM_RECORD_HIT_519DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_519(exp) (__MW_INSTRUM_RECORD_HIT_519DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_521XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_521() __MW_INSTRUM_RECORD_HIT_521XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_522EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_522() __MW_INSTRUM_RECORD_HIT_522EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_527IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_527(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_527IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_532IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_532(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_532IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_535() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_536DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_536(...) (__MW_INSTRUM_RECORD_HIT_536DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_536(exp) (__MW_INSTRUM_RECORD_HIT_536DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_538IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_538(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_538IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_541DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_541(...) (__MW_INSTRUM_RECORD_HIT_541DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_541(exp) (__MW_INSTRUM_RECORD_HIT_541DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_543IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_543(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_543IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_546() ((void)0)


#define __MW_INSTRUM_NODE_547() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_548XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_548() __MW_INSTRUM_RECORD_HIT_548XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_549() ((void)0)


#define __MW_INSTRUM_NODE_550() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_551XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_551() __MW_INSTRUM_RECORD_HIT_551XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_556IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_556(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_556IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_561IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_561(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_561IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_564DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_564(...) (__MW_INSTRUM_RECORD_HIT_564DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_564(exp) (__MW_INSTRUM_RECORD_HIT_564DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_566IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_566(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_566IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_569() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_570XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_570() __MW_INSTRUM_RECORD_HIT_570XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_571() ((void)0)


#define __MW_INSTRUM_NODE_572() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_573XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_573() __MW_INSTRUM_RECORD_HIT_573XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_578IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_578(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_578IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_583IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_583(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_583IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_586DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_586(...) (__MW_INSTRUM_RECORD_HIT_586DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_586(exp) (__MW_INSTRUM_RECORD_HIT_586DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_588IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_588(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_588IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_591() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_592XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_592() __MW_INSTRUM_RECORD_HIT_592XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_593DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_593(...) (__MW_INSTRUM_RECORD_HIT_593DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_593(exp) (__MW_INSTRUM_RECORD_HIT_593DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_595IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_595(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_595IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_598() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_599XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_599() __MW_INSTRUM_RECORD_HIT_599XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_600() ((void)0)


#define __MW_INSTRUM_NODE_601() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_602XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_602() __MW_INSTRUM_RECORD_HIT_602XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_603() ((void)0)


#define __MW_INSTRUM_NODE_604() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_605DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_605(...) (__MW_INSTRUM_RECORD_HIT_605DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_605(exp) (__MW_INSTRUM_RECORD_HIT_605DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_607IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_607(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_607IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_610DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_610(...) (__MW_INSTRUM_RECORD_HIT_610DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_610(exp) (__MW_INSTRUM_RECORD_HIT_610DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_612IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_612(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_612IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_615() ((void)0)


#define __MW_INSTRUM_NODE_616() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_617XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_617() __MW_INSTRUM_RECORD_HIT_617XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_618() ((void)0)


#define __MW_INSTRUM_NODE_619() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_620XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_620() __MW_INSTRUM_RECORD_HIT_620XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_625IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_625(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_625IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_630IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_630(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_630IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_633DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_633(...) (__MW_INSTRUM_RECORD_HIT_633DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_633(exp) (__MW_INSTRUM_RECORD_HIT_633DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_635IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_635(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_635IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_638() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_639XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_639() __MW_INSTRUM_RECORD_HIT_639XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_640() ((void)0)


#define __MW_INSTRUM_NODE_641() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_642XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_642() __MW_INSTRUM_RECORD_HIT_642XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_643() ((void)0)


#define __MW_INSTRUM_NODE_644() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_645XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_645() __MW_INSTRUM_RECORD_HIT_645XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_646DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_646(...) (__MW_INSTRUM_RECORD_HIT_646DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_646(exp) (__MW_INSTRUM_RECORD_HIT_646DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_648IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_648(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_648IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_651() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_652XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_652() __MW_INSTRUM_RECORD_HIT_652XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_653() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_654XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_654() __MW_INSTRUM_RECORD_HIT_654XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_655EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_655() __MW_INSTRUM_RECORD_HIT_655EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_656DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_656(...) (__MW_INSTRUM_RECORD_HIT_656DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_656(exp) (__MW_INSTRUM_RECORD_HIT_656DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_657() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_658DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_658() __MW_INSTRUM_RECORD_HIT_658DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_659DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_659() __MW_INSTRUM_RECORD_HIT_659DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_660DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_660() __MW_INSTRUM_RECORD_HIT_660DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_661DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_661() __MW_INSTRUM_RECORD_HIT_661DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_662XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_662() __MW_INSTRUM_RECORD_HIT_662XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_663EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_663() __MW_INSTRUM_RECORD_HIT_663EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_664DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_664(...) (__MW_INSTRUM_RECORD_HIT_664DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_664(exp) (__MW_INSTRUM_RECORD_HIT_664DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_666IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_666(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_666IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_673IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_673(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_673IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_678IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_678(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_678IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_685IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_685(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_685IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_690IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_690(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_690IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_693DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_693() __MW_INSTRUM_RECORD_HIT_693DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_694() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_695DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_695() __MW_INSTRUM_RECORD_HIT_695DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_696DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_696() __MW_INSTRUM_RECORD_HIT_696DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_697DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_697() __MW_INSTRUM_RECORD_HIT_697DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_698() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_699DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_699() __MW_INSTRUM_RECORD_HIT_699DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_700() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_701DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_701() __MW_INSTRUM_RECORD_HIT_701DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_702DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_702(...) (__MW_INSTRUM_RECORD_HIT_702DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_702(exp) (__MW_INSTRUM_RECORD_HIT_702DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_704IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_704(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_704IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_707XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_707() __MW_INSTRUM_RECORD_HIT_707XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_708DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_708(...) (__MW_INSTRUM_RECORD_HIT_708DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_708(exp) (__MW_INSTRUM_RECORD_HIT_708DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_710IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_710(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_710IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_713DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_713(...) (__MW_INSTRUM_RECORD_HIT_713DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_713(exp) (__MW_INSTRUM_RECORD_HIT_713DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_715IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_715(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_715IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_718() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_719DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_719(...) (__MW_INSTRUM_RECORD_HIT_719DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_719(exp) (__MW_INSTRUM_RECORD_HIT_719DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_721IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_721(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_721IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_724DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_724(...) (__MW_INSTRUM_RECORD_HIT_724DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_724(exp) (__MW_INSTRUM_RECORD_HIT_724DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_730IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_730(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_730IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_735IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_735(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_735IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_738() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_739DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_739(...) (__MW_INSTRUM_RECORD_HIT_739DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_739(exp) (__MW_INSTRUM_RECORD_HIT_739DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_741IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_741(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_741IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_744DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_744(...) (__MW_INSTRUM_RECORD_HIT_744DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_744(exp) (__MW_INSTRUM_RECORD_HIT_744DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_746IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_746(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_746IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_749() ((void)0)


#define __MW_INSTRUM_NODE_750() ((void)0)


#define __MW_INSTRUM_NODE_751() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_752XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_752() __MW_INSTRUM_RECORD_HIT_752XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_753DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_753(...) (__MW_INSTRUM_RECORD_HIT_753DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_753(exp) (__MW_INSTRUM_RECORD_HIT_753DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_755IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_755(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_755IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_758DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_758(...) (__MW_INSTRUM_RECORD_HIT_758DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_758(exp) (__MW_INSTRUM_RECORD_HIT_758DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_760IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_760(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_760IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_767IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_767(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_767IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_772() ((void)0)


#define __MW_INSTRUM_NODE_773() ((void)0)


#define __MW_INSTRUM_NODE_774() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_775XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_775() __MW_INSTRUM_RECORD_HIT_775XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_776DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_776(...) (__MW_INSTRUM_RECORD_HIT_776DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_776(exp) (__MW_INSTRUM_RECORD_HIT_776DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_778IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_778(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_778IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_781DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_781(...) (__MW_INSTRUM_RECORD_HIT_781DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_781(exp) (__MW_INSTRUM_RECORD_HIT_781DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_783() ((void)0)


#define __MW_INSTRUM_NODE_784() ((void)0)


#define __MW_INSTRUM_NODE_785() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_786XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_786() __MW_INSTRUM_RECORD_HIT_786XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_787EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_787() __MW_INSTRUM_RECORD_HIT_787EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_788DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_788(...) (__MW_INSTRUM_RECORD_HIT_788DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_788(exp) (__MW_INSTRUM_RECORD_HIT_788DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_790IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_790(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_790IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_793DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_793(...) (__MW_INSTRUM_RECORD_HIT_793DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_793(exp) (__MW_INSTRUM_RECORD_HIT_793DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_795IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_795(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_795IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_798DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_798(...) (__MW_INSTRUM_RECORD_HIT_798DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_798(exp) (__MW_INSTRUM_RECORD_HIT_798DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_800IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_800(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_800IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_803() ((void)0)


#define __MW_INSTRUM_NODE_804() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_805XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_805() __MW_INSTRUM_RECORD_HIT_805XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_806EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_806() __MW_INSTRUM_RECORD_HIT_806EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_807() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_808XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_808() __MW_INSTRUM_RECORD_HIT_808XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_809EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_809() __MW_INSTRUM_RECORD_HIT_809EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_810() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_811XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_811() __MW_INSTRUM_RECORD_HIT_811XZ_RntCWIQhSBMk0JpdeDcPVE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlaveAPT.c"
#line 8 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlaveAPT.h"
#ifndef _CANOPENSLAVE_APT_DEFINES_H
#define _CANOPENSLAVE_APT_DEFINES_H
#line 2 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlave_APT_PDOs.h"
#ifndef _SCANOPEN_TYPES_H
#define _SCANOPEN_TYPES_H
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
#line 5 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlave_APT_PDOs.h"
typedef int32_t int32_T; 
typedef int16_t int16_T; 
typedef int8_t int8_T; 
typedef uint32_t uint32_T; 
typedef uint16_t uint16_T; 
typedef uint8_t uint8_T; 
#line 23
typedef 
#line 11
union { 
struct { 
int32_T dw0; 
int32_T dw1; 
}; 
struct { 
int16_T w0; 
int16_T w1; 
int16_T w2; 
int16_T w3; 
}; 
uint8_T Message[8]; 
} RPDO_STRUCT; 
#line 37
typedef 
#line 25
union { 
struct { 
int32_T dw0; 
int32_T dw1; 
}; 
struct { 
int16_T w0; 
int16_T w1; 
int16_T w2; 
int16_T w3; 
}; 
uint8_T Message[8]; 
} TPDO_STRUCT; 

#endif /* _SCANOPEN_TYPES_H */
#line 154 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlaveAPT.h"
typedef 
#line 138
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
} CAN_MSG_APT; 
#line 163
typedef 
#line 158
struct { 
uint32_T ovf_cnt; 
CAN_MSG_APT msg[8]; 
uint8_T in; 
uint8_T out; 
} CAN_MSG_QUEUE_APT; 

CAN_MSG_QUEUE_APT can_rx_queue_APT; 
CAN_MSG_APT *gRxCAN_APT; 
#line 183
typedef 
#line 175
struct { 
uint8_T Node_ID; 
uint16_T error_code; 
uint16_T Baudrate; 
uint16_T heartbeat_time; 
uint16_T heartbeat_timestamp; 
CAN_MSG_APT heartbeat_msg; 
uint8_T error_register; 
} CANOpenSlave_CONFIG_APT; 
#line 203
typedef 
#line 187
struct { 

uint16_T event_time; 
uint16_T event_timestamp; 
#line 201
uint8_T *pData; 
CAN_MSG_APT CAN; 
} TPDO_CONFIG_APT; 
#line 211
typedef 
#line 207
struct { 
uint16_T ID; 
uint8_T LEN; 
uint8_T *pData; 
} RPDO_CONFIG_APT; 
#line 218
void CANOpenSlave_ResetCommunication_APT(void); 
void CANOpenSlave_ProcessStackAsyncRx_APT(uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_ProcessStack_APT(uint32_T rxID, uint8_T rxDLC, const uint8_T * rxData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_GetRPDO_APT(uint8_T no, uint8_T * data); 
void CANOpenHW_SendMessage_APT(CAN_MSG_APT * pTransmitBuf, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_SetTPDO_APT(uint8_T no, const uint8_T * data); 

uint8_T Handle_SDO_Request_APT(uint8_T * pData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
#endif /* _CANOPENSLAVE_APT_DEFINES_H */
#line 19 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\Data_TypeAPT.h"
typedef 
#line 7
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
#line 31
typedef 
#line 22
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
#line 43
typedef 
#line 33
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
#line 59
typedef 
#line 47
union { 
struct { 
uint8_T ControlWord; 
uint8_T dummy0; 
uint8_T dummy1; 
uint8_T dummy2; 
uint8_T dummy3; 
uint8_T PedalPosition; 
uint8_T Heartbeat; 
uint8_T dummy4; 
}; 
uint8_T Message[8]; 
} TPDO_ID1A4; 
#line 16 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlaveAPT.c"
RPDO_ID1C1 RPDO01_APT; 
RPDO_ID1C2 RPDO02_APT; 
RPDO_ID1C3 RPDO03_APT; 
TPDO_ID1A4 TPDO01_APT; 




uint16_T gTimCnt_APT = (0); 


CANOpenSlave_CONFIG_APT gCANOPENConfig_APT; 



TPDO_CONFIG_APT gTPDOConfig_APT[1]; 

uint8_T gTPDONr_APT = (1); 




RPDO_CONFIG_APT gRPDOConfig_APT[3]; 



CAN_MSG_APT gTxSDO_APT; 


CAN_MSG_APT gTxSDOw_APT; 


CAN_MSG_APT gTxEMGY_APT; 



void CANOpenHW_SendMessage_APT(CAN_MSG_APT *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_20(); __MW_INSTRUM_NODE_416(); 
__MW_INSTRUM_NODE_417(), memcpy(txData, pTransmitBuf->BUF, pTransmitBuf->LEN); 
*txID = pTransmitBuf->ID; 
*txDLC = pTransmitBuf->LEN; __MW_INSTRUM_NODE_418(); 
} 



uint8_T CANOpenHW_IsTimeExpired_APT(uint16_T timestamp) 
{ int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_21(); __MW_INSTRUM_NODE_419(); { 
if (__MW_INSTRUM_NODE_420(((__mw_tmp_for_expr_1 = gTimCnt_APT), ((__mw_tmp_for_expr_2 = timestamp), (__MW_INSTRUM_NODE_422(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ { 
if (__MW_INSTRUM_NODE_425(((__mw_tmp_for_expr_3 = gTimCnt_APT - timestamp), (__MW_INSTRUM_NODE_427(__mw_tmp_for_expr_3, 0x8000), (__mw_tmp_for_expr_3 < 0x8000))))) 
{ __MW_INSTRUM_NODE_430(); return 1; } else 

{ __MW_INSTRUM_NODE_431(); return 0; }  } 
} else 

{ { 
if (__MW_INSTRUM_NODE_432(((__mw_tmp_for_expr_4 = timestamp - gTimCnt_APT), (__MW_INSTRUM_NODE_434(__mw_tmp_for_expr_4, 0x8000), (__mw_tmp_for_expr_4 > 0x8000))))) 
{ __MW_INSTRUM_NODE_437(); return 1; } else 

{ __MW_INSTRUM_NODE_438(); return 0; }  } 
}  } 
} 


uint16_T CANOpenHW_GetTime_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_22(); __MW_INSTRUM_NODE_439(); 
{ uint16_T __mw_tmp_for_return = gTimCnt_APT; __MW_INSTRUM_NODE_440(); return __mw_tmp_for_return; } 
} 
#line 91
void Prepare_TPDOs_APT(void) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_23(); __MW_INSTRUM_NODE_441(); { 
uint8_T i; 
i = (0); { 
while (__MW_INSTRUM_NODE_442(i < 1)) 
{ { 
if (__MW_INSTRUM_NODE_444(((__mw_tmp_for_expr_1 = (((gTPDOConfig_APT)[i]).CAN).ID), (__MW_INSTRUM_NODE_446(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 != 0))))) 
{ 

__MW_INSTRUM_NODE_449(), memcpy(&(((((gTPDOConfig_APT)[i]).CAN).BUF)[0]), ((gTPDOConfig_APT)[i]).pData, (((gTPDOConfig_APT)[i]).CAN).LEN); 


((gTPDOConfig_APT)[i]).event_timestamp = (__MW_INSTRUM_NODE_450(), CANOpenHW_GetTime_APT()); 
#line 110
}  } 
i++; 
}  } 
gTPDONr_APT = (1); } __MW_INSTRUM_NODE_451(); 
} 



void TransmitPDO_APT(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_24(); __MW_INSTRUM_NODE_452(); 
#line 125
((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp = (__MW_INSTRUM_NODE_453(), CANOpenHW_GetTime_APT()) + ((gTPDOConfig_APT)[gTPDONr_APT]).event_time; 

__MW_INSTRUM_NODE_454(), CANOpenHW_SendMessage_APT(&(((gTPDOConfig_APT)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_455(); 
} 




void CANOpenSlave_Init_APT(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_25(); __MW_INSTRUM_NODE_456(); { 
uint8_T i; 
#line 141
gCANOPENConfig_APT.Node_ID = Node_ID; 
gCANOPENConfig_APT.error_code = (0); 
gCANOPENConfig_APT.Baudrate = Baudrate; 
gCANOPENConfig_APT.heartbeat_time = Heartbeat; 
(gCANOPENConfig_APT.heartbeat_msg).ID = 0x700 + Node_ID; 
(gCANOPENConfig_APT.heartbeat_msg).LEN = (1); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0); 
gCANOPENConfig_APT.error_register = (0); 


gTxSDO_APT.ID = 0x580 + gCANOPENConfig_APT.Node_ID; 
gTxSDO_APT.LEN = (8); 
#line 165
i = (0); { 
while (__MW_INSTRUM_NODE_457(i < 3)) 
{ 
((gRPDOConfig_APT)[i]).ID = (0); 
i++; 
}  } 


gTPDONr_APT = (0xff); } __MW_INSTRUM_NODE_459(); 
} 




void CANOpenSlave_InitRPDO_APT(uint8_T PDO_NR, uint16_T CAN_ID, uint8_T len, uint8_T *dat) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_26(); __MW_INSTRUM_NODE_460(); 
PDO_NR--; 
((gRPDOConfig_APT)[PDO_NR]).LEN = len; 
((gRPDOConfig_APT)[PDO_NR]).pData = dat; { 
if (__MW_INSTRUM_NODE_461(((__mw_tmp_for_expr_1 = CAN_ID), (__MW_INSTRUM_NODE_463(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0))))) 
{ 
((gRPDOConfig_APT)[PDO_NR]).ID = (0x200 + 0x100 * (uint16_T)PDO_NR) + gCANOPENConfig_APT.Node_ID; 
} else 

{ 
((gRPDOConfig_APT)[PDO_NR]).ID = CAN_ID; 
}  } __MW_INSTRUM_NODE_466(); 
} 
#line 199
void CANOpenSlave_InitTPDO_APT(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_27(); __MW_INSTRUM_NODE_467(); 
PDO_NR--; 
(((gTPDOConfig_APT)[PDO_NR]).CAN).ID = CAN_ID; 
(((gTPDOConfig_APT)[PDO_NR]).CAN).LEN = len; 
((gTPDOConfig_APT)[PDO_NR]).pData = pDat; 

((gTPDOConfig_APT)[PDO_NR]).event_time = event_time; __MW_INSTRUM_NODE_468(); 




} 




void CANOpenSlave_ResetApplication_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_28(); __MW_INSTRUM_NODE_469(); 
; __MW_INSTRUM_NODE_470(); 
} 




void CANOpenSlave_ResetCommunication_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_29(); __MW_INSTRUM_NODE_471(); 
__MW_INSTRUM_NODE_472(), CANOpenSlave_Init_APT(500, 0x6, 6000L); 



__MW_INSTRUM_NODE_473(), CANOpenSlave_InitTPDO_APT(1, 0, 10, 0, 8, &(TPDO01_APT.Message)); 
#line 236
__MW_INSTRUM_NODE_474(), CANOpenSlave_InitRPDO_APT(1, 0x1c1, 8, &(RPDO01_APT.Message)); 
__MW_INSTRUM_NODE_475(), CANOpenSlave_InitRPDO_APT(2, 0x1c2, 8, &(RPDO02_APT.Message)); 
__MW_INSTRUM_NODE_476(), CANOpenSlave_InitRPDO_APT(3, 0x1c3, 8, &(RPDO03_APT.Message)); __MW_INSTRUM_NODE_477(); 


} 
#line 249
const uint8_T SDOResponseTable_APT[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((6000L >> 0) & (0xff)), ((6000L >> 8) & (0xff)), ((6000L >> 16) & (0xff)), ((6000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 431
uint8_T Search_OD_APT(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_30(); __MW_INSTRUM_NODE_478(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable_APT)[0]); { 
while (__MW_INSTRUM_NODE_479(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_481(__MW_INSTRUM_NODE_483(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_485(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_488(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_490(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_493(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_494(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_496(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_499(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_501(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_504(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_506(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_509(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_510(); 
i++; 
}  } __MW_INSTRUM_NODE_511(); __MW_INSTRUM_NODE_512(); 
return 0xff; } 
} 
#line 527
void Send_SDO_Abort_APT(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_31(); __MW_INSTRUM_NODE_513(); { 
uint8_T i; 
(gTxSDO_APT.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_514(i < 4); i++) 
{ 
(gTxSDO_APT.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_516(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_517(); 
} 


void CopyConstToData_APT(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_32(); __MW_INSTRUM_NODE_518(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_519(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_521(); 
} 



uint8_T Handle_SDO_Request_APT(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_33(); __MW_INSTRUM_NODE_522(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
#line 567
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO_APT.BUF)[1] = pData[1]; 
(gTxSDO_APT.BUF)[2] = pData[2]; 
(gTxSDO_APT.BUF)[3] = pData[3]; { 


if (__MW_INSTRUM_NODE_523(__MW_INSTRUM_NODE_525(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_527(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_530(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_532(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 639
found = (__MW_INSTRUM_NODE_535(), Search_OD_APT(index, subindex)); { 

if (__MW_INSTRUM_NODE_536(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_538(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_541(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_543(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_546(), memcpy(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8]), 8); 
__MW_INSTRUM_NODE_547(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_548(); 
return 1; 
}  } __MW_INSTRUM_NODE_549(); 

__MW_INSTRUM_NODE_550(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_551(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_552(__MW_INSTRUM_NODE_554(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_556(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_559(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_561(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_564(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_566(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_569(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_570(); 
return 1; 
}  } __MW_INSTRUM_NODE_571(); 

__MW_INSTRUM_NODE_572(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_573(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_574(__MW_INSTRUM_NODE_576(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_578(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_581(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_583(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_586(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_588(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4b); 
(gTxSDO_APT.BUF)[4] = (uint8_T)(gCANOPENConfig_APT.heartbeat_time); 
(gTxSDO_APT.BUF)[5] = (uint8_T)((gCANOPENConfig_APT.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_591(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_592(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_593(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_595(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig_APT.heartbeat_time = pData[5]; 
gCANOPENConfig_APT.heartbeat_time = ((gCANOPENConfig_APT.heartbeat_time) << 8) + pData[4]; 
(gTxSDO_APT.BUF)[0] = (0x60); 

(gTxSDO_APT.BUF)[4] = (0); 
(gTxSDO_APT.BUF)[5] = (0); 
(gTxSDO_APT.BUF)[6] = (0); 
(gTxSDO_APT.BUF)[7] = (0); 
__MW_INSTRUM_NODE_598(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_599(); 
return 1; 
}  } __MW_INSTRUM_NODE_600(); 
__MW_INSTRUM_NODE_601(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_602(); 
return 0; 
}  } __MW_INSTRUM_NODE_603(); 


found = (__MW_INSTRUM_NODE_604(), Search_OD_APT(index, subindex)); { 
if (__MW_INSTRUM_NODE_605(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_607(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_610(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_612(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_615(), CopyConstToData_APT(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8])); 
__MW_INSTRUM_NODE_616(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_617(); 
return 1; 
}  } __MW_INSTRUM_NODE_618(); 

__MW_INSTRUM_NODE_619(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_620(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_621(__MW_INSTRUM_NODE_623(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_625(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_628(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_630(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_633(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_635(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_638(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_639(); 
return 1; 
}  } __MW_INSTRUM_NODE_640(); 

__MW_INSTRUM_NODE_641(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_642(); 
return 0; 
}  } __MW_INSTRUM_NODE_643(); 
__MW_INSTRUM_NODE_644(), Send_SDO_Abort_APT(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_645(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_646(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_648(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_651(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_652(); 
return 0; 
}  } __MW_INSTRUM_NODE_653(); __MW_INSTRUM_NODE_654(); 
return 1; } 
} 

void SDO_Write_APT(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_34(); __MW_INSTRUM_NODE_655(); { 
char k; 
gTxSDOw_APT.ID = 0x600 + Node_ID; 
gTxSDOw_APT.LEN = (8); 
(gTxSDOw_APT.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw_APT.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw_APT.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw_APT.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_656(k < 4); k++) 
{ (gTxSDOw_APT.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_658(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_659(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_660(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_661(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw_APT.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_662(); 




} 
#line 780
void CANOpenSlave_ProcessStackAsyncRx_APT(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_35(); __MW_INSTRUM_NODE_663(); { 
uint8_T i; 
gTimCnt_APT++; 
*txDLC = (0); { 



if (__MW_INSTRUM_NODE_664(((__mw_tmp_for_expr_1 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_2 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_666(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 != __mw_tmp_for_expr_2)))))) 
{ 
gRxCAN_APT = &((can_rx_queue_APT.msg)[can_rx_queue_APT.out]); { 




if (__MW_INSTRUM_NODE_669(__MW_INSTRUM_NODE_671(((__mw_tmp_for_expr_3 = gRxCAN_APT->ID), (__MW_INSTRUM_NODE_673(__mw_tmp_for_expr_3, 0), (__mw_tmp_for_expr_3 == 0)))) && __MW_INSTRUM_NODE_676(((__mw_tmp_for_expr_4 = gRxCAN_APT->LEN), (__MW_INSTRUM_NODE_678(__mw_tmp_for_expr_4, 3), (__mw_tmp_for_expr_4 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_681(__MW_INSTRUM_NODE_683(((__mw_tmp_for_expr_5 = (gRxCAN_APT->BUF)[1]), ((__mw_tmp_for_expr_6 = gCANOPENConfig_APT.Node_ID), (__MW_INSTRUM_NODE_685(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6))))) || __MW_INSTRUM_NODE_688(((__mw_tmp_for_expr_7 = (gRxCAN_APT->BUF)[1]), (__MW_INSTRUM_NODE_690(__mw_tmp_for_expr_7, 0), (__mw_tmp_for_expr_7 == 0)))))) 
{ { 
switch ((gRxCAN_APT->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_693(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_694(), Prepare_TPDOs_APT(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_695(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_696(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_697(); 
__MW_INSTRUM_NODE_698(), CANOpenSlave_ResetApplication_APT(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_699(); 
__MW_INSTRUM_NODE_700(), CANOpenSlave_ResetCommunication_APT(); 
break; 
default:  __MW_INSTRUM_NODE_701(); 
break; 
}  } 

can_rx_queue_APT.out = __MW_INSTRUM_NODE_702(((__mw_tmp_for_expr_8 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_9 = 8 - 1), (__MW_INSTRUM_NODE_704(__mw_tmp_for_expr_8, __mw_tmp_for_expr_9), (__mw_tmp_for_expr_8 < __mw_tmp_for_expr_9))))) ? (can_rx_queue_APT.out + 1) : 0; __MW_INSTRUM_NODE_707(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_708(((__mw_tmp_for_expr_10 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_710(__mw_tmp_for_expr_10, 0x4), (__mw_tmp_for_expr_10 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_713(((__mw_tmp_for_expr_11 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_12 = gCANOPENConfig_APT.Node_ID + 0x600), (__MW_INSTRUM_NODE_715(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 == __mw_tmp_for_expr_12)))))) 
{ 
i = (__MW_INSTRUM_NODE_718(), Handle_SDO_Request_APT(&((gRxCAN_APT->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_719(((__mw_tmp_for_expr_13 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_721(__mw_tmp_for_expr_13, 0x5), (__mw_tmp_for_expr_13 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_724(i < 3)) 
{ { 
if (__MW_INSTRUM_NODE_726(__MW_INSTRUM_NODE_728(((__mw_tmp_for_expr_14 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_15 = ((gRPDOConfig_APT)[i]).ID), (__MW_INSTRUM_NODE_730(__mw_tmp_for_expr_14, __mw_tmp_for_expr_15), (__mw_tmp_for_expr_14 == __mw_tmp_for_expr_15))))) && __MW_INSTRUM_NODE_733(((__mw_tmp_for_expr_16 = gRxCAN_APT->LEN), ((__mw_tmp_for_expr_17 = ((gRPDOConfig_APT)[i]).LEN), (__MW_INSTRUM_NODE_735(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))))) 
{ 
__MW_INSTRUM_NODE_738(), memcpy(((gRPDOConfig_APT)[i]).pData, &((gRxCAN_APT->BUF)[0]), ((gRPDOConfig_APT)[i]).LEN); 
i = (3); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue_APT.out = __MW_INSTRUM_NODE_739(((__mw_tmp_for_expr_18 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_19 = 8 - 1), (__MW_INSTRUM_NODE_741(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 < __mw_tmp_for_expr_19))))) ? (can_rx_queue_APT.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_744(((__mw_tmp_for_expr_20 = gTPDONr_APT), (__MW_INSTRUM_NODE_746(__mw_tmp_for_expr_20, 0xff), (__mw_tmp_for_expr_20 == 0xff))))) 
{ 

gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_749(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 

__MW_INSTRUM_NODE_750(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 

((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_751(), Prepare_TPDOs_APT(); 




gTPDONr_APT = (1); __MW_INSTRUM_NODE_752(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_753(((__mw_tmp_for_expr_21 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_755(__mw_tmp_for_expr_21, 0x5), (__mw_tmp_for_expr_21 == 0x5))))) 
{ 
gTPDONr_APT++; { 
if (__MW_INSTRUM_NODE_758(((__mw_tmp_for_expr_22 = gTPDONr_APT), (__MW_INSTRUM_NODE_760(__mw_tmp_for_expr_22, 1), (__mw_tmp_for_expr_22 >= 1))))) 
{ 
gTPDONr_APT = (0); 
}  } { 

if (__MW_INSTRUM_NODE_763(__MW_INSTRUM_NODE_765(((__mw_tmp_for_expr_23 = ((gTPDOConfig_APT)[gTPDONr_APT]).event_time), (__MW_INSTRUM_NODE_767(__mw_tmp_for_expr_23, 0), (__mw_tmp_for_expr_23 != 0)))) && (__MW_INSTRUM_NODE_770((__MW_INSTRUM_NODE_772(), CANOpenHW_IsTimeExpired_APT(((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_773(), memcpy((((gTPDOConfig_APT)[gTPDONr_APT]).CAN).BUF, ((gTPDOConfig_APT)[gTPDONr_APT]).pData, (((gTPDOConfig_APT)[gTPDONr_APT]).CAN).LEN); 
__MW_INSTRUM_NODE_774(), TransmitPDO_APT(gTPDONr_APT, txID, txDLC, txData); __MW_INSTRUM_NODE_775(); 
return; 
}  } 
#line 933
}  } { 



if (__MW_INSTRUM_NODE_776(((__mw_tmp_for_expr_24 = gCANOPENConfig_APT.heartbeat_time), (__MW_INSTRUM_NODE_778(__mw_tmp_for_expr_24, 0), (__mw_tmp_for_expr_24 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_781((__MW_INSTRUM_NODE_783(), CANOpenHW_IsTimeExpired_APT(gCANOPENConfig_APT.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_784(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_785(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_786(); 
} 

void CANOpenSlave_ProcessStack_APT(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_36(); __MW_INSTRUM_NODE_787(); { 
if (__MW_INSTRUM_NODE_788(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_790(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_793(((__mw_tmp_for_expr_2 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_795(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue_APT.in + 1) : 0; { 
if (__MW_INSTRUM_NODE_798(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_800(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG_APT *d = &((can_rx_queue_APT.msg)[can_rx_queue_APT.in]); 
__MW_INSTRUM_NODE_803(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue_APT.in = n; 
}  } 
#line 965
}  } 
__MW_INSTRUM_NODE_804(), CANOpenSlave_ProcessStackAsyncRx_APT(txID, txDLC, txData); __MW_INSTRUM_NODE_805(); 
} 

void CANOpenSlave_GetRPDO_APT(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_37(); __MW_INSTRUM_NODE_806(); 
__MW_INSTRUM_NODE_807(), memcpy(data, ((gRPDOConfig_APT)[no]).pData, ((gRPDOConfig_APT)[no]).LEN); __MW_INSTRUM_NODE_808(); 
} 
void CANOpenSlave_SetTPDO_APT(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_38(); __MW_INSTRUM_NODE_809(); 
__MW_INSTRUM_NODE_810(), memcpy(((gTPDOConfig_APT)[no]).pData, data, 8); __MW_INSTRUM_NODE_811(); 
} 
