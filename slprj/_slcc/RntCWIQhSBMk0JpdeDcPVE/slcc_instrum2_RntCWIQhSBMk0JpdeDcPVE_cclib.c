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

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_478 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_478() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_478 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_480(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(480U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(481U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_480(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(480U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(481U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_485(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(485U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(486U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_485(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(485U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(486U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_478(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(478U), __MW_INSTRUM_RECORD_COMBINATION_HIT_478(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(479U), __MW_INSTRUM_RECORD_COMBINATION_HIT_478(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_478(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(478U), __MW_INSTRUM_RECORD_COMBINATION_HIT_478(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(479U), __MW_INSTRUM_RECORD_COMBINATION_HIT_478(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_520 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_520() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_520 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_522(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(522U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(523U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_522(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(522U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(523U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_527(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(527U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(528U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_527(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(527U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(528U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_520(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(520U), __MW_INSTRUM_RECORD_COMBINATION_HIT_520(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(521U), __MW_INSTRUM_RECORD_COMBINATION_HIT_520(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_520(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(520U), __MW_INSTRUM_RECORD_COMBINATION_HIT_520(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(521U), __MW_INSTRUM_RECORD_COMBINATION_HIT_520(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_549 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_549() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_549 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_551(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(551U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(552U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_551(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(551U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(552U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_556(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(556U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(557U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_556(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(556U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(557U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_549(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(549U), __MW_INSTRUM_RECORD_COMBINATION_HIT_549(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(550U), __MW_INSTRUM_RECORD_COMBINATION_HIT_549(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_549(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(549U), __MW_INSTRUM_RECORD_COMBINATION_HIT_549(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(550U), __MW_INSTRUM_RECORD_COMBINATION_HIT_549(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_571 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_571() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_571 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_573(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(573U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(574U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_573(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(573U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(574U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_578(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(578U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(579U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_578(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(578U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(579U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_571(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(571U), __MW_INSTRUM_RECORD_COMBINATION_HIT_571(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(572U), __MW_INSTRUM_RECORD_COMBINATION_HIT_571(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_571(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(571U), __MW_INSTRUM_RECORD_COMBINATION_HIT_571(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(572U), __MW_INSTRUM_RECORD_COMBINATION_HIT_571(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_618 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_618() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_618 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_620(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(620U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(621U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_620(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(620U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(621U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_625(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(625U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(626U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_625(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(625U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(626U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_618(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(618U), __MW_INSTRUM_RECORD_COMBINATION_HIT_618(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(619U), __MW_INSTRUM_RECORD_COMBINATION_HIT_618(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_618(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(618U), __MW_INSTRUM_RECORD_COMBINATION_HIT_618(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(619U), __MW_INSTRUM_RECORD_COMBINATION_HIT_618(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_666 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_666() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_666 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_668(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(668U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(669U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_668(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(668U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(669U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_673(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(673U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(674U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_673(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(673U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(674U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_666(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(666U), __MW_INSTRUM_RECORD_COMBINATION_HIT_666(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(667U), __MW_INSTRUM_RECORD_COMBINATION_HIT_666(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_666(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(666U), __MW_INSTRUM_RECORD_COMBINATION_HIT_666(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(667U), __MW_INSTRUM_RECORD_COMBINATION_HIT_666(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_678 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_678() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_678 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_680(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(680U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(681U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_680(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(680U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(681U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_685(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(685U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(686U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_685(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(685U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(686U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_678(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(678U), __MW_INSTRUM_RECORD_COMBINATION_HIT_678(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(679U), __MW_INSTRUM_RECORD_COMBINATION_HIT_678(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_678(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(678U), __MW_INSTRUM_RECORD_COMBINATION_HIT_678(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(679U), __MW_INSTRUM_RECORD_COMBINATION_HIT_678(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_723 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_723() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_723 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_725(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(725U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(726U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_725(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(725U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(726U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_730(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(730U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(731U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_730(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(730U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(731U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_723(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(723U), __MW_INSTRUM_RECORD_COMBINATION_HIT_723(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(724U), __MW_INSTRUM_RECORD_COMBINATION_HIT_723(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_723(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(723U), __MW_INSTRUM_RECORD_COMBINATION_HIT_723(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(724U), __MW_INSTRUM_RECORD_COMBINATION_HIT_723(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_760 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_760() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_760 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_762(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(762U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(763U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_762(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(762U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(763U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_767(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(767U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(768U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_767(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(767U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(768U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_760(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(760U), __MW_INSTRUM_RECORD_COMBINATION_HIT_760(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(761U), __MW_INSTRUM_RECORD_COMBINATION_HIT_760(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_760(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(760U), __MW_INSTRUM_RECORD_COMBINATION_HIT_760(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(761U), __MW_INSTRUM_RECORD_COMBINATION_HIT_760(), 0) : 0))
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
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_478 = 0; 
#define __MW_INSTRUM_FCN_ENTER_31() 
#define __MW_INSTRUM_FCN_ENTER_32() 
#define __MW_INSTRUM_FCN_ENTER_33() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_520 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_549 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_571 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_618 = 0; 
#define __MW_INSTRUM_FCN_ENTER_34() 
#define __MW_INSTRUM_FCN_ENTER_35() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_666 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_678 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_723 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_760 = 0; 
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

#define __MW_INSTRUM_NODE_412() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(412U))
#define __MW_INSTRUM_NODE_413() \
  (__MW_INSTRUM_RECORD_HIT(413U))
#define __MW_INSTRUM_NODE_414() \
  (__MW_INSTRUM_RECORD_HIT(414U))
#define __MW_INSTRUM_NODE_415() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(415U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_416(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(416U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(417U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_416(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(416U), 1) : (__MW_INSTRUM_RECORD_HIT(417U), 0))
#endif
#define __MW_INSTRUM_NODE_418(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(418U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(419U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(420U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_421(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(421U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(422U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_421(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(421U), 1) : (__MW_INSTRUM_RECORD_HIT(422U), 0))
#endif
#define __MW_INSTRUM_NODE_423(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(423U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(424U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(425U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_426() \
  (__MW_INSTRUM_RECORD_HIT(426U))
#define __MW_INSTRUM_NODE_422() \
  (__MW_INSTRUM_RECORD_HIT(422U))
#define __MW_INSTRUM_NODE_427() \
  (__MW_INSTRUM_RECORD_HIT(427U))
#define __MW_INSTRUM_NODE_417() \
  (__MW_INSTRUM_RECORD_HIT(417U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_428(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(428U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(429U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_428(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(428U), 1) : (__MW_INSTRUM_RECORD_HIT(429U), 0))
#endif
#define __MW_INSTRUM_NODE_430(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(430U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(431U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(432U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_433() \
  (__MW_INSTRUM_RECORD_HIT(433U))
#define __MW_INSTRUM_NODE_429() \
  (__MW_INSTRUM_RECORD_HIT(429U))
#define __MW_INSTRUM_NODE_434() \
  (__MW_INSTRUM_RECORD_HIT(434U))
#define __MW_INSTRUM_NODE_435() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(435U))
#define __MW_INSTRUM_NODE_436() \
  (__MW_INSTRUM_RECORD_HIT(436U))
#define __MW_INSTRUM_NODE_437() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(437U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_438(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(438U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(439U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_438(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(438U), 1) : (__MW_INSTRUM_RECORD_HIT(439U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_440(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(440U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(441U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_440(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(440U), 1) : (__MW_INSTRUM_RECORD_HIT(441U), 0))
#endif
#define __MW_INSTRUM_NODE_442(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(442U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(443U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(444U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_445() \
  (__MW_INSTRUM_RECORD_HIT(445U))
#define __MW_INSTRUM_NODE_446() \
  (__MW_INSTRUM_RECORD_HIT(446U))
#define __MW_INSTRUM_NODE_439() \
  (__MW_INSTRUM_RECORD_HIT(439U))
#define __MW_INSTRUM_NODE_447() \
  (__MW_INSTRUM_RECORD_HIT(447U))
#define __MW_INSTRUM_NODE_448() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(448U))
#define __MW_INSTRUM_NODE_449() \
  (__MW_INSTRUM_RECORD_HIT(449U))
#define __MW_INSTRUM_NODE_450() \
  (__MW_INSTRUM_RECORD_HIT(450U))
#define __MW_INSTRUM_NODE_451() \
  (__MW_INSTRUM_RECORD_HIT(451U))
#define __MW_INSTRUM_NODE_452() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(452U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_453(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(453U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(454U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_453(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(453U), 1) : (__MW_INSTRUM_RECORD_HIT(454U), 0))
#endif
#define __MW_INSTRUM_NODE_454() \
  (__MW_INSTRUM_RECORD_HIT(454U))
#define __MW_INSTRUM_NODE_455() \
  (__MW_INSTRUM_RECORD_HIT(455U))
#define __MW_INSTRUM_NODE_456() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(456U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_457(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(457U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(458U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_457(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(457U), 1) : (__MW_INSTRUM_RECORD_HIT(458U), 0))
#endif
#define __MW_INSTRUM_NODE_459(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(459U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(460U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(461U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_458() \
  (__MW_INSTRUM_RECORD_HIT(458U))
#define __MW_INSTRUM_NODE_462() \
  (__MW_INSTRUM_RECORD_HIT(462U))
#define __MW_INSTRUM_NODE_463() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(463U))
#define __MW_INSTRUM_NODE_464() \
  (__MW_INSTRUM_RECORD_HIT(464U))
#define __MW_INSTRUM_NODE_465() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(465U))
#define __MW_INSTRUM_NODE_466() \
  (__MW_INSTRUM_RECORD_HIT(466U))
#define __MW_INSTRUM_NODE_467() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(467U))
#define __MW_INSTRUM_NODE_468() \
  (__MW_INSTRUM_RECORD_HIT(468U))
#define __MW_INSTRUM_NODE_469() \
  (__MW_INSTRUM_RECORD_HIT(469U))
#define __MW_INSTRUM_NODE_470() \
  (__MW_INSTRUM_RECORD_HIT(470U))
#define __MW_INSTRUM_NODE_471() \
  (__MW_INSTRUM_RECORD_HIT(471U))
#define __MW_INSTRUM_NODE_472() \
  (__MW_INSTRUM_RECORD_HIT(472U))
#define __MW_INSTRUM_NODE_473() \
  (__MW_INSTRUM_RECORD_HIT(473U))
#define __MW_INSTRUM_NODE_474() \
  (__MW_INSTRUM_RECORD_HIT(474U))
#define __MW_INSTRUM_NODE_475() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(475U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_476(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(476U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(477U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_476(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(476U), 1) : (__MW_INSTRUM_RECORD_HIT(477U), 0))
#endif
#define __MW_INSTRUM_NODE_482(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(482U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(483U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(484U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_487(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(487U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(488U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(489U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_490() \
  (__MW_INSTRUM_RECORD_HIT(490U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_491(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(491U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(492U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_491(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(491U), 1) : (__MW_INSTRUM_RECORD_HIT(492U), 0))
#endif
#define __MW_INSTRUM_NODE_493(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(493U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(494U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(495U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_496(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(496U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(497U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_496(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(496U), 1) : (__MW_INSTRUM_RECORD_HIT(497U), 0))
#endif
#define __MW_INSTRUM_NODE_498(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(498U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(499U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(500U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_501(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(501U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(502U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_501(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(501U), 1) : (__MW_INSTRUM_RECORD_HIT(502U), 0))
#endif
#define __MW_INSTRUM_NODE_503(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(503U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(504U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(505U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_506() \
  (__MW_INSTRUM_RECORD_HIT(506U))
#define __MW_INSTRUM_NODE_507() \
  (__MW_INSTRUM_RECORD_HIT(507U))
#define __MW_INSTRUM_NODE_508() \
  (__MW_INSTRUM_RECORD_HIT(508U))
#define __MW_INSTRUM_NODE_509() \
  (__MW_INSTRUM_RECORD_HIT(509U))
#define __MW_INSTRUM_NODE_510() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(510U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_511(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(511U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(512U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_511(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(511U), 1) : (__MW_INSTRUM_RECORD_HIT(512U), 0))
#endif
#define __MW_INSTRUM_NODE_513() \
  (__MW_INSTRUM_RECORD_HIT(513U))
#define __MW_INSTRUM_NODE_514() \
  (__MW_INSTRUM_RECORD_HIT(514U))
#define __MW_INSTRUM_NODE_515() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(515U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_516(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(516U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(517U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_516(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(516U), 1) : (__MW_INSTRUM_RECORD_HIT(517U), 0))
#endif
#define __MW_INSTRUM_NODE_518() \
  (__MW_INSTRUM_RECORD_HIT(518U))
#define __MW_INSTRUM_NODE_519() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(519U))
#define __MW_INSTRUM_NODE_524(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(524U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(525U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(526U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_529(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(529U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(530U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(531U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_532() \
  (__MW_INSTRUM_RECORD_HIT(532U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_533(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(533U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(534U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_533(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(533U), 1) : (__MW_INSTRUM_RECORD_HIT(534U), 0))
#endif
#define __MW_INSTRUM_NODE_535(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(535U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(536U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(537U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_538(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(538U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(539U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_538(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(538U), 1) : (__MW_INSTRUM_RECORD_HIT(539U), 0))
#endif
#define __MW_INSTRUM_NODE_540(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(540U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(541U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(542U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_543() \
  (__MW_INSTRUM_RECORD_HIT(543U))
#define __MW_INSTRUM_NODE_544() \
  (__MW_INSTRUM_RECORD_HIT(544U))
#define __MW_INSTRUM_NODE_545() \
  (__MW_INSTRUM_RECORD_HIT(545U))
#define __MW_INSTRUM_NODE_546() \
  (__MW_INSTRUM_RECORD_HIT(546U))
#define __MW_INSTRUM_NODE_547() \
  (__MW_INSTRUM_RECORD_HIT(547U))
#define __MW_INSTRUM_NODE_548() \
  (__MW_INSTRUM_RECORD_HIT(548U))
#define __MW_INSTRUM_NODE_553(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(553U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(554U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(555U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_558(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(558U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(559U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(560U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_561(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(561U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(562U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_561(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(561U), 1) : (__MW_INSTRUM_RECORD_HIT(562U), 0))
#endif
#define __MW_INSTRUM_NODE_563(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(563U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(564U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(565U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_566() \
  (__MW_INSTRUM_RECORD_HIT(566U))
#define __MW_INSTRUM_NODE_567() \
  (__MW_INSTRUM_RECORD_HIT(567U))
#define __MW_INSTRUM_NODE_568() \
  (__MW_INSTRUM_RECORD_HIT(568U))
#define __MW_INSTRUM_NODE_569() \
  (__MW_INSTRUM_RECORD_HIT(569U))
#define __MW_INSTRUM_NODE_570() \
  (__MW_INSTRUM_RECORD_HIT(570U))
#define __MW_INSTRUM_NODE_575(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(575U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(576U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(577U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_580(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(580U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(581U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(582U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_583(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(583U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(584U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_583(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(583U), 1) : (__MW_INSTRUM_RECORD_HIT(584U), 0))
#endif
#define __MW_INSTRUM_NODE_585(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(585U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(586U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(587U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_588() \
  (__MW_INSTRUM_RECORD_HIT(588U))
#define __MW_INSTRUM_NODE_589() \
  (__MW_INSTRUM_RECORD_HIT(589U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_590(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(590U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(591U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_590(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(590U), 1) : (__MW_INSTRUM_RECORD_HIT(591U), 0))
#endif
#define __MW_INSTRUM_NODE_592(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(592U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(593U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(594U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_595() \
  (__MW_INSTRUM_RECORD_HIT(595U))
#define __MW_INSTRUM_NODE_596() \
  (__MW_INSTRUM_RECORD_HIT(596U))
#define __MW_INSTRUM_NODE_597() \
  (__MW_INSTRUM_RECORD_HIT(597U))
#define __MW_INSTRUM_NODE_598() \
  (__MW_INSTRUM_RECORD_HIT(598U))
#define __MW_INSTRUM_NODE_599() \
  (__MW_INSTRUM_RECORD_HIT(599U))
#define __MW_INSTRUM_NODE_600() \
  (__MW_INSTRUM_RECORD_HIT(600U))
#define __MW_INSTRUM_NODE_601() \
  (__MW_INSTRUM_RECORD_HIT(601U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_602(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(602U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(603U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_602(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(602U), 1) : (__MW_INSTRUM_RECORD_HIT(603U), 0))
#endif
#define __MW_INSTRUM_NODE_604(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(604U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(605U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(606U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_607(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(607U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(608U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_607(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(607U), 1) : (__MW_INSTRUM_RECORD_HIT(608U), 0))
#endif
#define __MW_INSTRUM_NODE_609(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(609U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(610U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(611U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_612() \
  (__MW_INSTRUM_RECORD_HIT(612U))
#define __MW_INSTRUM_NODE_613() \
  (__MW_INSTRUM_RECORD_HIT(613U))
#define __MW_INSTRUM_NODE_614() \
  (__MW_INSTRUM_RECORD_HIT(614U))
#define __MW_INSTRUM_NODE_615() \
  (__MW_INSTRUM_RECORD_HIT(615U))
#define __MW_INSTRUM_NODE_616() \
  (__MW_INSTRUM_RECORD_HIT(616U))
#define __MW_INSTRUM_NODE_617() \
  (__MW_INSTRUM_RECORD_HIT(617U))
#define __MW_INSTRUM_NODE_622(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(622U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(623U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(624U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_627(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(627U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(628U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(629U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_630(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(630U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(631U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_630(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(630U), 1) : (__MW_INSTRUM_RECORD_HIT(631U), 0))
#endif
#define __MW_INSTRUM_NODE_632(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(632U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(633U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(634U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_635() \
  (__MW_INSTRUM_RECORD_HIT(635U))
#define __MW_INSTRUM_NODE_636() \
  (__MW_INSTRUM_RECORD_HIT(636U))
#define __MW_INSTRUM_NODE_637() \
  (__MW_INSTRUM_RECORD_HIT(637U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_643(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(643U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(644U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_643(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(643U), 1) : (__MW_INSTRUM_RECORD_HIT(644U), 0))
#endif
#define __MW_INSTRUM_NODE_645(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(645U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(646U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(647U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_648() \
  (__MW_INSTRUM_RECORD_HIT(648U))
#define __MW_INSTRUM_NODE_649() \
  (__MW_INSTRUM_RECORD_HIT(649U))
#define __MW_INSTRUM_NODE_650() \
  (__MW_INSTRUM_RECORD_HIT(650U))
#define __MW_INSTRUM_NODE_651() \
  (__MW_INSTRUM_RECORD_HIT(651U))
#define __MW_INSTRUM_NODE_652() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(652U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_653(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(653U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(654U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_653(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(653U), 1) : (__MW_INSTRUM_RECORD_HIT(654U), 0))
#endif
#define __MW_INSTRUM_NODE_654() \
  (__MW_INSTRUM_RECORD_HIT(654U))
#define __MW_INSTRUM_NODE_655() \
  (__MW_INSTRUM_RECORD_HIT(655U))
#define __MW_INSTRUM_NODE_656() \
  (__MW_INSTRUM_RECORD_HIT(656U))
#define __MW_INSTRUM_NODE_657() \
  (__MW_INSTRUM_RECORD_HIT(657U))
#define __MW_INSTRUM_NODE_658() \
  (__MW_INSTRUM_RECORD_HIT(658U))
#define __MW_INSTRUM_NODE_659() \
  (__MW_INSTRUM_RECORD_HIT(659U))
#define __MW_INSTRUM_NODE_660() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(660U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_661(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(661U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(662U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_661(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(661U), 1) : (__MW_INSTRUM_RECORD_HIT(662U), 0))
#endif
#define __MW_INSTRUM_NODE_663(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(663U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(664U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(665U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_670(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(670U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(671U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(672U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_675(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(675U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(676U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(677U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_682(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(682U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(683U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(684U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_687(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(687U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(688U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(689U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_690() \
  (__MW_INSTRUM_RECORD_HIT(690U))
#define __MW_INSTRUM_NODE_691() \
  (__MW_INSTRUM_RECORD_HIT(691U))
#define __MW_INSTRUM_NODE_692() \
  (__MW_INSTRUM_RECORD_HIT(692U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_699(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(699U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(700U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_699(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(699U), 1) : (__MW_INSTRUM_RECORD_HIT(700U), 0))
#endif
#define __MW_INSTRUM_NODE_701(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(701U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(702U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(703U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_704() \
  (__MW_INSTRUM_RECORD_HIT(704U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_705(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(705U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(706U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_705(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(705U), 1) : (__MW_INSTRUM_RECORD_HIT(706U), 0))
#endif
#define __MW_INSTRUM_NODE_707(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(707U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(708U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(709U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_710(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(710U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(711U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_710(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(710U), 1) : (__MW_INSTRUM_RECORD_HIT(711U), 0))
#endif
#define __MW_INSTRUM_NODE_712(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(712U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(713U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(714U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_715() \
  (__MW_INSTRUM_RECORD_HIT(715U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_716(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(716U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(717U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_716(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(716U), 1) : (__MW_INSTRUM_RECORD_HIT(717U), 0))
#endif
#define __MW_INSTRUM_NODE_718(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(718U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(719U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(720U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_721(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(721U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(722U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_721(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(721U), 1) : (__MW_INSTRUM_RECORD_HIT(722U), 0))
#endif
#define __MW_INSTRUM_NODE_727(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(727U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(728U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(729U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_732(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(732U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(733U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(734U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_735() \
  (__MW_INSTRUM_RECORD_HIT(735U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_736(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(736U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(737U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_736(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(736U), 1) : (__MW_INSTRUM_RECORD_HIT(737U), 0))
#endif
#define __MW_INSTRUM_NODE_738(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(738U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(739U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(740U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_741(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(741U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(742U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_741(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(741U), 1) : (__MW_INSTRUM_RECORD_HIT(742U), 0))
#endif
#define __MW_INSTRUM_NODE_743(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(743U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(744U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(745U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_746() \
  (__MW_INSTRUM_RECORD_HIT(746U))
#define __MW_INSTRUM_NODE_747() \
  (__MW_INSTRUM_RECORD_HIT(747U))
#define __MW_INSTRUM_NODE_748() \
  (__MW_INSTRUM_RECORD_HIT(748U))
#define __MW_INSTRUM_NODE_749() \
  (__MW_INSTRUM_RECORD_HIT(749U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_750(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(750U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(751U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_750(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(750U), 1) : (__MW_INSTRUM_RECORD_HIT(751U), 0))
#endif
#define __MW_INSTRUM_NODE_752(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(752U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(753U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(754U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_755(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(755U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(756U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_755(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(755U), 1) : (__MW_INSTRUM_RECORD_HIT(756U), 0))
#endif
#define __MW_INSTRUM_NODE_757(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(757U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(758U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(759U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_764(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(764U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(765U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(766U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_769() \
  (__MW_INSTRUM_RECORD_HIT(769U))
#define __MW_INSTRUM_NODE_770() \
  (__MW_INSTRUM_RECORD_HIT(770U))
#define __MW_INSTRUM_NODE_771() \
  (__MW_INSTRUM_RECORD_HIT(771U))
#define __MW_INSTRUM_NODE_772() \
  (__MW_INSTRUM_RECORD_HIT(772U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_773(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(773U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(774U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_773(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(773U), 1) : (__MW_INSTRUM_RECORD_HIT(774U), 0))
#endif
#define __MW_INSTRUM_NODE_775(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(775U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(776U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(777U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_778(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(778U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(779U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_778(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(778U), 1) : (__MW_INSTRUM_RECORD_HIT(779U), 0))
#endif
#define __MW_INSTRUM_NODE_780() \
  (__MW_INSTRUM_RECORD_HIT(780U))
#define __MW_INSTRUM_NODE_781() \
  (__MW_INSTRUM_RECORD_HIT(781U))
#define __MW_INSTRUM_NODE_782() \
  (__MW_INSTRUM_RECORD_HIT(782U))
#define __MW_INSTRUM_NODE_783() \
  (__MW_INSTRUM_RECORD_HIT(783U))
#define __MW_INSTRUM_NODE_784() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(784U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_785(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(785U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(786U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_785(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(785U), 1) : (__MW_INSTRUM_RECORD_HIT(786U), 0))
#endif
#define __MW_INSTRUM_NODE_787(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(787U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(788U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(789U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_790(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(790U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(791U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_790(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(790U), 1) : (__MW_INSTRUM_RECORD_HIT(791U), 0))
#endif
#define __MW_INSTRUM_NODE_792(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(792U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(793U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(794U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_795(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(795U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(796U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_795(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(795U), 1) : (__MW_INSTRUM_RECORD_HIT(796U), 0))
#endif
#define __MW_INSTRUM_NODE_797(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(797U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(798U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(799U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_800() \
  (__MW_INSTRUM_RECORD_HIT(800U))
#define __MW_INSTRUM_NODE_801() \
  (__MW_INSTRUM_RECORD_HIT(801U))
#define __MW_INSTRUM_NODE_802() \
  (__MW_INSTRUM_RECORD_HIT(802U))
#define __MW_INSTRUM_NODE_803() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(803U))
#define __MW_INSTRUM_NODE_804() \
  (__MW_INSTRUM_RECORD_HIT(804U))
#define __MW_INSTRUM_NODE_805() \
  (__MW_INSTRUM_RECORD_HIT(805U))
#define __MW_INSTRUM_NODE_806() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(478)))), \
   __MW_INSTRUM_RECORD_HIT(806U))
#define __MW_INSTRUM_NODE_807() \
  (__MW_INSTRUM_RECORD_HIT(807U))
#define __MW_INSTRUM_NODE_808() \
  (__MW_INSTRUM_RECORD_HIT(808U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_480CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_480(...) (__MW_INSTRUM_RECORD_HIT_480CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_480(exp) (__MW_INSTRUM_RECORD_HIT_480CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_485CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_485(...) (__MW_INSTRUM_RECORD_HIT_485CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_485(exp) (__MW_INSTRUM_RECORD_HIT_485CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_478DA_480_485Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_478(...) (__MW_INSTRUM_RECORD_HIT_478DA_480_485Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_478(exp) (__MW_INSTRUM_RECORD_HIT_478DA_480_485Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_522CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_522(...) (__MW_INSTRUM_RECORD_HIT_522CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_522(exp) (__MW_INSTRUM_RECORD_HIT_522CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_527CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_527(...) (__MW_INSTRUM_RECORD_HIT_527CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_527(exp) (__MW_INSTRUM_RECORD_HIT_527CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_520DO_522_527Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_520(...) (__MW_INSTRUM_RECORD_HIT_520DO_522_527Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_520(exp) (__MW_INSTRUM_RECORD_HIT_520DO_522_527Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_551CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_551(...) (__MW_INSTRUM_RECORD_HIT_551CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_551(exp) (__MW_INSTRUM_RECORD_HIT_551CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_556CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_556(...) (__MW_INSTRUM_RECORD_HIT_556CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_556(exp) (__MW_INSTRUM_RECORD_HIT_556CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_549DA_551_556Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_549(...) (__MW_INSTRUM_RECORD_HIT_549DA_551_556Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_549(exp) (__MW_INSTRUM_RECORD_HIT_549DA_551_556Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_573CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_573(...) (__MW_INSTRUM_RECORD_HIT_573CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_573(exp) (__MW_INSTRUM_RECORD_HIT_573CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_578CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_578(...) (__MW_INSTRUM_RECORD_HIT_578CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_578(exp) (__MW_INSTRUM_RECORD_HIT_578CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_571DA_573_578Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_571(...) (__MW_INSTRUM_RECORD_HIT_571DA_573_578Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_571(exp) (__MW_INSTRUM_RECORD_HIT_571DA_573_578Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_620CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_620(...) (__MW_INSTRUM_RECORD_HIT_620CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_620(exp) (__MW_INSTRUM_RECORD_HIT_620CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_625CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_625(...) (__MW_INSTRUM_RECORD_HIT_625CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_625(exp) (__MW_INSTRUM_RECORD_HIT_625CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_618DA_620_625Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_618(...) (__MW_INSTRUM_RECORD_HIT_618DA_620_625Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_618(exp) (__MW_INSTRUM_RECORD_HIT_618DA_620_625Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_668CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_668(...) (__MW_INSTRUM_RECORD_HIT_668CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_668(exp) (__MW_INSTRUM_RECORD_HIT_668CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_673CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_673(...) (__MW_INSTRUM_RECORD_HIT_673CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_673(exp) (__MW_INSTRUM_RECORD_HIT_673CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_666DA_668_673Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_666(...) (__MW_INSTRUM_RECORD_HIT_666DA_668_673Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_666(exp) (__MW_INSTRUM_RECORD_HIT_666DA_668_673Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_680CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_680(...) (__MW_INSTRUM_RECORD_HIT_680CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_680(exp) (__MW_INSTRUM_RECORD_HIT_680CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_685CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_685(...) (__MW_INSTRUM_RECORD_HIT_685CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_685(exp) (__MW_INSTRUM_RECORD_HIT_685CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_678DO_680_685Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_678(...) (__MW_INSTRUM_RECORD_HIT_678DO_680_685Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_678(exp) (__MW_INSTRUM_RECORD_HIT_678DO_680_685Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_725CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_725(...) (__MW_INSTRUM_RECORD_HIT_725CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_725(exp) (__MW_INSTRUM_RECORD_HIT_725CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_730CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_730(...) (__MW_INSTRUM_RECORD_HIT_730CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_730(exp) (__MW_INSTRUM_RECORD_HIT_730CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_723DA_725_730Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_723(...) (__MW_INSTRUM_RECORD_HIT_723DA_725_730Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_723(exp) (__MW_INSTRUM_RECORD_HIT_723DA_725_730Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_762CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_762(...) (__MW_INSTRUM_RECORD_HIT_762CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_762(exp) (__MW_INSTRUM_RECORD_HIT_762CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_767CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_767(...) (__MW_INSTRUM_RECORD_HIT_767CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_767(exp) (__MW_INSTRUM_RECORD_HIT_767CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_760DA_762_767Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_760(...) (__MW_INSTRUM_RECORD_HIT_760DA_762_767Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_760(exp) (__MW_INSTRUM_RECORD_HIT_760DA_762_767Z_RntCWIQhSBMk0JpdeDcPVE(exp))
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
void __MW_INSTRUM_RECORD_HIT_412EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_412() __MW_INSTRUM_RECORD_HIT_412EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_413() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_414XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_414() __MW_INSTRUM_RECORD_HIT_414XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_415EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_415() __MW_INSTRUM_RECORD_HIT_415EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_416DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_416(...) (__MW_INSTRUM_RECORD_HIT_416DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_416(exp) (__MW_INSTRUM_RECORD_HIT_416DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_418IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_418(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_418IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_421DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_421(...) (__MW_INSTRUM_RECORD_HIT_421DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_421(exp) (__MW_INSTRUM_RECORD_HIT_421DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_423IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_423(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_423IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_426XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_426() __MW_INSTRUM_RECORD_HIT_426XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_422() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_427XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_427() __MW_INSTRUM_RECORD_HIT_427XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_417() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_428DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_428(...) (__MW_INSTRUM_RECORD_HIT_428DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_428(exp) (__MW_INSTRUM_RECORD_HIT_428DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_430IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_430(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_430IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_433XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_433() __MW_INSTRUM_RECORD_HIT_433XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_429() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_434XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_434() __MW_INSTRUM_RECORD_HIT_434XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_435EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_435() __MW_INSTRUM_RECORD_HIT_435EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_436XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_436() __MW_INSTRUM_RECORD_HIT_436XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_437EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_437() __MW_INSTRUM_RECORD_HIT_437EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_438DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_438(...) (__MW_INSTRUM_RECORD_HIT_438DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_438(exp) (__MW_INSTRUM_RECORD_HIT_438DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_440DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_440(...) (__MW_INSTRUM_RECORD_HIT_440DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_440(exp) (__MW_INSTRUM_RECORD_HIT_440DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_442IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_442(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_442IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_445() ((void)0)


#define __MW_INSTRUM_NODE_446() ((void)0)


#define __MW_INSTRUM_NODE_439() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_447XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_447() __MW_INSTRUM_RECORD_HIT_447XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_448EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_448() __MW_INSTRUM_RECORD_HIT_448EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_449() ((void)0)


#define __MW_INSTRUM_NODE_450() ((void)0)


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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_453DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_453(...) (__MW_INSTRUM_RECORD_HIT_453DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_453(exp) (__MW_INSTRUM_RECORD_HIT_453DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_459IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_459(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_459IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_458() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_462XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_462() __MW_INSTRUM_RECORD_HIT_462XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_463EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_463() __MW_INSTRUM_RECORD_HIT_463EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_464XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_464() __MW_INSTRUM_RECORD_HIT_464XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_465EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_465() __MW_INSTRUM_RECORD_HIT_465EZ_RntCWIQhSBMk0JpdeDcPVE()

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

#define __MW_INSTRUM_NODE_468() ((void)0)


#define __MW_INSTRUM_NODE_469() ((void)0)


#define __MW_INSTRUM_NODE_470() ((void)0)


#define __MW_INSTRUM_NODE_471() ((void)0)


#define __MW_INSTRUM_NODE_472() ((void)0)


#define __MW_INSTRUM_NODE_473() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_474XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_474() __MW_INSTRUM_RECORD_HIT_474XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_475EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_475() __MW_INSTRUM_RECORD_HIT_475EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_476DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_476(...) (__MW_INSTRUM_RECORD_HIT_476DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_476(exp) (__MW_INSTRUM_RECORD_HIT_476DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_482IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_482(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_482IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_487IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_487(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_487IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_490XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_490() __MW_INSTRUM_RECORD_HIT_490XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_491DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_491(...) (__MW_INSTRUM_RECORD_HIT_491DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_491(exp) (__MW_INSTRUM_RECORD_HIT_491DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_493IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_493(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_493IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_496DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_496(...) (__MW_INSTRUM_RECORD_HIT_496DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_496(exp) (__MW_INSTRUM_RECORD_HIT_496DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_498IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_498(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_498IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_501DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_501(...) (__MW_INSTRUM_RECORD_HIT_501DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_501(exp) (__MW_INSTRUM_RECORD_HIT_501DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_503IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_503(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_503IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_506XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_506() __MW_INSTRUM_RECORD_HIT_506XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_507() ((void)0)


#define __MW_INSTRUM_NODE_508() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_509XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_509() __MW_INSTRUM_RECORD_HIT_509XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_510EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_510() __MW_INSTRUM_RECORD_HIT_510EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_511DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_511(...) (__MW_INSTRUM_RECORD_HIT_511DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_511(exp) (__MW_INSTRUM_RECORD_HIT_511DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_513() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_514XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_514() __MW_INSTRUM_RECORD_HIT_514XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_515EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_515() __MW_INSTRUM_RECORD_HIT_515EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_516DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_516(...) (__MW_INSTRUM_RECORD_HIT_516DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_516(exp) (__MW_INSTRUM_RECORD_HIT_516DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_518XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_518() __MW_INSTRUM_RECORD_HIT_518XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_519EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_519() __MW_INSTRUM_RECORD_HIT_519EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_524IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_524(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_524IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_529IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_529(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_529IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_532() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_533DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_533(...) (__MW_INSTRUM_RECORD_HIT_533DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_533(exp) (__MW_INSTRUM_RECORD_HIT_533DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_535IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_535(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_535IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_538DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_538(...) (__MW_INSTRUM_RECORD_HIT_538DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_538(exp) (__MW_INSTRUM_RECORD_HIT_538DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_540IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_540(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_540IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_543() ((void)0)


#define __MW_INSTRUM_NODE_544() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_545XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_545() __MW_INSTRUM_RECORD_HIT_545XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_546() ((void)0)


#define __MW_INSTRUM_NODE_547() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_548XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_548() __MW_INSTRUM_RECORD_HIT_548XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_553IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_553(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_553IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_558IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_558(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_558IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_561DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_561(...) (__MW_INSTRUM_RECORD_HIT_561DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_561(exp) (__MW_INSTRUM_RECORD_HIT_561DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_563IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_563(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_563IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_566() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_567XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_567() __MW_INSTRUM_RECORD_HIT_567XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_568() ((void)0)


#define __MW_INSTRUM_NODE_569() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_570XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_570() __MW_INSTRUM_RECORD_HIT_570XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_575IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_575(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_575IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_580IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_580(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_580IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_583DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_583(...) (__MW_INSTRUM_RECORD_HIT_583DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_583(exp) (__MW_INSTRUM_RECORD_HIT_583DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_585IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_585(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_585IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_588() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_589XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_589() __MW_INSTRUM_RECORD_HIT_589XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_590DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_590(...) (__MW_INSTRUM_RECORD_HIT_590DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_590(exp) (__MW_INSTRUM_RECORD_HIT_590DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_592IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_592(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_592IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_595() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_596XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_596() __MW_INSTRUM_RECORD_HIT_596XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_597() ((void)0)


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
int __MW_INSTRUM_RECORD_HIT_602DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_602(...) (__MW_INSTRUM_RECORD_HIT_602DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_602(exp) (__MW_INSTRUM_RECORD_HIT_602DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_604IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_604(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_604IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_607DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_607(...) (__MW_INSTRUM_RECORD_HIT_607DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_607(exp) (__MW_INSTRUM_RECORD_HIT_607DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_609IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_609(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_609IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_612() ((void)0)


#define __MW_INSTRUM_NODE_613() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_614XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_614() __MW_INSTRUM_RECORD_HIT_614XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_615() ((void)0)


#define __MW_INSTRUM_NODE_616() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_617XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_617() __MW_INSTRUM_RECORD_HIT_617XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_622IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_622(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_622IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_627IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_627(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_627IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_630DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_630(...) (__MW_INSTRUM_RECORD_HIT_630DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_630(exp) (__MW_INSTRUM_RECORD_HIT_630DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_632IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_632(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_632IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_635() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_636XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_636() __MW_INSTRUM_RECORD_HIT_636XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_637() ((void)0)


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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_643DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_643(...) (__MW_INSTRUM_RECORD_HIT_643DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_643(exp) (__MW_INSTRUM_RECORD_HIT_643DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_645IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_645(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_645IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_648() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_649XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_649() __MW_INSTRUM_RECORD_HIT_649XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_650() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_651XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_651() __MW_INSTRUM_RECORD_HIT_651XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_652EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_652() __MW_INSTRUM_RECORD_HIT_652EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_653DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_653(...) (__MW_INSTRUM_RECORD_HIT_653DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_653(exp) (__MW_INSTRUM_RECORD_HIT_653DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_654() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_655DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_655() __MW_INSTRUM_RECORD_HIT_655DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_656DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_656() __MW_INSTRUM_RECORD_HIT_656DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_657DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_657() __MW_INSTRUM_RECORD_HIT_657DZ_RntCWIQhSBMk0JpdeDcPVE()

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
void __MW_INSTRUM_RECORD_HIT_659XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_659() __MW_INSTRUM_RECORD_HIT_659XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_660EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_660() __MW_INSTRUM_RECORD_HIT_660EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_661DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_661(...) (__MW_INSTRUM_RECORD_HIT_661DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_661(exp) (__MW_INSTRUM_RECORD_HIT_661DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_663IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_663(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_663IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_670IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_670(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_670IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_675IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_675(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_675IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_682IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_682(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_682IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_687IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_687(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_687IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_690DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_690() __MW_INSTRUM_RECORD_HIT_690DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_691() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_692DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_692() __MW_INSTRUM_RECORD_HIT_692DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_693DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_693() __MW_INSTRUM_RECORD_HIT_693DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_694DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_694() __MW_INSTRUM_RECORD_HIT_694DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_695() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_696DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_696() __MW_INSTRUM_RECORD_HIT_696DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_697() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_698DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_698() __MW_INSTRUM_RECORD_HIT_698DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_699DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_699(...) (__MW_INSTRUM_RECORD_HIT_699DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_699(exp) (__MW_INSTRUM_RECORD_HIT_699DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_701IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_701(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_701IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_704XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_704() __MW_INSTRUM_RECORD_HIT_704XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_705DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_705(...) (__MW_INSTRUM_RECORD_HIT_705DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_705(exp) (__MW_INSTRUM_RECORD_HIT_705DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_707IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_707(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_707IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_710DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_710(...) (__MW_INSTRUM_RECORD_HIT_710DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_710(exp) (__MW_INSTRUM_RECORD_HIT_710DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_712IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_712(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_712IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_715() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_716DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_716(...) (__MW_INSTRUM_RECORD_HIT_716DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_716(exp) (__MW_INSTRUM_RECORD_HIT_716DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_718IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_718(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_718IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_721DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_721(...) (__MW_INSTRUM_RECORD_HIT_721DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_721(exp) (__MW_INSTRUM_RECORD_HIT_721DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_727IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_727(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_727IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_732IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_732(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_732IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_735() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_736DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_736(...) (__MW_INSTRUM_RECORD_HIT_736DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_736(exp) (__MW_INSTRUM_RECORD_HIT_736DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_738IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_738(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_738IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_741DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_741(...) (__MW_INSTRUM_RECORD_HIT_741DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_741(exp) (__MW_INSTRUM_RECORD_HIT_741DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_743IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_743(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_743IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_746() ((void)0)


#define __MW_INSTRUM_NODE_747() ((void)0)


#define __MW_INSTRUM_NODE_748() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_749XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_749() __MW_INSTRUM_RECORD_HIT_749XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_750DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_750(...) (__MW_INSTRUM_RECORD_HIT_750DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_750(exp) (__MW_INSTRUM_RECORD_HIT_750DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_752IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_752(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_752IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_755DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_755(...) (__MW_INSTRUM_RECORD_HIT_755DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_755(exp) (__MW_INSTRUM_RECORD_HIT_755DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_757IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_757(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_757IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_764IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_764(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_764IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_769() ((void)0)


#define __MW_INSTRUM_NODE_770() ((void)0)


#define __MW_INSTRUM_NODE_771() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_772XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_772() __MW_INSTRUM_RECORD_HIT_772XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_773DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_773(...) (__MW_INSTRUM_RECORD_HIT_773DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_773(exp) (__MW_INSTRUM_RECORD_HIT_773DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_775IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_775(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_775IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_778DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_778(...) (__MW_INSTRUM_RECORD_HIT_778DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_778(exp) (__MW_INSTRUM_RECORD_HIT_778DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_780() ((void)0)


#define __MW_INSTRUM_NODE_781() ((void)0)


#define __MW_INSTRUM_NODE_782() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_783XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_783() __MW_INSTRUM_RECORD_HIT_783XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_784EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_784() __MW_INSTRUM_RECORD_HIT_784EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_785DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_785(...) (__MW_INSTRUM_RECORD_HIT_785DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_785(exp) (__MW_INSTRUM_RECORD_HIT_785DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_787IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_787(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_787IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_790DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_790(...) (__MW_INSTRUM_RECORD_HIT_790DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_790(exp) (__MW_INSTRUM_RECORD_HIT_790DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_792IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_792(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_792IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_795DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_795(...) (__MW_INSTRUM_RECORD_HIT_795DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_795(exp) (__MW_INSTRUM_RECORD_HIT_795DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_797IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_797(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_797IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_800() ((void)0)


#define __MW_INSTRUM_NODE_801() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_802XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_802() __MW_INSTRUM_RECORD_HIT_802XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_803EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_803() __MW_INSTRUM_RECORD_HIT_803EZ_RntCWIQhSBMk0JpdeDcPVE()

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
#line 70
typedef 
#line 62
union { 
struct { 
uint16_T AN_01; 
uint16_T AN_02; 
uint16_T AN_03; 
uint16_T AN_04; 
}; 
uint8_T Message[8]; 
} TPDO_test; 
#line 16 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\CANOpenSlaveAPT.c"
RPDO_ID1C1 RPDO01_APT; 
RPDO_ID1C2 RPDO02_APT; 
RPDO_ID1C3 RPDO03_APT; 
TPDO_ID1A4 TPDO01_APT; 
TPDO_test TPDO05; 



uint16_T gTimCnt_APT = (0); 


CANOpenSlave_CONFIG_APT gCANOPENConfig_APT; 



TPDO_CONFIG_APT gTPDOConfig_APT[1]; 

uint8_T gTPDONr_APT = (1); 




RPDO_CONFIG_APT gRPDOConfig_APT[3]; 



CAN_MSG_APT gTxSDO_APT; 


CAN_MSG_APT gTxSDOw_APT; 


CAN_MSG_APT gTxEMGY_APT; 



void CANOpenHW_SendMessage_APT(CAN_MSG_APT *pTransmitBuf, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_20(); __MW_INSTRUM_NODE_412(); 
__MW_INSTRUM_NODE_413(), memcpy(txData, pTransmitBuf->BUF, pTransmitBuf->LEN); 
*txID = pTransmitBuf->ID; 
*txDLC = pTransmitBuf->LEN; __MW_INSTRUM_NODE_414(); 
} 



uint8_T CANOpenHW_IsTimeExpired_APT(uint16_T timestamp) 
{ int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_21(); __MW_INSTRUM_NODE_415(); { 
if (__MW_INSTRUM_NODE_416(((__mw_tmp_for_expr_1 = gTimCnt_APT), ((__mw_tmp_for_expr_2 = timestamp), (__MW_INSTRUM_NODE_418(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ { 
if (__MW_INSTRUM_NODE_421(((__mw_tmp_for_expr_3 = gTimCnt_APT - timestamp), (__MW_INSTRUM_NODE_423(__mw_tmp_for_expr_3, 0x8000), (__mw_tmp_for_expr_3 < 0x8000))))) 
{ __MW_INSTRUM_NODE_426(); return 1; } else 

{ __MW_INSTRUM_NODE_427(); return 0; }  } 
} else 

{ { 
if (__MW_INSTRUM_NODE_428(((__mw_tmp_for_expr_4 = timestamp - gTimCnt_APT), (__MW_INSTRUM_NODE_430(__mw_tmp_for_expr_4, 0x8000), (__mw_tmp_for_expr_4 > 0x8000))))) 
{ __MW_INSTRUM_NODE_433(); return 1; } else 

{ __MW_INSTRUM_NODE_434(); return 0; }  } 
}  } 
} 


uint16_T CANOpenHW_GetTime_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_22(); __MW_INSTRUM_NODE_435(); 
{ uint16_T __mw_tmp_for_return = gTimCnt_APT; __MW_INSTRUM_NODE_436(); return __mw_tmp_for_return; } 
} 
#line 91
void Prepare_TPDOs_APT(void) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_23(); __MW_INSTRUM_NODE_437(); { 
uint8_T i; 
i = (0); { 
while (__MW_INSTRUM_NODE_438(i < 1)) 
{ { 
if (__MW_INSTRUM_NODE_440(((__mw_tmp_for_expr_1 = (((gTPDOConfig_APT)[i]).CAN).ID), (__MW_INSTRUM_NODE_442(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 != 0))))) 
{ 

__MW_INSTRUM_NODE_445(), memcpy(&(((((gTPDOConfig_APT)[i]).CAN).BUF)[0]), ((gTPDOConfig_APT)[i]).pData, (((gTPDOConfig_APT)[i]).CAN).LEN); 


((gTPDOConfig_APT)[i]).event_timestamp = (__MW_INSTRUM_NODE_446(), CANOpenHW_GetTime_APT()); 
#line 110
}  } 
i++; 
}  } 
gTPDONr_APT = (1); } __MW_INSTRUM_NODE_447(); 
} 



void TransmitPDO_APT(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_24(); __MW_INSTRUM_NODE_448(); 
#line 125
((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp = (__MW_INSTRUM_NODE_449(), CANOpenHW_GetTime_APT()) + ((gTPDOConfig_APT)[gTPDONr_APT]).event_time; 

__MW_INSTRUM_NODE_450(), CANOpenHW_SendMessage_APT(&(((gTPDOConfig_APT)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_451(); 
} 




void CANOpenSlave_Init_APT(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_25(); __MW_INSTRUM_NODE_452(); { 
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
while (__MW_INSTRUM_NODE_453(i < 3)) 
{ 
((gRPDOConfig_APT)[i]).ID = (0); 
i++; 
}  } 


gTPDONr_APT = (0xff); } __MW_INSTRUM_NODE_455(); 
} 




void CANOpenSlave_InitRPDO_APT(uint8_T PDO_NR, uint16_T CAN_ID, uint8_T len, uint8_T *dat) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_26(); __MW_INSTRUM_NODE_456(); 
PDO_NR--; 
((gRPDOConfig_APT)[PDO_NR]).LEN = len; 
((gRPDOConfig_APT)[PDO_NR]).pData = dat; { 
if (__MW_INSTRUM_NODE_457(((__mw_tmp_for_expr_1 = CAN_ID), (__MW_INSTRUM_NODE_459(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0))))) 
{ 
((gRPDOConfig_APT)[PDO_NR]).ID = (0x200 + 0x100 * (uint16_T)PDO_NR) + gCANOPENConfig_APT.Node_ID; 
} else 

{ 
((gRPDOConfig_APT)[PDO_NR]).ID = CAN_ID; 
}  } __MW_INSTRUM_NODE_462(); 
} 
#line 199
void CANOpenSlave_InitTPDO_APT(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_27(); __MW_INSTRUM_NODE_463(); 
PDO_NR--; 
(((gTPDOConfig_APT)[PDO_NR]).CAN).ID = CAN_ID; 
(((gTPDOConfig_APT)[PDO_NR]).CAN).LEN = len; 
((gTPDOConfig_APT)[PDO_NR]).pData = pDat; 

((gTPDOConfig_APT)[PDO_NR]).event_time = event_time; __MW_INSTRUM_NODE_464(); 




} 




void CANOpenSlave_ResetApplication_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_28(); __MW_INSTRUM_NODE_465(); 
; __MW_INSTRUM_NODE_466(); 
} 




void CANOpenSlave_ResetCommunication_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_29(); __MW_INSTRUM_NODE_467(); 
__MW_INSTRUM_NODE_468(), CANOpenSlave_Init_APT(500, 0x6, 6000L); 



__MW_INSTRUM_NODE_469(), CANOpenSlave_InitTPDO_APT(1, 0, 10, 0, 8, &(TPDO01_APT.Message)); 
__MW_INSTRUM_NODE_470(), CANOpenSlave_InitTPDO(2, 0x290, 1, 0, 8, &(TPDO05.Message)); 
#line 237
__MW_INSTRUM_NODE_471(), CANOpenSlave_InitRPDO_APT(1, 0x1c1, 8, &(RPDO01_APT.Message)); 
__MW_INSTRUM_NODE_472(), CANOpenSlave_InitRPDO_APT(2, 0x1c2, 8, &(RPDO02_APT.Message)); 
__MW_INSTRUM_NODE_473(), CANOpenSlave_InitRPDO_APT(3, 0x1c3, 8, &(RPDO03_APT.Message)); __MW_INSTRUM_NODE_474(); 


} 
#line 250
const uint8_T SDOResponseTable_APT[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((6000L >> 0) & (0xff)), ((6000L >> 8) & (0xff)), ((6000L >> 16) & (0xff)), ((6000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 432
uint8_T Search_OD_APT(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_30(); __MW_INSTRUM_NODE_475(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable_APT)[0]); { 
while (__MW_INSTRUM_NODE_476(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_478(__MW_INSTRUM_NODE_480(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_482(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_485(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_487(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_490(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_491(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_493(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_496(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_498(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_501(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_503(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_506(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_507(); 
i++; 
}  } __MW_INSTRUM_NODE_508(); __MW_INSTRUM_NODE_509(); 
return 0xff; } 
} 
#line 528
void Send_SDO_Abort_APT(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_31(); __MW_INSTRUM_NODE_510(); { 
uint8_T i; 
(gTxSDO_APT.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_511(i < 4); i++) 
{ 
(gTxSDO_APT.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_513(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_514(); 
} 


void CopyConstToData_APT(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_32(); __MW_INSTRUM_NODE_515(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_516(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_518(); 
} 



uint8_T Handle_SDO_Request_APT(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_33(); __MW_INSTRUM_NODE_519(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
#line 568
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO_APT.BUF)[1] = pData[1]; 
(gTxSDO_APT.BUF)[2] = pData[2]; 
(gTxSDO_APT.BUF)[3] = pData[3]; { 


if (__MW_INSTRUM_NODE_520(__MW_INSTRUM_NODE_522(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_524(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_527(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_529(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 640
found = (__MW_INSTRUM_NODE_532(), Search_OD_APT(index, subindex)); { 

if (__MW_INSTRUM_NODE_533(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_535(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_538(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_540(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_543(), memcpy(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8]), 8); 
__MW_INSTRUM_NODE_544(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_545(); 
return 1; 
}  } __MW_INSTRUM_NODE_546(); 

__MW_INSTRUM_NODE_547(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_548(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_549(__MW_INSTRUM_NODE_551(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_553(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_556(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_558(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_561(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_563(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_566(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_567(); 
return 1; 
}  } __MW_INSTRUM_NODE_568(); 

__MW_INSTRUM_NODE_569(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_570(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_571(__MW_INSTRUM_NODE_573(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_575(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_578(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_580(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_583(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_585(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4b); 
(gTxSDO_APT.BUF)[4] = (uint8_T)(gCANOPENConfig_APT.heartbeat_time); 
(gTxSDO_APT.BUF)[5] = (uint8_T)((gCANOPENConfig_APT.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_588(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_589(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_590(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_592(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig_APT.heartbeat_time = pData[5]; 
gCANOPENConfig_APT.heartbeat_time = ((gCANOPENConfig_APT.heartbeat_time) << 8) + pData[4]; 
(gTxSDO_APT.BUF)[0] = (0x60); 

(gTxSDO_APT.BUF)[4] = (0); 
(gTxSDO_APT.BUF)[5] = (0); 
(gTxSDO_APT.BUF)[6] = (0); 
(gTxSDO_APT.BUF)[7] = (0); 
__MW_INSTRUM_NODE_595(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_596(); 
return 1; 
}  } __MW_INSTRUM_NODE_597(); 
__MW_INSTRUM_NODE_598(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_599(); 
return 0; 
}  } __MW_INSTRUM_NODE_600(); 


found = (__MW_INSTRUM_NODE_601(), Search_OD_APT(index, subindex)); { 
if (__MW_INSTRUM_NODE_602(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_604(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_607(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_609(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_612(), CopyConstToData_APT(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8])); 
__MW_INSTRUM_NODE_613(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_614(); 
return 1; 
}  } __MW_INSTRUM_NODE_615(); 

__MW_INSTRUM_NODE_616(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_617(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_618(__MW_INSTRUM_NODE_620(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_622(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_625(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_627(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_630(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_632(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_635(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_636(); 
return 1; 
}  } __MW_INSTRUM_NODE_637(); 

__MW_INSTRUM_NODE_638(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_639(); 
return 0; 
}  } __MW_INSTRUM_NODE_640(); 
__MW_INSTRUM_NODE_641(), Send_SDO_Abort_APT(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_642(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_643(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_645(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_648(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_649(); 
return 0; 
}  } __MW_INSTRUM_NODE_650(); __MW_INSTRUM_NODE_651(); 
return 1; } 
} 

void SDO_Write_APT(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_34(); __MW_INSTRUM_NODE_652(); { 
char k; 
gTxSDOw_APT.ID = 0x600 + Node_ID; 
gTxSDOw_APT.LEN = (8); 
(gTxSDOw_APT.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw_APT.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw_APT.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw_APT.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_653(k < 4); k++) 
{ (gTxSDOw_APT.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_655(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_656(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_657(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_658(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw_APT.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_659(); 




} 
#line 781
void CANOpenSlave_ProcessStackAsyncRx_APT(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_35(); __MW_INSTRUM_NODE_660(); { 
uint8_T i; 
gTimCnt_APT++; 
*txDLC = (0); { 



if (__MW_INSTRUM_NODE_661(((__mw_tmp_for_expr_1 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_2 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_663(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 != __mw_tmp_for_expr_2)))))) 
{ 
gRxCAN_APT = &((can_rx_queue_APT.msg)[can_rx_queue_APT.out]); { 




if (__MW_INSTRUM_NODE_666(__MW_INSTRUM_NODE_668(((__mw_tmp_for_expr_3 = gRxCAN_APT->ID), (__MW_INSTRUM_NODE_670(__mw_tmp_for_expr_3, 0), (__mw_tmp_for_expr_3 == 0)))) && __MW_INSTRUM_NODE_673(((__mw_tmp_for_expr_4 = gRxCAN_APT->LEN), (__MW_INSTRUM_NODE_675(__mw_tmp_for_expr_4, 3), (__mw_tmp_for_expr_4 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_678(__MW_INSTRUM_NODE_680(((__mw_tmp_for_expr_5 = (gRxCAN_APT->BUF)[1]), ((__mw_tmp_for_expr_6 = gCANOPENConfig_APT.Node_ID), (__MW_INSTRUM_NODE_682(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6))))) || __MW_INSTRUM_NODE_685(((__mw_tmp_for_expr_7 = (gRxCAN_APT->BUF)[1]), (__MW_INSTRUM_NODE_687(__mw_tmp_for_expr_7, 0), (__mw_tmp_for_expr_7 == 0)))))) 
{ { 
switch ((gRxCAN_APT->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_690(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_691(), Prepare_TPDOs_APT(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_692(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_693(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_694(); 
__MW_INSTRUM_NODE_695(), CANOpenSlave_ResetApplication_APT(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_696(); 
__MW_INSTRUM_NODE_697(), CANOpenSlave_ResetCommunication_APT(); 
break; 
default:  __MW_INSTRUM_NODE_698(); 
break; 
}  } 

can_rx_queue_APT.out = __MW_INSTRUM_NODE_699(((__mw_tmp_for_expr_8 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_9 = 8 - 1), (__MW_INSTRUM_NODE_701(__mw_tmp_for_expr_8, __mw_tmp_for_expr_9), (__mw_tmp_for_expr_8 < __mw_tmp_for_expr_9))))) ? (can_rx_queue_APT.out + 1) : 0; __MW_INSTRUM_NODE_704(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_705(((__mw_tmp_for_expr_10 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_707(__mw_tmp_for_expr_10, 0x4), (__mw_tmp_for_expr_10 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_710(((__mw_tmp_for_expr_11 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_12 = gCANOPENConfig_APT.Node_ID + 0x600), (__MW_INSTRUM_NODE_712(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 == __mw_tmp_for_expr_12)))))) 
{ 
i = (__MW_INSTRUM_NODE_715(), Handle_SDO_Request_APT(&((gRxCAN_APT->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_716(((__mw_tmp_for_expr_13 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_718(__mw_tmp_for_expr_13, 0x5), (__mw_tmp_for_expr_13 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_721(i < 3)) 
{ { 
if (__MW_INSTRUM_NODE_723(__MW_INSTRUM_NODE_725(((__mw_tmp_for_expr_14 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_15 = ((gRPDOConfig_APT)[i]).ID), (__MW_INSTRUM_NODE_727(__mw_tmp_for_expr_14, __mw_tmp_for_expr_15), (__mw_tmp_for_expr_14 == __mw_tmp_for_expr_15))))) && __MW_INSTRUM_NODE_730(((__mw_tmp_for_expr_16 = gRxCAN_APT->LEN), ((__mw_tmp_for_expr_17 = ((gRPDOConfig_APT)[i]).LEN), (__MW_INSTRUM_NODE_732(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))))) 
{ 
__MW_INSTRUM_NODE_735(), memcpy(((gRPDOConfig_APT)[i]).pData, &((gRxCAN_APT->BUF)[0]), ((gRPDOConfig_APT)[i]).LEN); 
i = (3); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue_APT.out = __MW_INSTRUM_NODE_736(((__mw_tmp_for_expr_18 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_19 = 8 - 1), (__MW_INSTRUM_NODE_738(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 < __mw_tmp_for_expr_19))))) ? (can_rx_queue_APT.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_741(((__mw_tmp_for_expr_20 = gTPDONr_APT), (__MW_INSTRUM_NODE_743(__mw_tmp_for_expr_20, 0xff), (__mw_tmp_for_expr_20 == 0xff))))) 
{ 

gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_746(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 

__MW_INSTRUM_NODE_747(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 

((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_748(), Prepare_TPDOs_APT(); 




gTPDONr_APT = (1); __MW_INSTRUM_NODE_749(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_750(((__mw_tmp_for_expr_21 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_752(__mw_tmp_for_expr_21, 0x5), (__mw_tmp_for_expr_21 == 0x5))))) 
{ 
gTPDONr_APT++; { 
if (__MW_INSTRUM_NODE_755(((__mw_tmp_for_expr_22 = gTPDONr_APT), (__MW_INSTRUM_NODE_757(__mw_tmp_for_expr_22, 1), (__mw_tmp_for_expr_22 >= 1))))) 
{ 
gTPDONr_APT = (0); 
}  } { 

if (__MW_INSTRUM_NODE_760(__MW_INSTRUM_NODE_762(((__mw_tmp_for_expr_23 = ((gTPDOConfig_APT)[gTPDONr_APT]).event_time), (__MW_INSTRUM_NODE_764(__mw_tmp_for_expr_23, 0), (__mw_tmp_for_expr_23 != 0)))) && (__MW_INSTRUM_NODE_767((__MW_INSTRUM_NODE_769(), CANOpenHW_IsTimeExpired_APT(((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_770(), memcpy((((gTPDOConfig_APT)[gTPDONr_APT]).CAN).BUF, ((gTPDOConfig_APT)[gTPDONr_APT]).pData, (((gTPDOConfig_APT)[gTPDONr_APT]).CAN).LEN); 
__MW_INSTRUM_NODE_771(), TransmitPDO_APT(gTPDONr_APT, txID, txDLC, txData); __MW_INSTRUM_NODE_772(); 
return; 
}  } 
#line 934
}  } { 



if (__MW_INSTRUM_NODE_773(((__mw_tmp_for_expr_24 = gCANOPENConfig_APT.heartbeat_time), (__MW_INSTRUM_NODE_775(__mw_tmp_for_expr_24, 0), (__mw_tmp_for_expr_24 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_778((__MW_INSTRUM_NODE_780(), CANOpenHW_IsTimeExpired_APT(gCANOPENConfig_APT.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_781(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_782(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_783(); 
} 

void CANOpenSlave_ProcessStack_APT(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_36(); __MW_INSTRUM_NODE_784(); { 
if (__MW_INSTRUM_NODE_785(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_787(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_790(((__mw_tmp_for_expr_2 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_792(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue_APT.in + 1) : 0; { 
if (__MW_INSTRUM_NODE_795(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_797(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG_APT *d = &((can_rx_queue_APT.msg)[can_rx_queue_APT.in]); 
__MW_INSTRUM_NODE_800(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue_APT.in = n; 
}  } 
#line 966
}  } 
__MW_INSTRUM_NODE_801(), CANOpenSlave_ProcessStackAsyncRx_APT(txID, txDLC, txData); __MW_INSTRUM_NODE_802(); 
} 

void CANOpenSlave_GetRPDO_APT(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_37(); __MW_INSTRUM_NODE_803(); 
__MW_INSTRUM_NODE_804(), memcpy(data, ((gRPDOConfig_APT)[no]).pData, ((gRPDOConfig_APT)[no]).LEN); __MW_INSTRUM_NODE_805(); 
} 
void CANOpenSlave_SetTPDO_APT(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_38(); __MW_INSTRUM_NODE_806(); 
__MW_INSTRUM_NODE_807(), memcpy(((gTPDOConfig_APT)[no]).pData, data, 8); __MW_INSTRUM_NODE_808(); 
} 
