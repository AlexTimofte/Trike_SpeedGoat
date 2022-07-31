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

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_473 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_473() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_473 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_475(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(475U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(476U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_475(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(475U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(476U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_480(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(480U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(481U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_480(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(480U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(481U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_473(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(473U), __MW_INSTRUM_RECORD_COMBINATION_HIT_473(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(474U), __MW_INSTRUM_RECORD_COMBINATION_HIT_473(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_473(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(473U), __MW_INSTRUM_RECORD_COMBINATION_HIT_473(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(474U), __MW_INSTRUM_RECORD_COMBINATION_HIT_473(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_515 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_515() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_515 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_517(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(517U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(518U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_517(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(517U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(518U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_522(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(522U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(523U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_522(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(522U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(523U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_515(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(515U), __MW_INSTRUM_RECORD_COMBINATION_HIT_515(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(516U), __MW_INSTRUM_RECORD_COMBINATION_HIT_515(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_515(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(515U), __MW_INSTRUM_RECORD_COMBINATION_HIT_515(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(516U), __MW_INSTRUM_RECORD_COMBINATION_HIT_515(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_544 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_544() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_544 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_546(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(546U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(547U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_546(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(546U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(547U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_551(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(551U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(552U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_551(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(551U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(552U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_544(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(544U), __MW_INSTRUM_RECORD_COMBINATION_HIT_544(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(545U), __MW_INSTRUM_RECORD_COMBINATION_HIT_544(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_544(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(544U), __MW_INSTRUM_RECORD_COMBINATION_HIT_544(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(545U), __MW_INSTRUM_RECORD_COMBINATION_HIT_544(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_566 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_566() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_566 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_568(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(568U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(569U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_568(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(568U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(569U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_573(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(573U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(574U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_573(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(573U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(574U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_566(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(566U), __MW_INSTRUM_RECORD_COMBINATION_HIT_566(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(567U), __MW_INSTRUM_RECORD_COMBINATION_HIT_566(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_566(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(566U), __MW_INSTRUM_RECORD_COMBINATION_HIT_566(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(567U), __MW_INSTRUM_RECORD_COMBINATION_HIT_566(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_613 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_613() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_613 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_615(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(615U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(616U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_615(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(615U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(616U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_620(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(620U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(621U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_620(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(620U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(621U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_613(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(613U), __MW_INSTRUM_RECORD_COMBINATION_HIT_613(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(614U), __MW_INSTRUM_RECORD_COMBINATION_HIT_613(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_613(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(613U), __MW_INSTRUM_RECORD_COMBINATION_HIT_613(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(614U), __MW_INSTRUM_RECORD_COMBINATION_HIT_613(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_661 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_661() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_661 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_663(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(663U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(664U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_663(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(663U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(664U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_668(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(668U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(669U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_668(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(668U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(669U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_661(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(661U), __MW_INSTRUM_RECORD_COMBINATION_HIT_661(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(662U), __MW_INSTRUM_RECORD_COMBINATION_HIT_661(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_661(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(661U), __MW_INSTRUM_RECORD_COMBINATION_HIT_661(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(662U), __MW_INSTRUM_RECORD_COMBINATION_HIT_661(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_673 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_673() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_673 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_675(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(675U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(676U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_675(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(675U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(676U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_680(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(680U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(681U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_680(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(680U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(681U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_673(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(673U), __MW_INSTRUM_RECORD_COMBINATION_HIT_673(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(674U), __MW_INSTRUM_RECORD_COMBINATION_HIT_673(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_673(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(673U), __MW_INSTRUM_RECORD_COMBINATION_HIT_673(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(674U), __MW_INSTRUM_RECORD_COMBINATION_HIT_673(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_718 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_718() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_718 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_720(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(720U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(721U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_720(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(720U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(721U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_725(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(725U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(726U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_725(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(725U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(726U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_718(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(718U), __MW_INSTRUM_RECORD_COMBINATION_HIT_718(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(719U), __MW_INSTRUM_RECORD_COMBINATION_HIT_718(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_718(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(718U), __MW_INSTRUM_RECORD_COMBINATION_HIT_718(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(719U), __MW_INSTRUM_RECORD_COMBINATION_HIT_718(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_755 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_755() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_755 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_757(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(757U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(758U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_757(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(757U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(758U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_762(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(762U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(763U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_762(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(762U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(763U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_755(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(755U), __MW_INSTRUM_RECORD_COMBINATION_HIT_755(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(756U), __MW_INSTRUM_RECORD_COMBINATION_HIT_755(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_755(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(755U), __MW_INSTRUM_RECORD_COMBINATION_HIT_755(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(756U), __MW_INSTRUM_RECORD_COMBINATION_HIT_755(), 0) : 0))
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
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_473 = 0; 
#define __MW_INSTRUM_FCN_ENTER_31() 
#define __MW_INSTRUM_FCN_ENTER_32() 
#define __MW_INSTRUM_FCN_ENTER_33() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_515 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_544 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_566 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_613 = 0; 
#define __MW_INSTRUM_FCN_ENTER_34() 
#define __MW_INSTRUM_FCN_ENTER_35() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_661 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_673 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_718 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_755 = 0; 
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

#define __MW_INSTRUM_NODE_408() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(408U))
#define __MW_INSTRUM_NODE_409() \
  (__MW_INSTRUM_RECORD_HIT(409U))
#define __MW_INSTRUM_NODE_410() \
  (__MW_INSTRUM_RECORD_HIT(410U))
#define __MW_INSTRUM_NODE_411() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(411U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_412(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(412U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(413U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_412(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(412U), 1) : (__MW_INSTRUM_RECORD_HIT(413U), 0))
#endif
#define __MW_INSTRUM_NODE_414(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(414U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(415U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(416U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_417(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(417U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(418U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_417(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(417U), 1) : (__MW_INSTRUM_RECORD_HIT(418U), 0))
#endif
#define __MW_INSTRUM_NODE_419(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(419U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(420U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(421U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_422() \
  (__MW_INSTRUM_RECORD_HIT(422U))
#define __MW_INSTRUM_NODE_418() \
  (__MW_INSTRUM_RECORD_HIT(418U))
#define __MW_INSTRUM_NODE_423() \
  (__MW_INSTRUM_RECORD_HIT(423U))
#define __MW_INSTRUM_NODE_413() \
  (__MW_INSTRUM_RECORD_HIT(413U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_424(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(424U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(425U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_424(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(424U), 1) : (__MW_INSTRUM_RECORD_HIT(425U), 0))
#endif
#define __MW_INSTRUM_NODE_426(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(426U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(427U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(428U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_429() \
  (__MW_INSTRUM_RECORD_HIT(429U))
#define __MW_INSTRUM_NODE_425() \
  (__MW_INSTRUM_RECORD_HIT(425U))
#define __MW_INSTRUM_NODE_430() \
  (__MW_INSTRUM_RECORD_HIT(430U))
#define __MW_INSTRUM_NODE_431() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(431U))
#define __MW_INSTRUM_NODE_432() \
  (__MW_INSTRUM_RECORD_HIT(432U))
#define __MW_INSTRUM_NODE_433() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(433U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_434(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(434U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(435U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_434(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(434U), 1) : (__MW_INSTRUM_RECORD_HIT(435U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_436(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(436U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(437U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_436(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(436U), 1) : (__MW_INSTRUM_RECORD_HIT(437U), 0))
#endif
#define __MW_INSTRUM_NODE_438(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(438U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(439U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(440U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_441() \
  (__MW_INSTRUM_RECORD_HIT(441U))
#define __MW_INSTRUM_NODE_442() \
  (__MW_INSTRUM_RECORD_HIT(442U))
#define __MW_INSTRUM_NODE_435() \
  (__MW_INSTRUM_RECORD_HIT(435U))
#define __MW_INSTRUM_NODE_443() \
  (__MW_INSTRUM_RECORD_HIT(443U))
#define __MW_INSTRUM_NODE_444() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(444U))
#define __MW_INSTRUM_NODE_445() \
  (__MW_INSTRUM_RECORD_HIT(445U))
#define __MW_INSTRUM_NODE_446() \
  (__MW_INSTRUM_RECORD_HIT(446U))
#define __MW_INSTRUM_NODE_447() \
  (__MW_INSTRUM_RECORD_HIT(447U))
#define __MW_INSTRUM_NODE_448() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(448U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_449(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(449U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(450U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_449(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(449U), 1) : (__MW_INSTRUM_RECORD_HIT(450U), 0))
#endif
#define __MW_INSTRUM_NODE_450() \
  (__MW_INSTRUM_RECORD_HIT(450U))
#define __MW_INSTRUM_NODE_451() \
  (__MW_INSTRUM_RECORD_HIT(451U))
#define __MW_INSTRUM_NODE_452() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(452U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_453(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(453U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(454U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_453(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(453U), 1) : (__MW_INSTRUM_RECORD_HIT(454U), 0))
#endif
#define __MW_INSTRUM_NODE_455(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(455U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(456U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(457U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_454() \
  (__MW_INSTRUM_RECORD_HIT(454U))
#define __MW_INSTRUM_NODE_458() \
  (__MW_INSTRUM_RECORD_HIT(458U))
#define __MW_INSTRUM_NODE_459() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(459U))
#define __MW_INSTRUM_NODE_460() \
  (__MW_INSTRUM_RECORD_HIT(460U))
#define __MW_INSTRUM_NODE_461() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(461U))
#define __MW_INSTRUM_NODE_462() \
  (__MW_INSTRUM_RECORD_HIT(462U))
#define __MW_INSTRUM_NODE_463() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(463U))
#define __MW_INSTRUM_NODE_464() \
  (__MW_INSTRUM_RECORD_HIT(464U))
#define __MW_INSTRUM_NODE_465() \
  (__MW_INSTRUM_RECORD_HIT(465U))
#define __MW_INSTRUM_NODE_466() \
  (__MW_INSTRUM_RECORD_HIT(466U))
#define __MW_INSTRUM_NODE_467() \
  (__MW_INSTRUM_RECORD_HIT(467U))
#define __MW_INSTRUM_NODE_468() \
  (__MW_INSTRUM_RECORD_HIT(468U))
#define __MW_INSTRUM_NODE_469() \
  (__MW_INSTRUM_RECORD_HIT(469U))
#define __MW_INSTRUM_NODE_470() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(470U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_471(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(471U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(472U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_471(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(471U), 1) : (__MW_INSTRUM_RECORD_HIT(472U), 0))
#endif
#define __MW_INSTRUM_NODE_477(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(477U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(478U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(479U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_482(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(482U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(483U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(484U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_485() \
  (__MW_INSTRUM_RECORD_HIT(485U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_486(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(486U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(487U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_486(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(486U), 1) : (__MW_INSTRUM_RECORD_HIT(487U), 0))
#endif
#define __MW_INSTRUM_NODE_488(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(488U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(489U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(490U) : (void) 0))) : (void) 0))
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
#define __MW_INSTRUM_NODE_501() \
  (__MW_INSTRUM_RECORD_HIT(501U))
#define __MW_INSTRUM_NODE_502() \
  (__MW_INSTRUM_RECORD_HIT(502U))
#define __MW_INSTRUM_NODE_503() \
  (__MW_INSTRUM_RECORD_HIT(503U))
#define __MW_INSTRUM_NODE_504() \
  (__MW_INSTRUM_RECORD_HIT(504U))
#define __MW_INSTRUM_NODE_505() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(505U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_506(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(506U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(507U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_506(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(506U), 1) : (__MW_INSTRUM_RECORD_HIT(507U), 0))
#endif
#define __MW_INSTRUM_NODE_508() \
  (__MW_INSTRUM_RECORD_HIT(508U))
#define __MW_INSTRUM_NODE_509() \
  (__MW_INSTRUM_RECORD_HIT(509U))
#define __MW_INSTRUM_NODE_510() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(510U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_511(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(511U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(512U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_511(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(511U), 1) : (__MW_INSTRUM_RECORD_HIT(512U), 0))
#endif
#define __MW_INSTRUM_NODE_513() \
  (__MW_INSTRUM_RECORD_HIT(513U))
#define __MW_INSTRUM_NODE_514() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(514U))
#define __MW_INSTRUM_NODE_519(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(519U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(520U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(521U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_524(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(524U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(525U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(526U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_527() \
  (__MW_INSTRUM_RECORD_HIT(527U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_528(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(528U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(529U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_528(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(528U), 1) : (__MW_INSTRUM_RECORD_HIT(529U), 0))
#endif
#define __MW_INSTRUM_NODE_530(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(530U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(531U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(532U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_533(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(533U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(534U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_533(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(533U), 1) : (__MW_INSTRUM_RECORD_HIT(534U), 0))
#endif
#define __MW_INSTRUM_NODE_535(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(535U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(536U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(537U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_538() \
  (__MW_INSTRUM_RECORD_HIT(538U))
#define __MW_INSTRUM_NODE_539() \
  (__MW_INSTRUM_RECORD_HIT(539U))
#define __MW_INSTRUM_NODE_540() \
  (__MW_INSTRUM_RECORD_HIT(540U))
#define __MW_INSTRUM_NODE_541() \
  (__MW_INSTRUM_RECORD_HIT(541U))
#define __MW_INSTRUM_NODE_542() \
  (__MW_INSTRUM_RECORD_HIT(542U))
#define __MW_INSTRUM_NODE_543() \
  (__MW_INSTRUM_RECORD_HIT(543U))
#define __MW_INSTRUM_NODE_548(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(548U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(549U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(550U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_553(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(553U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(554U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(555U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_556(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(556U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(557U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_556(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(556U), 1) : (__MW_INSTRUM_RECORD_HIT(557U), 0))
#endif
#define __MW_INSTRUM_NODE_558(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(558U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(559U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(560U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_561() \
  (__MW_INSTRUM_RECORD_HIT(561U))
#define __MW_INSTRUM_NODE_562() \
  (__MW_INSTRUM_RECORD_HIT(562U))
#define __MW_INSTRUM_NODE_563() \
  (__MW_INSTRUM_RECORD_HIT(563U))
#define __MW_INSTRUM_NODE_564() \
  (__MW_INSTRUM_RECORD_HIT(564U))
#define __MW_INSTRUM_NODE_565() \
  (__MW_INSTRUM_RECORD_HIT(565U))
#define __MW_INSTRUM_NODE_570(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(570U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(571U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(572U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_575(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(575U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(576U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(577U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_578(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(578U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(579U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_578(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(578U), 1) : (__MW_INSTRUM_RECORD_HIT(579U), 0))
#endif
#define __MW_INSTRUM_NODE_580(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(580U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(581U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(582U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_583() \
  (__MW_INSTRUM_RECORD_HIT(583U))
#define __MW_INSTRUM_NODE_584() \
  (__MW_INSTRUM_RECORD_HIT(584U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_585(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(585U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(586U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_585(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(585U), 1) : (__MW_INSTRUM_RECORD_HIT(586U), 0))
#endif
#define __MW_INSTRUM_NODE_587(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(587U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(588U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(589U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_590() \
  (__MW_INSTRUM_RECORD_HIT(590U))
#define __MW_INSTRUM_NODE_591() \
  (__MW_INSTRUM_RECORD_HIT(591U))
#define __MW_INSTRUM_NODE_592() \
  (__MW_INSTRUM_RECORD_HIT(592U))
#define __MW_INSTRUM_NODE_593() \
  (__MW_INSTRUM_RECORD_HIT(593U))
#define __MW_INSTRUM_NODE_594() \
  (__MW_INSTRUM_RECORD_HIT(594U))
#define __MW_INSTRUM_NODE_595() \
  (__MW_INSTRUM_RECORD_HIT(595U))
#define __MW_INSTRUM_NODE_596() \
  (__MW_INSTRUM_RECORD_HIT(596U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_597(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(597U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(598U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_597(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(597U), 1) : (__MW_INSTRUM_RECORD_HIT(598U), 0))
#endif
#define __MW_INSTRUM_NODE_599(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(599U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(600U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(601U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_602(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(602U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(603U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_602(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(602U), 1) : (__MW_INSTRUM_RECORD_HIT(603U), 0))
#endif
#define __MW_INSTRUM_NODE_604(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(604U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(605U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(606U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_607() \
  (__MW_INSTRUM_RECORD_HIT(607U))
#define __MW_INSTRUM_NODE_608() \
  (__MW_INSTRUM_RECORD_HIT(608U))
#define __MW_INSTRUM_NODE_609() \
  (__MW_INSTRUM_RECORD_HIT(609U))
#define __MW_INSTRUM_NODE_610() \
  (__MW_INSTRUM_RECORD_HIT(610U))
#define __MW_INSTRUM_NODE_611() \
  (__MW_INSTRUM_RECORD_HIT(611U))
#define __MW_INSTRUM_NODE_612() \
  (__MW_INSTRUM_RECORD_HIT(612U))
#define __MW_INSTRUM_NODE_617(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(617U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(618U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(619U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_622(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(622U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(623U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(624U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_625(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(625U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(626U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_625(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(625U), 1) : (__MW_INSTRUM_RECORD_HIT(626U), 0))
#endif
#define __MW_INSTRUM_NODE_627(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(627U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(628U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(629U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_630() \
  (__MW_INSTRUM_RECORD_HIT(630U))
#define __MW_INSTRUM_NODE_631() \
  (__MW_INSTRUM_RECORD_HIT(631U))
#define __MW_INSTRUM_NODE_632() \
  (__MW_INSTRUM_RECORD_HIT(632U))
#define __MW_INSTRUM_NODE_633() \
  (__MW_INSTRUM_RECORD_HIT(633U))
#define __MW_INSTRUM_NODE_634() \
  (__MW_INSTRUM_RECORD_HIT(634U))
#define __MW_INSTRUM_NODE_635() \
  (__MW_INSTRUM_RECORD_HIT(635U))
#define __MW_INSTRUM_NODE_636() \
  (__MW_INSTRUM_RECORD_HIT(636U))
#define __MW_INSTRUM_NODE_637() \
  (__MW_INSTRUM_RECORD_HIT(637U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_638(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(638U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(639U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_638(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(638U), 1) : (__MW_INSTRUM_RECORD_HIT(639U), 0))
#endif
#define __MW_INSTRUM_NODE_640(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(640U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(641U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(642U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_643() \
  (__MW_INSTRUM_RECORD_HIT(643U))
#define __MW_INSTRUM_NODE_644() \
  (__MW_INSTRUM_RECORD_HIT(644U))
#define __MW_INSTRUM_NODE_645() \
  (__MW_INSTRUM_RECORD_HIT(645U))
#define __MW_INSTRUM_NODE_646() \
  (__MW_INSTRUM_RECORD_HIT(646U))
#define __MW_INSTRUM_NODE_647() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(647U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_648(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(648U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(649U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_648(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(648U), 1) : (__MW_INSTRUM_RECORD_HIT(649U), 0))
#endif
#define __MW_INSTRUM_NODE_649() \
  (__MW_INSTRUM_RECORD_HIT(649U))
#define __MW_INSTRUM_NODE_650() \
  (__MW_INSTRUM_RECORD_HIT(650U))
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(655U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_656(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(656U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(657U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_656(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(656U), 1) : (__MW_INSTRUM_RECORD_HIT(657U), 0))
#endif
#define __MW_INSTRUM_NODE_658(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(658U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(659U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(660U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_665(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(665U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(666U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(667U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_670(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(670U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(671U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(672U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_677(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(677U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(678U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(679U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_682(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(682U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(683U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(684U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_685() \
  (__MW_INSTRUM_RECORD_HIT(685U))
#define __MW_INSTRUM_NODE_686() \
  (__MW_INSTRUM_RECORD_HIT(686U))
#define __MW_INSTRUM_NODE_687() \
  (__MW_INSTRUM_RECORD_HIT(687U))
#define __MW_INSTRUM_NODE_688() \
  (__MW_INSTRUM_RECORD_HIT(688U))
#define __MW_INSTRUM_NODE_689() \
  (__MW_INSTRUM_RECORD_HIT(689U))
#define __MW_INSTRUM_NODE_690() \
  (__MW_INSTRUM_RECORD_HIT(690U))
#define __MW_INSTRUM_NODE_691() \
  (__MW_INSTRUM_RECORD_HIT(691U))
#define __MW_INSTRUM_NODE_692() \
  (__MW_INSTRUM_RECORD_HIT(692U))
#define __MW_INSTRUM_NODE_693() \
  (__MW_INSTRUM_RECORD_HIT(693U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_694(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(694U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(695U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_694(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(694U), 1) : (__MW_INSTRUM_RECORD_HIT(695U), 0))
#endif
#define __MW_INSTRUM_NODE_696(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(696U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(697U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(698U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_699() \
  (__MW_INSTRUM_RECORD_HIT(699U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_700(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(700U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(701U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_700(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(700U), 1) : (__MW_INSTRUM_RECORD_HIT(701U), 0))
#endif
#define __MW_INSTRUM_NODE_702(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(702U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(703U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(704U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_705(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(705U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(706U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_705(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(705U), 1) : (__MW_INSTRUM_RECORD_HIT(706U), 0))
#endif
#define __MW_INSTRUM_NODE_707(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(707U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(708U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(709U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_710() \
  (__MW_INSTRUM_RECORD_HIT(710U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_711(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(711U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(712U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_711(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(711U), 1) : (__MW_INSTRUM_RECORD_HIT(712U), 0))
#endif
#define __MW_INSTRUM_NODE_713(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(713U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(714U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(715U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_716(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(716U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(717U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_716(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(716U), 1) : (__MW_INSTRUM_RECORD_HIT(717U), 0))
#endif
#define __MW_INSTRUM_NODE_722(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(722U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(723U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(724U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_727(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(727U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(728U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(729U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_730() \
  (__MW_INSTRUM_RECORD_HIT(730U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_731(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(731U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(732U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_731(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(731U), 1) : (__MW_INSTRUM_RECORD_HIT(732U), 0))
#endif
#define __MW_INSTRUM_NODE_733(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(733U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(734U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(735U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_736(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(736U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(737U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_736(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(736U), 1) : (__MW_INSTRUM_RECORD_HIT(737U), 0))
#endif
#define __MW_INSTRUM_NODE_738(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(738U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(739U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(740U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_741() \
  (__MW_INSTRUM_RECORD_HIT(741U))
#define __MW_INSTRUM_NODE_742() \
  (__MW_INSTRUM_RECORD_HIT(742U))
#define __MW_INSTRUM_NODE_743() \
  (__MW_INSTRUM_RECORD_HIT(743U))
#define __MW_INSTRUM_NODE_744() \
  (__MW_INSTRUM_RECORD_HIT(744U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_745(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(745U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(746U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_745(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(745U), 1) : (__MW_INSTRUM_RECORD_HIT(746U), 0))
#endif
#define __MW_INSTRUM_NODE_747(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(747U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(748U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(749U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_750(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(750U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(751U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_750(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(750U), 1) : (__MW_INSTRUM_RECORD_HIT(751U), 0))
#endif
#define __MW_INSTRUM_NODE_752(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(752U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(753U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(754U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_759(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(759U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(760U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(761U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_764() \
  (__MW_INSTRUM_RECORD_HIT(764U))
#define __MW_INSTRUM_NODE_765() \
  (__MW_INSTRUM_RECORD_HIT(765U))
#define __MW_INSTRUM_NODE_766() \
  (__MW_INSTRUM_RECORD_HIT(766U))
#define __MW_INSTRUM_NODE_767() \
  (__MW_INSTRUM_RECORD_HIT(767U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_768(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(768U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(769U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_768(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(768U), 1) : (__MW_INSTRUM_RECORD_HIT(769U), 0))
#endif
#define __MW_INSTRUM_NODE_770(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(770U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(771U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(772U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_773(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(773U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(774U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_773(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(773U), 1) : (__MW_INSTRUM_RECORD_HIT(774U), 0))
#endif
#define __MW_INSTRUM_NODE_775() \
  (__MW_INSTRUM_RECORD_HIT(775U))
#define __MW_INSTRUM_NODE_776() \
  (__MW_INSTRUM_RECORD_HIT(776U))
#define __MW_INSTRUM_NODE_777() \
  (__MW_INSTRUM_RECORD_HIT(777U))
#define __MW_INSTRUM_NODE_778() \
  (__MW_INSTRUM_RECORD_HIT(778U))
#define __MW_INSTRUM_NODE_779() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(779U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_780(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(780U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(781U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_780(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(780U), 1) : (__MW_INSTRUM_RECORD_HIT(781U), 0))
#endif
#define __MW_INSTRUM_NODE_782(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(782U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(783U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(784U) : (void) 0))) : (void) 0))
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
#define __MW_INSTRUM_NODE_795() \
  (__MW_INSTRUM_RECORD_HIT(795U))
#define __MW_INSTRUM_NODE_796() \
  (__MW_INSTRUM_RECORD_HIT(796U))
#define __MW_INSTRUM_NODE_797() \
  (__MW_INSTRUM_RECORD_HIT(797U))
#define __MW_INSTRUM_NODE_798() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(798U))
#define __MW_INSTRUM_NODE_799() \
  (__MW_INSTRUM_RECORD_HIT(799U))
#define __MW_INSTRUM_NODE_800() \
  (__MW_INSTRUM_RECORD_HIT(800U))
#define __MW_INSTRUM_NODE_801() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(473)))), \
   __MW_INSTRUM_RECORD_HIT(801U))
#define __MW_INSTRUM_NODE_802() \
  (__MW_INSTRUM_RECORD_HIT(802U))
#define __MW_INSTRUM_NODE_803() \
  (__MW_INSTRUM_RECORD_HIT(803U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_475CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_475(...) (__MW_INSTRUM_RECORD_HIT_475CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_475(exp) (__MW_INSTRUM_RECORD_HIT_475CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
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
int __MW_INSTRUM_RECORD_HIT_473DA_475_480Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_473(...) (__MW_INSTRUM_RECORD_HIT_473DA_475_480Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_473(exp) (__MW_INSTRUM_RECORD_HIT_473DA_475_480Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_517CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_517(...) (__MW_INSTRUM_RECORD_HIT_517CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_517(exp) (__MW_INSTRUM_RECORD_HIT_517CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_515DO_517_522Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_515(...) (__MW_INSTRUM_RECORD_HIT_515DO_517_522Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_515(exp) (__MW_INSTRUM_RECORD_HIT_515DO_517_522Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_546CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_546(...) (__MW_INSTRUM_RECORD_HIT_546CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_546(exp) (__MW_INSTRUM_RECORD_HIT_546CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_544DA_546_551Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_544(...) (__MW_INSTRUM_RECORD_HIT_544DA_546_551Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_544(exp) (__MW_INSTRUM_RECORD_HIT_544DA_546_551Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_568CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_568(...) (__MW_INSTRUM_RECORD_HIT_568CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_568(exp) (__MW_INSTRUM_RECORD_HIT_568CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_566DA_568_573Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_566(...) (__MW_INSTRUM_RECORD_HIT_566DA_568_573Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_566(exp) (__MW_INSTRUM_RECORD_HIT_566DA_568_573Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_615CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_615(...) (__MW_INSTRUM_RECORD_HIT_615CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_615(exp) (__MW_INSTRUM_RECORD_HIT_615CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_613DA_615_620Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_613(...) (__MW_INSTRUM_RECORD_HIT_613DA_615_620Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_613(exp) (__MW_INSTRUM_RECORD_HIT_613DA_615_620Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_663CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_663(...) (__MW_INSTRUM_RECORD_HIT_663CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_663(exp) (__MW_INSTRUM_RECORD_HIT_663CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_661DA_663_668Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_661(...) (__MW_INSTRUM_RECORD_HIT_661DA_663_668Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_661(exp) (__MW_INSTRUM_RECORD_HIT_661DA_663_668Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_675CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_675(...) (__MW_INSTRUM_RECORD_HIT_675CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_675(exp) (__MW_INSTRUM_RECORD_HIT_675CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_673DO_675_680Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_673(...) (__MW_INSTRUM_RECORD_HIT_673DO_675_680Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_673(exp) (__MW_INSTRUM_RECORD_HIT_673DO_675_680Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_720CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_720(...) (__MW_INSTRUM_RECORD_HIT_720CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_720(exp) (__MW_INSTRUM_RECORD_HIT_720CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_718DA_720_725Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_718(...) (__MW_INSTRUM_RECORD_HIT_718DA_720_725Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_718(exp) (__MW_INSTRUM_RECORD_HIT_718DA_720_725Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_757CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_757(...) (__MW_INSTRUM_RECORD_HIT_757CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_757(exp) (__MW_INSTRUM_RECORD_HIT_757CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
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
int __MW_INSTRUM_RECORD_HIT_755DA_757_762Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_755(...) (__MW_INSTRUM_RECORD_HIT_755DA_757_762Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_755(exp) (__MW_INSTRUM_RECORD_HIT_755DA_757_762Z_RntCWIQhSBMk0JpdeDcPVE(exp))
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
void __MW_INSTRUM_RECORD_HIT_408EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_408() __MW_INSTRUM_RECORD_HIT_408EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_409() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_410XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_410() __MW_INSTRUM_RECORD_HIT_410XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_411EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_411() __MW_INSTRUM_RECORD_HIT_411EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_412DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_412(...) (__MW_INSTRUM_RECORD_HIT_412DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_412(exp) (__MW_INSTRUM_RECORD_HIT_412DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_414IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_414(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_414IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_417DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_417(...) (__MW_INSTRUM_RECORD_HIT_417DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_417(exp) (__MW_INSTRUM_RECORD_HIT_417DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_419IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_419(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_419IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_422XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_422() __MW_INSTRUM_RECORD_HIT_422XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_418() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_423XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_423() __MW_INSTRUM_RECORD_HIT_423XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_413() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_424DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_424(...) (__MW_INSTRUM_RECORD_HIT_424DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_424(exp) (__MW_INSTRUM_RECORD_HIT_424DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_426IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_426(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_426IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_429XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_429() __MW_INSTRUM_RECORD_HIT_429XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_425() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_430XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_430() __MW_INSTRUM_RECORD_HIT_430XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_431EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_431() __MW_INSTRUM_RECORD_HIT_431EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_432XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_432() __MW_INSTRUM_RECORD_HIT_432XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_433EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_433() __MW_INSTRUM_RECORD_HIT_433EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_434DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_434(...) (__MW_INSTRUM_RECORD_HIT_434DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_434(exp) (__MW_INSTRUM_RECORD_HIT_434DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_436DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_436(...) (__MW_INSTRUM_RECORD_HIT_436DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_436(exp) (__MW_INSTRUM_RECORD_HIT_436DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_438IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_438(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_438IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_441() ((void)0)


#define __MW_INSTRUM_NODE_442() ((void)0)


#define __MW_INSTRUM_NODE_435() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_443XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_443() __MW_INSTRUM_RECORD_HIT_443XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_444EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_444() __MW_INSTRUM_RECORD_HIT_444EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_445() ((void)0)


#define __MW_INSTRUM_NODE_446() ((void)0)


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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_449DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_449(...) (__MW_INSTRUM_RECORD_HIT_449DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_449(exp) (__MW_INSTRUM_RECORD_HIT_449DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_455IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_455(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_455IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_454() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_458XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_458() __MW_INSTRUM_RECORD_HIT_458XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_459EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_459() __MW_INSTRUM_RECORD_HIT_459EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_460XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_460() __MW_INSTRUM_RECORD_HIT_460XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_461EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_461() __MW_INSTRUM_RECORD_HIT_461EZ_RntCWIQhSBMk0JpdeDcPVE()

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

#define __MW_INSTRUM_NODE_464() ((void)0)


#define __MW_INSTRUM_NODE_465() ((void)0)


#define __MW_INSTRUM_NODE_466() ((void)0)


#define __MW_INSTRUM_NODE_467() ((void)0)


#define __MW_INSTRUM_NODE_468() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_469XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_469() __MW_INSTRUM_RECORD_HIT_469XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_470EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_470() __MW_INSTRUM_RECORD_HIT_470EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_471DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_471(...) (__MW_INSTRUM_RECORD_HIT_471DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_471(exp) (__MW_INSTRUM_RECORD_HIT_471DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_477IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_477(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_477IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
void __MW_INSTRUM_RECORD_HIT_485XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_485() __MW_INSTRUM_RECORD_HIT_485XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_486DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_486(...) (__MW_INSTRUM_RECORD_HIT_486DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_486(exp) (__MW_INSTRUM_RECORD_HIT_486DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_488IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_488(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_488IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
void __MW_INSTRUM_RECORD_HIT_501XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_501() __MW_INSTRUM_RECORD_HIT_501XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_502() ((void)0)


#define __MW_INSTRUM_NODE_503() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_504XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_504() __MW_INSTRUM_RECORD_HIT_504XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_505EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_505() __MW_INSTRUM_RECORD_HIT_505EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_506DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_506(...) (__MW_INSTRUM_RECORD_HIT_506DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_506(exp) (__MW_INSTRUM_RECORD_HIT_506DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_513XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_513() __MW_INSTRUM_RECORD_HIT_513XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_514EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_514() __MW_INSTRUM_RECORD_HIT_514EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_519IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_519(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_519IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_524IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_524(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_524IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_527() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_528DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_528(...) (__MW_INSTRUM_RECORD_HIT_528DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_528(exp) (__MW_INSTRUM_RECORD_HIT_528DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_530IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_530(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_530IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_538() ((void)0)


#define __MW_INSTRUM_NODE_539() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_540XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_540() __MW_INSTRUM_RECORD_HIT_540XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_541() ((void)0)


#define __MW_INSTRUM_NODE_542() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_543XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_543() __MW_INSTRUM_RECORD_HIT_543XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_548IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_548(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_548IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
int __MW_INSTRUM_RECORD_HIT_556DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_556(...) (__MW_INSTRUM_RECORD_HIT_556DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_556(exp) (__MW_INSTRUM_RECORD_HIT_556DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_558IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_558(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_558IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_561() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_562XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_562() __MW_INSTRUM_RECORD_HIT_562XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_563() ((void)0)


#define __MW_INSTRUM_NODE_564() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_565XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_565() __MW_INSTRUM_RECORD_HIT_565XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_570IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_570(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_570IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
int __MW_INSTRUM_RECORD_HIT_578DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_578(...) (__MW_INSTRUM_RECORD_HIT_578DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_578(exp) (__MW_INSTRUM_RECORD_HIT_578DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_580IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_580(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_580IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_583() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_584XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_584() __MW_INSTRUM_RECORD_HIT_584XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_585DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_585(...) (__MW_INSTRUM_RECORD_HIT_585DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_585(exp) (__MW_INSTRUM_RECORD_HIT_585DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_587IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_587(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_587IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_590() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_591XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_591() __MW_INSTRUM_RECORD_HIT_591XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_592() ((void)0)


#define __MW_INSTRUM_NODE_593() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_594XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_594() __MW_INSTRUM_RECORD_HIT_594XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_595() ((void)0)


#define __MW_INSTRUM_NODE_596() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_597DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_597(...) (__MW_INSTRUM_RECORD_HIT_597DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_597(exp) (__MW_INSTRUM_RECORD_HIT_597DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_599IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_599(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_599IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_607() ((void)0)


#define __MW_INSTRUM_NODE_608() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_609XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_609() __MW_INSTRUM_RECORD_HIT_609XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_610() ((void)0)


#define __MW_INSTRUM_NODE_611() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_612XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_612() __MW_INSTRUM_RECORD_HIT_612XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_617IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_617(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_617IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
int __MW_INSTRUM_RECORD_HIT_625DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_625(...) (__MW_INSTRUM_RECORD_HIT_625DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_625(exp) (__MW_INSTRUM_RECORD_HIT_625DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_627IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_627(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_627IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_630() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_631XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_631() __MW_INSTRUM_RECORD_HIT_631XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_632() ((void)0)


#define __MW_INSTRUM_NODE_633() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_634XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_634() __MW_INSTRUM_RECORD_HIT_634XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_635() ((void)0)


#define __MW_INSTRUM_NODE_636() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_637XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_637() __MW_INSTRUM_RECORD_HIT_637XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_638DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_638(...) (__MW_INSTRUM_RECORD_HIT_638DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_638(exp) (__MW_INSTRUM_RECORD_HIT_638DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_640IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_640(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_640IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_643() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_644XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_644() __MW_INSTRUM_RECORD_HIT_644XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_645() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_646XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_646() __MW_INSTRUM_RECORD_HIT_646XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_647EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_647() __MW_INSTRUM_RECORD_HIT_647EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_648DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_648(...) (__MW_INSTRUM_RECORD_HIT_648DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_648(exp) (__MW_INSTRUM_RECORD_HIT_648DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_649() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_650DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_650() __MW_INSTRUM_RECORD_HIT_650DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_651DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_651() __MW_INSTRUM_RECORD_HIT_651DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_652DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_652() __MW_INSTRUM_RECORD_HIT_652DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_653DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_653() __MW_INSTRUM_RECORD_HIT_653DZ_RntCWIQhSBMk0JpdeDcPVE()

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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_658IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_658(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_658IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_665IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_665(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_665IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
void __MW_INSTRUM_RECORD_HIT_677IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_677(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_677IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
void __MW_INSTRUM_RECORD_HIT_685DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_685() __MW_INSTRUM_RECORD_HIT_685DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_686() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_687DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_687() __MW_INSTRUM_RECORD_HIT_687DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_688DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_688() __MW_INSTRUM_RECORD_HIT_688DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_689DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_689() __MW_INSTRUM_RECORD_HIT_689DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_690() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_691DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_691() __MW_INSTRUM_RECORD_HIT_691DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_692() ((void)0)


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
int __MW_INSTRUM_RECORD_HIT_694DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_694(...) (__MW_INSTRUM_RECORD_HIT_694DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_694(exp) (__MW_INSTRUM_RECORD_HIT_694DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_696IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_696(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_696IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_699XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_699() __MW_INSTRUM_RECORD_HIT_699XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_700DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_700(...) (__MW_INSTRUM_RECORD_HIT_700DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_700(exp) (__MW_INSTRUM_RECORD_HIT_700DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_702IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_702(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_702IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_710() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_711DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_711(...) (__MW_INSTRUM_RECORD_HIT_711DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_711(exp) (__MW_INSTRUM_RECORD_HIT_711DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_713IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_713(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_713IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
void __MW_INSTRUM_RECORD_HIT_722IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_722(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_722IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_727IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_727(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_727IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_730() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_731DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_731(...) (__MW_INSTRUM_RECORD_HIT_731DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_731(exp) (__MW_INSTRUM_RECORD_HIT_731DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_733IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_733(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_733IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_741() ((void)0)


#define __MW_INSTRUM_NODE_742() ((void)0)


#define __MW_INSTRUM_NODE_743() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_744XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_744() __MW_INSTRUM_RECORD_HIT_744XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_745DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_745(...) (__MW_INSTRUM_RECORD_HIT_745DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_745(exp) (__MW_INSTRUM_RECORD_HIT_745DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_747IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_747(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_747IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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
void __MW_INSTRUM_RECORD_HIT_759IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_759(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_759IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_764() ((void)0)


#define __MW_INSTRUM_NODE_765() ((void)0)


#define __MW_INSTRUM_NODE_766() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_767XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_767() __MW_INSTRUM_RECORD_HIT_767XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_768DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_768(...) (__MW_INSTRUM_RECORD_HIT_768DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_768(exp) (__MW_INSTRUM_RECORD_HIT_768DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_770IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_770(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_770IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_775() ((void)0)


#define __MW_INSTRUM_NODE_776() ((void)0)


#define __MW_INSTRUM_NODE_777() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_778XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_778() __MW_INSTRUM_RECORD_HIT_778XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_779EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_779() __MW_INSTRUM_RECORD_HIT_779EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_780DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_780(...) (__MW_INSTRUM_RECORD_HIT_780DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_780(exp) (__MW_INSTRUM_RECORD_HIT_780DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_782IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_782(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_782IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_795() ((void)0)


#define __MW_INSTRUM_NODE_796() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_797XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_797() __MW_INSTRUM_RECORD_HIT_797XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_798EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_798() __MW_INSTRUM_RECORD_HIT_798EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_799() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_800XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_800() __MW_INSTRUM_RECORD_HIT_800XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_801EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_801() __MW_INSTRUM_RECORD_HIT_801EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_802() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_803XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_803() __MW_INSTRUM_RECORD_HIT_803XZ_RntCWIQhSBMk0JpdeDcPVE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlaveAPT.c"
#line 8 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlaveAPT.h"
#ifndef _CANOPENSLAVE_APT_DEFINES_H
#define _CANOPENSLAVE_APT_DEFINES_H
#line 2 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlave_APT_PDOs.h"
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
#line 5 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlave_APT_PDOs.h"
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
#line 154 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlaveAPT.h"
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
#line 19 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\Data_TypeAPT.h"
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
int16_T AN_01; 
int16_T AN_02; 
int16_T AN_03; 
int16_T AN_04; 
}; 
uint8_T Message[8]; 
} TPDO_test; 
#line 16 "E:\\SpeedGoat\\Git\\Trike_1ms_develop_algo\\CANOpenSlaveAPT.c"
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
{ __MW_INSTRUM_FCN_ENTER_20(); __MW_INSTRUM_NODE_408(); 
__MW_INSTRUM_NODE_409(), memcpy(txData, pTransmitBuf->BUF, pTransmitBuf->LEN); 
*txID = pTransmitBuf->ID; 
*txDLC = pTransmitBuf->LEN; __MW_INSTRUM_NODE_410(); 
} 



uint8_T CANOpenHW_IsTimeExpired_APT(uint16_T timestamp) 
{ int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_21(); __MW_INSTRUM_NODE_411(); { 
if (__MW_INSTRUM_NODE_412(((__mw_tmp_for_expr_1 = gTimCnt_APT), ((__mw_tmp_for_expr_2 = timestamp), (__MW_INSTRUM_NODE_414(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ { 
if (__MW_INSTRUM_NODE_417(((__mw_tmp_for_expr_3 = gTimCnt_APT - timestamp), (__MW_INSTRUM_NODE_419(__mw_tmp_for_expr_3, 0x8000), (__mw_tmp_for_expr_3 < 0x8000))))) 
{ __MW_INSTRUM_NODE_422(); return 1; } else 

{ __MW_INSTRUM_NODE_423(); return 0; }  } 
} else 

{ { 
if (__MW_INSTRUM_NODE_424(((__mw_tmp_for_expr_4 = timestamp - gTimCnt_APT), (__MW_INSTRUM_NODE_426(__mw_tmp_for_expr_4, 0x8000), (__mw_tmp_for_expr_4 > 0x8000))))) 
{ __MW_INSTRUM_NODE_429(); return 1; } else 

{ __MW_INSTRUM_NODE_430(); return 0; }  } 
}  } 
} 


uint16_T CANOpenHW_GetTime_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_22(); __MW_INSTRUM_NODE_431(); 
{ uint16_T __mw_tmp_for_return = gTimCnt_APT; __MW_INSTRUM_NODE_432(); return __mw_tmp_for_return; } 
} 
#line 92
void Prepare_TPDOs_APT(void) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_23(); __MW_INSTRUM_NODE_433(); { 
uint8_T i; 
i = (0); { 
while (__MW_INSTRUM_NODE_434(i < 1)) 
{ { 
if (__MW_INSTRUM_NODE_436(((__mw_tmp_for_expr_1 = (((gTPDOConfig_APT)[i]).CAN).ID), (__MW_INSTRUM_NODE_438(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 != 0))))) 
{ 

__MW_INSTRUM_NODE_441(), memcpy(&(((((gTPDOConfig_APT)[i]).CAN).BUF)[0]), ((gTPDOConfig_APT)[i]).pData, (((gTPDOConfig_APT)[i]).CAN).LEN); 


((gTPDOConfig_APT)[i]).event_timestamp = (__MW_INSTRUM_NODE_442(), CANOpenHW_GetTime_APT()); 
#line 111
}  } 
i++; 
}  } 
gTPDONr_APT = (1); } __MW_INSTRUM_NODE_443(); 
} 



void TransmitPDO_APT(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_24(); __MW_INSTRUM_NODE_444(); 
#line 126
((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp = (__MW_INSTRUM_NODE_445(), CANOpenHW_GetTime_APT()) + ((gTPDOConfig_APT)[gTPDONr_APT]).event_time; 

__MW_INSTRUM_NODE_446(), CANOpenHW_SendMessage_APT(&(((gTPDOConfig_APT)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_447(); 
} 




void CANOpenSlave_Init_APT(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_25(); __MW_INSTRUM_NODE_448(); { 
uint8_T i; 
#line 142
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
#line 166
i = (0); { 
while (__MW_INSTRUM_NODE_449(i < 3)) 
{ 
((gRPDOConfig_APT)[i]).ID = (0); 
i++; 
}  } 


gTPDONr_APT = (0xff); } __MW_INSTRUM_NODE_451(); 
} 




void CANOpenSlave_InitRPDO_APT(uint8_T PDO_NR, uint16_T CAN_ID, uint8_T len, uint8_T *dat) 
{ int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_26(); __MW_INSTRUM_NODE_452(); 
PDO_NR--; 
((gRPDOConfig_APT)[PDO_NR]).LEN = len; 
((gRPDOConfig_APT)[PDO_NR]).pData = dat; { 
if (__MW_INSTRUM_NODE_453(((__mw_tmp_for_expr_1 = CAN_ID), (__MW_INSTRUM_NODE_455(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0))))) 
{ 
((gRPDOConfig_APT)[PDO_NR]).ID = (0x200 + 0x100 * (uint16_T)PDO_NR) + gCANOPENConfig_APT.Node_ID; 
} else 

{ 
((gRPDOConfig_APT)[PDO_NR]).ID = CAN_ID; 
}  } __MW_INSTRUM_NODE_458(); 
} 
#line 200
void CANOpenSlave_InitTPDO_APT(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_27(); __MW_INSTRUM_NODE_459(); 
PDO_NR--; 
(((gTPDOConfig_APT)[PDO_NR]).CAN).ID = CAN_ID; 
(((gTPDOConfig_APT)[PDO_NR]).CAN).LEN = len; 
((gTPDOConfig_APT)[PDO_NR]).pData = pDat; 

((gTPDOConfig_APT)[PDO_NR]).event_time = event_time; __MW_INSTRUM_NODE_460(); 




} 




void CANOpenSlave_ResetApplication_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_28(); __MW_INSTRUM_NODE_461(); 
; __MW_INSTRUM_NODE_462(); 
} 




void CANOpenSlave_ResetCommunication_APT(void) 
{ __MW_INSTRUM_FCN_ENTER_29(); __MW_INSTRUM_NODE_463(); 
__MW_INSTRUM_NODE_464(), CANOpenSlave_Init_APT(500, 0x6, 6000L); 



__MW_INSTRUM_NODE_465(), CANOpenSlave_InitTPDO_APT(1, 0, 10, 0, 8, &(TPDO01_APT.Message)); 
#line 238
__MW_INSTRUM_NODE_466(), CANOpenSlave_InitRPDO_APT(1, 0x1c1, 8, &(RPDO01_APT.Message)); 
__MW_INSTRUM_NODE_467(), CANOpenSlave_InitRPDO_APT(2, 0x1c2, 8, &(RPDO02_APT.Message)); 
__MW_INSTRUM_NODE_468(), CANOpenSlave_InitRPDO_APT(3, 0x1c3, 8, &(RPDO03_APT.Message)); __MW_INSTRUM_NODE_469(); 


} 
#line 251
const uint8_T SDOResponseTable_APT[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((6000L >> 0) & (0xff)), ((6000L >> 8) & (0xff)), ((6000L >> 16) & (0xff)), ((6000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 433
uint8_T Search_OD_APT(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_30(); __MW_INSTRUM_NODE_470(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable_APT)[0]); { 
while (__MW_INSTRUM_NODE_471(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_473(__MW_INSTRUM_NODE_475(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_477(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_480(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_482(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_485(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_486(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_488(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_491(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_493(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_496(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_498(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_501(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_502(); 
i++; 
}  } __MW_INSTRUM_NODE_503(); __MW_INSTRUM_NODE_504(); 
return 0xff; } 
} 
#line 529
void Send_SDO_Abort_APT(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_31(); __MW_INSTRUM_NODE_505(); { 
uint8_T i; 
(gTxSDO_APT.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_506(i < 4); i++) 
{ 
(gTxSDO_APT.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_508(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_509(); 
} 


void CopyConstToData_APT(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_32(); __MW_INSTRUM_NODE_510(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_511(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_513(); 
} 



uint8_T Handle_SDO_Request_APT(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_33(); __MW_INSTRUM_NODE_514(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
#line 569
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO_APT.BUF)[1] = pData[1]; 
(gTxSDO_APT.BUF)[2] = pData[2]; 
(gTxSDO_APT.BUF)[3] = pData[3]; { 


if (__MW_INSTRUM_NODE_515(__MW_INSTRUM_NODE_517(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_519(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_522(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_524(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 641
found = (__MW_INSTRUM_NODE_527(), Search_OD_APT(index, subindex)); { 

if (__MW_INSTRUM_NODE_528(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_530(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_533(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_535(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_538(), memcpy(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8]), 8); 
__MW_INSTRUM_NODE_539(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_540(); 
return 1; 
}  } __MW_INSTRUM_NODE_541(); 

__MW_INSTRUM_NODE_542(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_543(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_544(__MW_INSTRUM_NODE_546(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_548(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_551(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_553(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_556(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_558(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_561(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_562(); 
return 1; 
}  } __MW_INSTRUM_NODE_563(); 

__MW_INSTRUM_NODE_564(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_565(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_566(__MW_INSTRUM_NODE_568(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_570(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_573(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_575(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_578(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_580(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4b); 
(gTxSDO_APT.BUF)[4] = (uint8_T)(gCANOPENConfig_APT.heartbeat_time); 
(gTxSDO_APT.BUF)[5] = (uint8_T)((gCANOPENConfig_APT.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_583(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_584(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_585(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_587(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig_APT.heartbeat_time = pData[5]; 
gCANOPENConfig_APT.heartbeat_time = ((gCANOPENConfig_APT.heartbeat_time) << 8) + pData[4]; 
(gTxSDO_APT.BUF)[0] = (0x60); 

(gTxSDO_APT.BUF)[4] = (0); 
(gTxSDO_APT.BUF)[5] = (0); 
(gTxSDO_APT.BUF)[6] = (0); 
(gTxSDO_APT.BUF)[7] = (0); 
__MW_INSTRUM_NODE_590(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_591(); 
return 1; 
}  } __MW_INSTRUM_NODE_592(); 
__MW_INSTRUM_NODE_593(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_594(); 
return 0; 
}  } __MW_INSTRUM_NODE_595(); 


found = (__MW_INSTRUM_NODE_596(), Search_OD_APT(index, subindex)); { 
if (__MW_INSTRUM_NODE_597(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_599(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_602(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_604(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_607(), CopyConstToData_APT(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8])); 
__MW_INSTRUM_NODE_608(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_609(); 
return 1; 
}  } __MW_INSTRUM_NODE_610(); 

__MW_INSTRUM_NODE_611(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_612(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_613(__MW_INSTRUM_NODE_615(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_617(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_620(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_622(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_625(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_627(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_630(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_631(); 
return 1; 
}  } __MW_INSTRUM_NODE_632(); 

__MW_INSTRUM_NODE_633(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_634(); 
return 0; 
}  } __MW_INSTRUM_NODE_635(); 
__MW_INSTRUM_NODE_636(), Send_SDO_Abort_APT(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_637(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_638(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_640(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_643(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_644(); 
return 0; 
}  } __MW_INSTRUM_NODE_645(); __MW_INSTRUM_NODE_646(); 
return 1; } 
} 

void SDO_Write_APT(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_34(); __MW_INSTRUM_NODE_647(); { 
char k; 
gTxSDOw_APT.ID = 0x600 + Node_ID; 
gTxSDOw_APT.LEN = (8); 
(gTxSDOw_APT.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw_APT.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw_APT.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw_APT.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_648(k < 4); k++) 
{ (gTxSDOw_APT.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_650(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_651(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_652(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_653(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw_APT.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_654(); 




} 
#line 782
void CANOpenSlave_ProcessStackAsyncRx_APT(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_35(); __MW_INSTRUM_NODE_655(); { 
uint8_T i; 
gTimCnt_APT++; 
*txDLC = (0); { 



if (__MW_INSTRUM_NODE_656(((__mw_tmp_for_expr_1 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_2 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_658(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 != __mw_tmp_for_expr_2)))))) 
{ 
gRxCAN_APT = &((can_rx_queue_APT.msg)[can_rx_queue_APT.out]); { 




if (__MW_INSTRUM_NODE_661(__MW_INSTRUM_NODE_663(((__mw_tmp_for_expr_3 = gRxCAN_APT->ID), (__MW_INSTRUM_NODE_665(__mw_tmp_for_expr_3, 0), (__mw_tmp_for_expr_3 == 0)))) && __MW_INSTRUM_NODE_668(((__mw_tmp_for_expr_4 = gRxCAN_APT->LEN), (__MW_INSTRUM_NODE_670(__mw_tmp_for_expr_4, 3), (__mw_tmp_for_expr_4 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_673(__MW_INSTRUM_NODE_675(((__mw_tmp_for_expr_5 = (gRxCAN_APT->BUF)[1]), ((__mw_tmp_for_expr_6 = gCANOPENConfig_APT.Node_ID), (__MW_INSTRUM_NODE_677(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6))))) || __MW_INSTRUM_NODE_680(((__mw_tmp_for_expr_7 = (gRxCAN_APT->BUF)[1]), (__MW_INSTRUM_NODE_682(__mw_tmp_for_expr_7, 0), (__mw_tmp_for_expr_7 == 0)))))) 
{ { 
switch ((gRxCAN_APT->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_685(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_686(), Prepare_TPDOs_APT(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_687(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_688(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_689(); 
__MW_INSTRUM_NODE_690(), CANOpenSlave_ResetApplication_APT(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_691(); 
__MW_INSTRUM_NODE_692(), CANOpenSlave_ResetCommunication_APT(); 
break; 
default:  __MW_INSTRUM_NODE_693(); 
break; 
}  } 

can_rx_queue_APT.out = __MW_INSTRUM_NODE_694(((__mw_tmp_for_expr_8 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_9 = 8 - 1), (__MW_INSTRUM_NODE_696(__mw_tmp_for_expr_8, __mw_tmp_for_expr_9), (__mw_tmp_for_expr_8 < __mw_tmp_for_expr_9))))) ? (can_rx_queue_APT.out + 1) : 0; __MW_INSTRUM_NODE_699(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_700(((__mw_tmp_for_expr_10 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_702(__mw_tmp_for_expr_10, 0x4), (__mw_tmp_for_expr_10 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_705(((__mw_tmp_for_expr_11 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_12 = gCANOPENConfig_APT.Node_ID + 0x600), (__MW_INSTRUM_NODE_707(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 == __mw_tmp_for_expr_12)))))) 
{ 
i = (__MW_INSTRUM_NODE_710(), Handle_SDO_Request_APT(&((gRxCAN_APT->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_711(((__mw_tmp_for_expr_13 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_713(__mw_tmp_for_expr_13, 0x5), (__mw_tmp_for_expr_13 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_716(i < 3)) 
{ { 
if (__MW_INSTRUM_NODE_718(__MW_INSTRUM_NODE_720(((__mw_tmp_for_expr_14 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_15 = ((gRPDOConfig_APT)[i]).ID), (__MW_INSTRUM_NODE_722(__mw_tmp_for_expr_14, __mw_tmp_for_expr_15), (__mw_tmp_for_expr_14 == __mw_tmp_for_expr_15))))) && __MW_INSTRUM_NODE_725(((__mw_tmp_for_expr_16 = gRxCAN_APT->LEN), ((__mw_tmp_for_expr_17 = ((gRPDOConfig_APT)[i]).LEN), (__MW_INSTRUM_NODE_727(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))))) 
{ 
__MW_INSTRUM_NODE_730(), memcpy(((gRPDOConfig_APT)[i]).pData, &((gRxCAN_APT->BUF)[0]), ((gRPDOConfig_APT)[i]).LEN); 
i = (3); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue_APT.out = __MW_INSTRUM_NODE_731(((__mw_tmp_for_expr_18 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_19 = 8 - 1), (__MW_INSTRUM_NODE_733(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 < __mw_tmp_for_expr_19))))) ? (can_rx_queue_APT.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_736(((__mw_tmp_for_expr_20 = gTPDONr_APT), (__MW_INSTRUM_NODE_738(__mw_tmp_for_expr_20, 0xff), (__mw_tmp_for_expr_20 == 0xff))))) 
{ 

gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_741(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 

__MW_INSTRUM_NODE_742(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 

((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_743(), Prepare_TPDOs_APT(); 




gTPDONr_APT = (1); __MW_INSTRUM_NODE_744(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_745(((__mw_tmp_for_expr_21 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_747(__mw_tmp_for_expr_21, 0x5), (__mw_tmp_for_expr_21 == 0x5))))) 
{ 
gTPDONr_APT++; { 
if (__MW_INSTRUM_NODE_750(((__mw_tmp_for_expr_22 = gTPDONr_APT), (__MW_INSTRUM_NODE_752(__mw_tmp_for_expr_22, 1), (__mw_tmp_for_expr_22 >= 1))))) 
{ 
gTPDONr_APT = (0); 
}  } { 

if (__MW_INSTRUM_NODE_755(__MW_INSTRUM_NODE_757(((__mw_tmp_for_expr_23 = ((gTPDOConfig_APT)[gTPDONr_APT]).event_time), (__MW_INSTRUM_NODE_759(__mw_tmp_for_expr_23, 0), (__mw_tmp_for_expr_23 != 0)))) && (__MW_INSTRUM_NODE_762((__MW_INSTRUM_NODE_764(), CANOpenHW_IsTimeExpired_APT(((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_765(), memcpy((((gTPDOConfig_APT)[gTPDONr_APT]).CAN).BUF, ((gTPDOConfig_APT)[gTPDONr_APT]).pData, (((gTPDOConfig_APT)[gTPDONr_APT]).CAN).LEN); 
__MW_INSTRUM_NODE_766(), TransmitPDO_APT(gTPDONr_APT, txID, txDLC, txData); __MW_INSTRUM_NODE_767(); 
return; 
}  } 
#line 935
}  } { 



if (__MW_INSTRUM_NODE_768(((__mw_tmp_for_expr_24 = gCANOPENConfig_APT.heartbeat_time), (__MW_INSTRUM_NODE_770(__mw_tmp_for_expr_24, 0), (__mw_tmp_for_expr_24 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_773((__MW_INSTRUM_NODE_775(), CANOpenHW_IsTimeExpired_APT(gCANOPENConfig_APT.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_776(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_777(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_778(); 
} 

void CANOpenSlave_ProcessStack_APT(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_36(); __MW_INSTRUM_NODE_779(); { 
if (__MW_INSTRUM_NODE_780(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_782(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_785(((__mw_tmp_for_expr_2 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_787(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue_APT.in + 1) : 0; { 
if (__MW_INSTRUM_NODE_790(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_792(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG_APT *d = &((can_rx_queue_APT.msg)[can_rx_queue_APT.in]); 
__MW_INSTRUM_NODE_795(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue_APT.in = n; 
}  } 
#line 967
}  } 
__MW_INSTRUM_NODE_796(), CANOpenSlave_ProcessStackAsyncRx_APT(txID, txDLC, txData); __MW_INSTRUM_NODE_797(); 
} 

void CANOpenSlave_GetRPDO_APT(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_37(); __MW_INSTRUM_NODE_798(); 
__MW_INSTRUM_NODE_799(), memcpy(data, ((gRPDOConfig_APT)[no]).pData, ((gRPDOConfig_APT)[no]).LEN); __MW_INSTRUM_NODE_800(); 
} 
void CANOpenSlave_SetTPDO_APT(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_38(); __MW_INSTRUM_NODE_801(); 
__MW_INSTRUM_NODE_802(), memcpy(((gTPDOConfig_APT)[no]).pData, data, 8); __MW_INSTRUM_NODE_803(); 
} 
