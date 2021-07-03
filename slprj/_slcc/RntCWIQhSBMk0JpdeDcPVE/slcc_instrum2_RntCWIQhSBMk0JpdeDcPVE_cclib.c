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

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_477 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_477() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_477 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_479(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(479U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(480U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_479(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(479U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(480U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_484(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(484U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(485U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_484(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(484U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(485U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_477(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(477U), __MW_INSTRUM_RECORD_COMBINATION_HIT_477(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(478U), __MW_INSTRUM_RECORD_COMBINATION_HIT_477(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_477(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(477U), __MW_INSTRUM_RECORD_COMBINATION_HIT_477(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(478U), __MW_INSTRUM_RECORD_COMBINATION_HIT_477(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_519 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_519() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_519 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_521(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(521U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(522U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_521(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(521U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(522U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_526(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(526U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(527U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_526(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(526U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(527U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_519(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(519U), __MW_INSTRUM_RECORD_COMBINATION_HIT_519(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(520U), __MW_INSTRUM_RECORD_COMBINATION_HIT_519(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_519(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(519U), __MW_INSTRUM_RECORD_COMBINATION_HIT_519(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(520U), __MW_INSTRUM_RECORD_COMBINATION_HIT_519(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_548 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_548() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_548 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_550(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(550U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(551U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_550(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(550U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(551U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_555(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(555U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(556U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_555(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(555U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(556U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_548(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(548U), __MW_INSTRUM_RECORD_COMBINATION_HIT_548(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(549U), __MW_INSTRUM_RECORD_COMBINATION_HIT_548(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_548(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(548U), __MW_INSTRUM_RECORD_COMBINATION_HIT_548(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(549U), __MW_INSTRUM_RECORD_COMBINATION_HIT_548(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_570 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_570() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_570 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_572(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(572U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(573U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_572(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(572U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(573U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_577(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(577U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(578U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_577(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(577U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(578U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_570(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(570U), __MW_INSTRUM_RECORD_COMBINATION_HIT_570(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(571U), __MW_INSTRUM_RECORD_COMBINATION_HIT_570(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_570(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(570U), __MW_INSTRUM_RECORD_COMBINATION_HIT_570(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(571U), __MW_INSTRUM_RECORD_COMBINATION_HIT_570(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_617 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_617() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_617 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_619(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(619U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(620U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_619(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(619U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(620U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_624(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(624U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(625U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_624(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(624U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(625U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_617(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(617U), __MW_INSTRUM_RECORD_COMBINATION_HIT_617(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(618U), __MW_INSTRUM_RECORD_COMBINATION_HIT_617(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_617(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(617U), __MW_INSTRUM_RECORD_COMBINATION_HIT_617(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(618U), __MW_INSTRUM_RECORD_COMBINATION_HIT_617(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_665 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_665() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_665 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_667(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(667U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(668U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_667(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(667U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(668U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_672(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(672U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(673U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_672(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(672U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(673U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_665(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(665U), __MW_INSTRUM_RECORD_COMBINATION_HIT_665(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(666U), __MW_INSTRUM_RECORD_COMBINATION_HIT_665(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_665(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(665U), __MW_INSTRUM_RECORD_COMBINATION_HIT_665(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(666U), __MW_INSTRUM_RECORD_COMBINATION_HIT_665(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_677 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_677() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_677 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_679(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(679U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(680U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_679(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(679U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(680U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_684(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(684U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(685U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_684(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(684U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(685U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_677(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(677U), __MW_INSTRUM_RECORD_COMBINATION_HIT_677(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(678U), __MW_INSTRUM_RECORD_COMBINATION_HIT_677(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_677(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(677U), __MW_INSTRUM_RECORD_COMBINATION_HIT_677(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(678U), __MW_INSTRUM_RECORD_COMBINATION_HIT_677(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_722 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_722() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_722 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_724(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(724U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(725U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_724(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(724U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(725U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_729(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(729U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(730U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_729(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(729U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(730U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_722(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(722U), __MW_INSTRUM_RECORD_COMBINATION_HIT_722(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(723U), __MW_INSTRUM_RECORD_COMBINATION_HIT_722(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_722(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(722U), __MW_INSTRUM_RECORD_COMBINATION_HIT_722(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(723U), __MW_INSTRUM_RECORD_COMBINATION_HIT_722(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_759 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_759() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_759 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_761(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(761U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(762U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_761(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(761U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(762U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_766(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(766U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(767U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_766(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(766U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(767U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_759(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(759U), __MW_INSTRUM_RECORD_COMBINATION_HIT_759(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(760U), __MW_INSTRUM_RECORD_COMBINATION_HIT_759(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_759(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(759U), __MW_INSTRUM_RECORD_COMBINATION_HIT_759(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(760U), __MW_INSTRUM_RECORD_COMBINATION_HIT_759(), 0) : 0))
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
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_477 = 0; 
#define __MW_INSTRUM_FCN_ENTER_31() 
#define __MW_INSTRUM_FCN_ENTER_32() 
#define __MW_INSTRUM_FCN_ENTER_33() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_519 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_548 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_570 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_617 = 0; 
#define __MW_INSTRUM_FCN_ENTER_34() 
#define __MW_INSTRUM_FCN_ENTER_35() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_665 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_677 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_722 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_759 = 0; 
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(412U))
#define __MW_INSTRUM_NODE_413() \
  (__MW_INSTRUM_RECORD_HIT(413U))
#define __MW_INSTRUM_NODE_414() \
  (__MW_INSTRUM_RECORD_HIT(414U))
#define __MW_INSTRUM_NODE_415() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(435U))
#define __MW_INSTRUM_NODE_436() \
  (__MW_INSTRUM_RECORD_HIT(436U))
#define __MW_INSTRUM_NODE_437() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(463U))
#define __MW_INSTRUM_NODE_464() \
  (__MW_INSTRUM_RECORD_HIT(464U))
#define __MW_INSTRUM_NODE_465() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(465U))
#define __MW_INSTRUM_NODE_466() \
  (__MW_INSTRUM_RECORD_HIT(466U))
#define __MW_INSTRUM_NODE_467() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(474U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_475(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(475U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(476U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_475(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(475U), 1) : (__MW_INSTRUM_RECORD_HIT(476U), 0))
#endif
#define __MW_INSTRUM_NODE_481(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(481U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(482U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(483U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_486(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(486U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(487U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(488U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_489() \
  (__MW_INSTRUM_RECORD_HIT(489U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_490(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(490U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(491U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_490(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(490U), 1) : (__MW_INSTRUM_RECORD_HIT(491U), 0))
#endif
#define __MW_INSTRUM_NODE_492(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(492U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(493U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(494U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_495(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(495U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(496U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_495(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(495U), 1) : (__MW_INSTRUM_RECORD_HIT(496U), 0))
#endif
#define __MW_INSTRUM_NODE_497(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(497U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(498U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(499U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_500(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(500U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(501U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_500(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(500U), 1) : (__MW_INSTRUM_RECORD_HIT(501U), 0))
#endif
#define __MW_INSTRUM_NODE_502(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(502U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(503U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(504U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_505() \
  (__MW_INSTRUM_RECORD_HIT(505U))
#define __MW_INSTRUM_NODE_506() \
  (__MW_INSTRUM_RECORD_HIT(506U))
#define __MW_INSTRUM_NODE_507() \
  (__MW_INSTRUM_RECORD_HIT(507U))
#define __MW_INSTRUM_NODE_508() \
  (__MW_INSTRUM_RECORD_HIT(508U))
#define __MW_INSTRUM_NODE_509() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(509U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_510(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(510U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(511U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_510(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(510U), 1) : (__MW_INSTRUM_RECORD_HIT(511U), 0))
#endif
#define __MW_INSTRUM_NODE_512() \
  (__MW_INSTRUM_RECORD_HIT(512U))
#define __MW_INSTRUM_NODE_513() \
  (__MW_INSTRUM_RECORD_HIT(513U))
#define __MW_INSTRUM_NODE_514() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(514U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_515(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(515U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(516U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_515(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(515U), 1) : (__MW_INSTRUM_RECORD_HIT(516U), 0))
#endif
#define __MW_INSTRUM_NODE_517() \
  (__MW_INSTRUM_RECORD_HIT(517U))
#define __MW_INSTRUM_NODE_518() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(518U))
#define __MW_INSTRUM_NODE_523(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(523U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(524U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(525U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_528(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(528U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(529U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(530U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_531() \
  (__MW_INSTRUM_RECORD_HIT(531U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_532(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(532U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(533U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_532(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(532U), 1) : (__MW_INSTRUM_RECORD_HIT(533U), 0))
#endif
#define __MW_INSTRUM_NODE_534(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(534U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(535U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(536U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_537(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(537U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(538U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_537(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(537U), 1) : (__MW_INSTRUM_RECORD_HIT(538U), 0))
#endif
#define __MW_INSTRUM_NODE_539(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(539U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(540U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(541U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_542() \
  (__MW_INSTRUM_RECORD_HIT(542U))
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
#define __MW_INSTRUM_NODE_552(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(552U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(553U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(554U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_557(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(557U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(558U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(559U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_560(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(560U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(561U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_560(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(560U), 1) : (__MW_INSTRUM_RECORD_HIT(561U), 0))
#endif
#define __MW_INSTRUM_NODE_562(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(562U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(563U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(564U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_565() \
  (__MW_INSTRUM_RECORD_HIT(565U))
#define __MW_INSTRUM_NODE_566() \
  (__MW_INSTRUM_RECORD_HIT(566U))
#define __MW_INSTRUM_NODE_567() \
  (__MW_INSTRUM_RECORD_HIT(567U))
#define __MW_INSTRUM_NODE_568() \
  (__MW_INSTRUM_RECORD_HIT(568U))
#define __MW_INSTRUM_NODE_569() \
  (__MW_INSTRUM_RECORD_HIT(569U))
#define __MW_INSTRUM_NODE_574(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(574U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(575U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(576U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_579(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(579U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(580U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(581U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_582(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(582U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(583U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_582(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(582U), 1) : (__MW_INSTRUM_RECORD_HIT(583U), 0))
#endif
#define __MW_INSTRUM_NODE_584(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(584U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(585U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(586U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_587() \
  (__MW_INSTRUM_RECORD_HIT(587U))
#define __MW_INSTRUM_NODE_588() \
  (__MW_INSTRUM_RECORD_HIT(588U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_589(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(589U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(590U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_589(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(589U), 1) : (__MW_INSTRUM_RECORD_HIT(590U), 0))
#endif
#define __MW_INSTRUM_NODE_591(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(591U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(592U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(593U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_594() \
  (__MW_INSTRUM_RECORD_HIT(594U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_601(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(601U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(602U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_601(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(601U), 1) : (__MW_INSTRUM_RECORD_HIT(602U), 0))
#endif
#define __MW_INSTRUM_NODE_603(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(603U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(604U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(605U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_606(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(606U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(607U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_606(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(606U), 1) : (__MW_INSTRUM_RECORD_HIT(607U), 0))
#endif
#define __MW_INSTRUM_NODE_608(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(608U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(609U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(610U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_611() \
  (__MW_INSTRUM_RECORD_HIT(611U))
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
#define __MW_INSTRUM_NODE_621(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(621U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(622U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(623U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_626(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(626U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(627U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(628U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_629(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(629U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(630U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_629(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(629U), 1) : (__MW_INSTRUM_RECORD_HIT(630U), 0))
#endif
#define __MW_INSTRUM_NODE_631(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(631U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(632U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(633U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_634() \
  (__MW_INSTRUM_RECORD_HIT(634U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_642(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(642U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(643U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_642(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(642U), 1) : (__MW_INSTRUM_RECORD_HIT(643U), 0))
#endif
#define __MW_INSTRUM_NODE_644(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(644U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(645U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(646U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_647() \
  (__MW_INSTRUM_RECORD_HIT(647U))
#define __MW_INSTRUM_NODE_648() \
  (__MW_INSTRUM_RECORD_HIT(648U))
#define __MW_INSTRUM_NODE_649() \
  (__MW_INSTRUM_RECORD_HIT(649U))
#define __MW_INSTRUM_NODE_650() \
  (__MW_INSTRUM_RECORD_HIT(650U))
#define __MW_INSTRUM_NODE_651() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(651U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_652(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(652U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(653U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_652(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(652U), 1) : (__MW_INSTRUM_RECORD_HIT(653U), 0))
#endif
#define __MW_INSTRUM_NODE_653() \
  (__MW_INSTRUM_RECORD_HIT(653U))
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(659U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_660(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(660U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(661U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_660(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(660U), 1) : (__MW_INSTRUM_RECORD_HIT(661U), 0))
#endif
#define __MW_INSTRUM_NODE_662(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(662U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(663U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(664U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_669(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(669U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(670U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(671U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_674(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(674U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(675U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(676U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_681(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(681U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(682U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(683U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_686(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(686U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(687U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(688U) : (void) 0))) : (void) 0))
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
#define __MW_INSTRUM_NODE_694() \
  (__MW_INSTRUM_RECORD_HIT(694U))
#define __MW_INSTRUM_NODE_695() \
  (__MW_INSTRUM_RECORD_HIT(695U))
#define __MW_INSTRUM_NODE_696() \
  (__MW_INSTRUM_RECORD_HIT(696U))
#define __MW_INSTRUM_NODE_697() \
  (__MW_INSTRUM_RECORD_HIT(697U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_698(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(698U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(699U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_698(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(698U), 1) : (__MW_INSTRUM_RECORD_HIT(699U), 0))
#endif
#define __MW_INSTRUM_NODE_700(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(700U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(701U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(702U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_703() \
  (__MW_INSTRUM_RECORD_HIT(703U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_704(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(704U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(705U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_704(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(704U), 1) : (__MW_INSTRUM_RECORD_HIT(705U), 0))
#endif
#define __MW_INSTRUM_NODE_706(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(706U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(707U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(708U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_709(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(709U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(710U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_709(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(709U), 1) : (__MW_INSTRUM_RECORD_HIT(710U), 0))
#endif
#define __MW_INSTRUM_NODE_711(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(711U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(712U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(713U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_714() \
  (__MW_INSTRUM_RECORD_HIT(714U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_715(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(715U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(716U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_715(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(715U), 1) : (__MW_INSTRUM_RECORD_HIT(716U), 0))
#endif
#define __MW_INSTRUM_NODE_717(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(717U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(718U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(719U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_720(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(720U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(721U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_720(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(720U), 1) : (__MW_INSTRUM_RECORD_HIT(721U), 0))
#endif
#define __MW_INSTRUM_NODE_726(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(726U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(727U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(728U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_731(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(731U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(732U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(733U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_734() \
  (__MW_INSTRUM_RECORD_HIT(734U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_735(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(735U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(736U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_735(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(735U), 1) : (__MW_INSTRUM_RECORD_HIT(736U), 0))
#endif
#define __MW_INSTRUM_NODE_737(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(737U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(738U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(739U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_740(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(740U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(741U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_740(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(740U), 1) : (__MW_INSTRUM_RECORD_HIT(741U), 0))
#endif
#define __MW_INSTRUM_NODE_742(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(742U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(743U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(744U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_745() \
  (__MW_INSTRUM_RECORD_HIT(745U))
#define __MW_INSTRUM_NODE_746() \
  (__MW_INSTRUM_RECORD_HIT(746U))
#define __MW_INSTRUM_NODE_747() \
  (__MW_INSTRUM_RECORD_HIT(747U))
#define __MW_INSTRUM_NODE_748() \
  (__MW_INSTRUM_RECORD_HIT(748U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_749(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(749U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(750U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_749(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(749U), 1) : (__MW_INSTRUM_RECORD_HIT(750U), 0))
#endif
#define __MW_INSTRUM_NODE_751(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(751U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(752U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(753U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_754(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(754U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(755U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_754(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(754U), 1) : (__MW_INSTRUM_RECORD_HIT(755U), 0))
#endif
#define __MW_INSTRUM_NODE_756(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(756U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(757U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(758U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_763(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(763U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(764U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(765U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_768() \
  (__MW_INSTRUM_RECORD_HIT(768U))
#define __MW_INSTRUM_NODE_769() \
  (__MW_INSTRUM_RECORD_HIT(769U))
#define __MW_INSTRUM_NODE_770() \
  (__MW_INSTRUM_RECORD_HIT(770U))
#define __MW_INSTRUM_NODE_771() \
  (__MW_INSTRUM_RECORD_HIT(771U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_772(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(772U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(773U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_772(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(772U), 1) : (__MW_INSTRUM_RECORD_HIT(773U), 0))
#endif
#define __MW_INSTRUM_NODE_774(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(774U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(775U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(776U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_777(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(777U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(778U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_777(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(777U), 1) : (__MW_INSTRUM_RECORD_HIT(778U), 0))
#endif
#define __MW_INSTRUM_NODE_779() \
  (__MW_INSTRUM_RECORD_HIT(779U))
#define __MW_INSTRUM_NODE_780() \
  (__MW_INSTRUM_RECORD_HIT(780U))
#define __MW_INSTRUM_NODE_781() \
  (__MW_INSTRUM_RECORD_HIT(781U))
#define __MW_INSTRUM_NODE_782() \
  (__MW_INSTRUM_RECORD_HIT(782U))
#define __MW_INSTRUM_NODE_783() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(783U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_784(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(784U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(785U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_784(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(784U), 1) : (__MW_INSTRUM_RECORD_HIT(785U), 0))
#endif
#define __MW_INSTRUM_NODE_786(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(786U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(787U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(788U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_789(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(789U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(790U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_789(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(789U), 1) : (__MW_INSTRUM_RECORD_HIT(790U), 0))
#endif
#define __MW_INSTRUM_NODE_791(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(791U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(792U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(793U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_794(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(794U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(795U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_794(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(794U), 1) : (__MW_INSTRUM_RECORD_HIT(795U), 0))
#endif
#define __MW_INSTRUM_NODE_796(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(796U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(797U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(798U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_799() \
  (__MW_INSTRUM_RECORD_HIT(799U))
#define __MW_INSTRUM_NODE_800() \
  (__MW_INSTRUM_RECORD_HIT(800U))
#define __MW_INSTRUM_NODE_801() \
  (__MW_INSTRUM_RECORD_HIT(801U))
#define __MW_INSTRUM_NODE_802() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(802U))
#define __MW_INSTRUM_NODE_803() \
  (__MW_INSTRUM_RECORD_HIT(803U))
#define __MW_INSTRUM_NODE_804() \
  (__MW_INSTRUM_RECORD_HIT(804U))
#define __MW_INSTRUM_NODE_805() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(477)))), \
   __MW_INSTRUM_RECORD_HIT(805U))
#define __MW_INSTRUM_NODE_806() \
  (__MW_INSTRUM_RECORD_HIT(806U))
#define __MW_INSTRUM_NODE_807() \
  (__MW_INSTRUM_RECORD_HIT(807U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_479CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_479(...) (__MW_INSTRUM_RECORD_HIT_479CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_479(exp) (__MW_INSTRUM_RECORD_HIT_479CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_484CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_484(...) (__MW_INSTRUM_RECORD_HIT_484CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_484(exp) (__MW_INSTRUM_RECORD_HIT_484CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_477DA_479_484Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_477(...) (__MW_INSTRUM_RECORD_HIT_477DA_479_484Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_477(exp) (__MW_INSTRUM_RECORD_HIT_477DA_479_484Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_521CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_521(...) (__MW_INSTRUM_RECORD_HIT_521CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_521(exp) (__MW_INSTRUM_RECORD_HIT_521CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_526CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_526(...) (__MW_INSTRUM_RECORD_HIT_526CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_526(exp) (__MW_INSTRUM_RECORD_HIT_526CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_519DO_521_526Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_519(...) (__MW_INSTRUM_RECORD_HIT_519DO_521_526Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_519(exp) (__MW_INSTRUM_RECORD_HIT_519DO_521_526Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_550CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_550(...) (__MW_INSTRUM_RECORD_HIT_550CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_550(exp) (__MW_INSTRUM_RECORD_HIT_550CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_555CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_555(...) (__MW_INSTRUM_RECORD_HIT_555CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_555(exp) (__MW_INSTRUM_RECORD_HIT_555CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_548DA_550_555Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_548(...) (__MW_INSTRUM_RECORD_HIT_548DA_550_555Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_548(exp) (__MW_INSTRUM_RECORD_HIT_548DA_550_555Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_572CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_572(...) (__MW_INSTRUM_RECORD_HIT_572CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_572(exp) (__MW_INSTRUM_RECORD_HIT_572CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_577CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_577(...) (__MW_INSTRUM_RECORD_HIT_577CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_577(exp) (__MW_INSTRUM_RECORD_HIT_577CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_570DA_572_577Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_570(...) (__MW_INSTRUM_RECORD_HIT_570DA_572_577Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_570(exp) (__MW_INSTRUM_RECORD_HIT_570DA_572_577Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_619CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_619(...) (__MW_INSTRUM_RECORD_HIT_619CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_619(exp) (__MW_INSTRUM_RECORD_HIT_619CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_624CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_624(...) (__MW_INSTRUM_RECORD_HIT_624CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_624(exp) (__MW_INSTRUM_RECORD_HIT_624CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_617DA_619_624Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_617(...) (__MW_INSTRUM_RECORD_HIT_617DA_619_624Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_617(exp) (__MW_INSTRUM_RECORD_HIT_617DA_619_624Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_667CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_667(...) (__MW_INSTRUM_RECORD_HIT_667CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_667(exp) (__MW_INSTRUM_RECORD_HIT_667CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_672CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_672(...) (__MW_INSTRUM_RECORD_HIT_672CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_672(exp) (__MW_INSTRUM_RECORD_HIT_672CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_665DA_667_672Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_665(...) (__MW_INSTRUM_RECORD_HIT_665DA_667_672Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_665(exp) (__MW_INSTRUM_RECORD_HIT_665DA_667_672Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_679CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_679(...) (__MW_INSTRUM_RECORD_HIT_679CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_679(exp) (__MW_INSTRUM_RECORD_HIT_679CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_684CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_684(...) (__MW_INSTRUM_RECORD_HIT_684CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_684(exp) (__MW_INSTRUM_RECORD_HIT_684CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_677DO_679_684Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_677(...) (__MW_INSTRUM_RECORD_HIT_677DO_679_684Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_677(exp) (__MW_INSTRUM_RECORD_HIT_677DO_679_684Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_724CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_724(...) (__MW_INSTRUM_RECORD_HIT_724CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_724(exp) (__MW_INSTRUM_RECORD_HIT_724CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_729CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_729(...) (__MW_INSTRUM_RECORD_HIT_729CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_729(exp) (__MW_INSTRUM_RECORD_HIT_729CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_722DA_724_729Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_722(...) (__MW_INSTRUM_RECORD_HIT_722DA_724_729Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_722(exp) (__MW_INSTRUM_RECORD_HIT_722DA_724_729Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_761CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_761(...) (__MW_INSTRUM_RECORD_HIT_761CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_761(exp) (__MW_INSTRUM_RECORD_HIT_761CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_766CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_766(...) (__MW_INSTRUM_RECORD_HIT_766CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_766(exp) (__MW_INSTRUM_RECORD_HIT_766CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_759DA_761_766Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_759(...) (__MW_INSTRUM_RECORD_HIT_759DA_761_766Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_759(exp) (__MW_INSTRUM_RECORD_HIT_759DA_761_766Z_RntCWIQhSBMk0JpdeDcPVE(exp))
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


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_473XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_473() __MW_INSTRUM_RECORD_HIT_473XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_474EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_474() __MW_INSTRUM_RECORD_HIT_474EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_475DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_475(...) (__MW_INSTRUM_RECORD_HIT_475DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_475(exp) (__MW_INSTRUM_RECORD_HIT_475DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_481IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_481(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_481IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_486IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_486(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_486IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_489XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_489() __MW_INSTRUM_RECORD_HIT_489XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_490DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_490(...) (__MW_INSTRUM_RECORD_HIT_490DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_490(exp) (__MW_INSTRUM_RECORD_HIT_490DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_492IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_492(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_492IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_495DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_495(...) (__MW_INSTRUM_RECORD_HIT_495DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_495(exp) (__MW_INSTRUM_RECORD_HIT_495DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_497IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_497(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_497IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_500DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_500(...) (__MW_INSTRUM_RECORD_HIT_500DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_500(exp) (__MW_INSTRUM_RECORD_HIT_500DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_502IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_502(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_502IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_505XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_505() __MW_INSTRUM_RECORD_HIT_505XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_506() ((void)0)


#define __MW_INSTRUM_NODE_507() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_508XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_508() __MW_INSTRUM_RECORD_HIT_508XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_509EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_509() __MW_INSTRUM_RECORD_HIT_509EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_510DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_510(...) (__MW_INSTRUM_RECORD_HIT_510DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_510(exp) (__MW_INSTRUM_RECORD_HIT_510DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_512() ((void)0)


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
int __MW_INSTRUM_RECORD_HIT_515DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_515(...) (__MW_INSTRUM_RECORD_HIT_515DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_515(exp) (__MW_INSTRUM_RECORD_HIT_515DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

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
void __MW_INSTRUM_RECORD_HIT_523IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_523(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_523IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_528IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_528(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_528IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_531() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_532DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_532(...) (__MW_INSTRUM_RECORD_HIT_532DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_532(exp) (__MW_INSTRUM_RECORD_HIT_532DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_534IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_534(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_534IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_537DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_537(...) (__MW_INSTRUM_RECORD_HIT_537DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_537(exp) (__MW_INSTRUM_RECORD_HIT_537DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_539IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_539(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_539IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_542() ((void)0)


#define __MW_INSTRUM_NODE_543() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_544XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_544() __MW_INSTRUM_RECORD_HIT_544XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_545() ((void)0)


#define __MW_INSTRUM_NODE_546() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_547XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_547() __MW_INSTRUM_RECORD_HIT_547XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_552IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_552(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_552IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_557IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_557(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_557IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_560DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_560(...) (__MW_INSTRUM_RECORD_HIT_560DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_560(exp) (__MW_INSTRUM_RECORD_HIT_560DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_562IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_562(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_562IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_565() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_566XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_566() __MW_INSTRUM_RECORD_HIT_566XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_567() ((void)0)


#define __MW_INSTRUM_NODE_568() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_569XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_569() __MW_INSTRUM_RECORD_HIT_569XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_574IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_574(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_574IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_579IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_579(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_579IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_582DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_582(...) (__MW_INSTRUM_RECORD_HIT_582DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_582(exp) (__MW_INSTRUM_RECORD_HIT_582DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_584IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_584(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_584IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_587() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_588XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_588() __MW_INSTRUM_RECORD_HIT_588XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_589DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_589(...) (__MW_INSTRUM_RECORD_HIT_589DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_589(exp) (__MW_INSTRUM_RECORD_HIT_589DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_591IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_591(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_591IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_594() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_595XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_595() __MW_INSTRUM_RECORD_HIT_595XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_596() ((void)0)


#define __MW_INSTRUM_NODE_597() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_598XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_598() __MW_INSTRUM_RECORD_HIT_598XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_599() ((void)0)


#define __MW_INSTRUM_NODE_600() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_601DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_601(...) (__MW_INSTRUM_RECORD_HIT_601DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_601(exp) (__MW_INSTRUM_RECORD_HIT_601DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_603IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_603(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_603IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_606DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_606(...) (__MW_INSTRUM_RECORD_HIT_606DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_606(exp) (__MW_INSTRUM_RECORD_HIT_606DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_608IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_608(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_608IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_611() ((void)0)


#define __MW_INSTRUM_NODE_612() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_613XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_613() __MW_INSTRUM_RECORD_HIT_613XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_614() ((void)0)


#define __MW_INSTRUM_NODE_615() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_616XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_616() __MW_INSTRUM_RECORD_HIT_616XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_621IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_621(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_621IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_626IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_626(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_626IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_629DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_629(...) (__MW_INSTRUM_RECORD_HIT_629DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_629(exp) (__MW_INSTRUM_RECORD_HIT_629DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_631IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_631(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_631IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_634() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_635XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_635() __MW_INSTRUM_RECORD_HIT_635XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_636() ((void)0)


#define __MW_INSTRUM_NODE_637() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_638XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_638() __MW_INSTRUM_RECORD_HIT_638XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_639() ((void)0)


#define __MW_INSTRUM_NODE_640() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_641XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_641() __MW_INSTRUM_RECORD_HIT_641XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_642DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_642(...) (__MW_INSTRUM_RECORD_HIT_642DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_642(exp) (__MW_INSTRUM_RECORD_HIT_642DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_644IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_644(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_644IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_647() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_648XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_648() __MW_INSTRUM_RECORD_HIT_648XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_649() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_650XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_650() __MW_INSTRUM_RECORD_HIT_650XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_651EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_651() __MW_INSTRUM_RECORD_HIT_651EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_652DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_652(...) (__MW_INSTRUM_RECORD_HIT_652DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_652(exp) (__MW_INSTRUM_RECORD_HIT_652DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_653() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_654DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_654() __MW_INSTRUM_RECORD_HIT_654DZ_RntCWIQhSBMk0JpdeDcPVE()

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
void __MW_INSTRUM_RECORD_HIT_658XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_658() __MW_INSTRUM_RECORD_HIT_658XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_659EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_659() __MW_INSTRUM_RECORD_HIT_659EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_660DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_660(...) (__MW_INSTRUM_RECORD_HIT_660DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_660(exp) (__MW_INSTRUM_RECORD_HIT_660DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_662IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_662(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_662IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_669IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_669(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_669IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_674IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_674(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_674IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_681IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_681(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_681IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_686IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_686(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_686IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#define __MW_INSTRUM_NODE_694() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_695DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_695() __MW_INSTRUM_RECORD_HIT_695DZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_696() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_697DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_697() __MW_INSTRUM_RECORD_HIT_697DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_698DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_698(...) (__MW_INSTRUM_RECORD_HIT_698DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_698(exp) (__MW_INSTRUM_RECORD_HIT_698DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_700IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_700(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_700IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_703XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_703() __MW_INSTRUM_RECORD_HIT_703XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_704DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_704(...) (__MW_INSTRUM_RECORD_HIT_704DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_704(exp) (__MW_INSTRUM_RECORD_HIT_704DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_706IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_706(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_706IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_709DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_709(...) (__MW_INSTRUM_RECORD_HIT_709DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_709(exp) (__MW_INSTRUM_RECORD_HIT_709DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_711IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_711(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_711IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_714() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_715DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_715(...) (__MW_INSTRUM_RECORD_HIT_715DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_715(exp) (__MW_INSTRUM_RECORD_HIT_715DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_717IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_717(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_717IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_720DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_720(...) (__MW_INSTRUM_RECORD_HIT_720DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_720(exp) (__MW_INSTRUM_RECORD_HIT_720DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_726IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_726(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_726IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_731IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_731(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_731IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_734() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_735DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_735(...) (__MW_INSTRUM_RECORD_HIT_735DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_735(exp) (__MW_INSTRUM_RECORD_HIT_735DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_737IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_737(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_737IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_740DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_740(...) (__MW_INSTRUM_RECORD_HIT_740DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_740(exp) (__MW_INSTRUM_RECORD_HIT_740DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_742IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_742(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_742IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_745() ((void)0)


#define __MW_INSTRUM_NODE_746() ((void)0)


#define __MW_INSTRUM_NODE_747() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_748XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_748() __MW_INSTRUM_RECORD_HIT_748XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_749DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_749(...) (__MW_INSTRUM_RECORD_HIT_749DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_749(exp) (__MW_INSTRUM_RECORD_HIT_749DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_751IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_751(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_751IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_754DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_754(...) (__MW_INSTRUM_RECORD_HIT_754DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_754(exp) (__MW_INSTRUM_RECORD_HIT_754DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_756IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_756(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_756IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_763IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_763(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_763IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_768() ((void)0)


#define __MW_INSTRUM_NODE_769() ((void)0)


#define __MW_INSTRUM_NODE_770() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_771XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_771() __MW_INSTRUM_RECORD_HIT_771XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_772DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_772(...) (__MW_INSTRUM_RECORD_HIT_772DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_772(exp) (__MW_INSTRUM_RECORD_HIT_772DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_774IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_774(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_774IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_777DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_777(...) (__MW_INSTRUM_RECORD_HIT_777DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_777(exp) (__MW_INSTRUM_RECORD_HIT_777DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_779() ((void)0)


#define __MW_INSTRUM_NODE_780() ((void)0)


#define __MW_INSTRUM_NODE_781() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_782XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_782() __MW_INSTRUM_RECORD_HIT_782XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_783EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_783() __MW_INSTRUM_RECORD_HIT_783EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_784DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_784(...) (__MW_INSTRUM_RECORD_HIT_784DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_784(exp) (__MW_INSTRUM_RECORD_HIT_784DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_786IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_786(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_786IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_789DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_789(...) (__MW_INSTRUM_RECORD_HIT_789DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_789(exp) (__MW_INSTRUM_RECORD_HIT_789DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_791IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_791(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_791IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_794DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_794(...) (__MW_INSTRUM_RECORD_HIT_794DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_794(exp) (__MW_INSTRUM_RECORD_HIT_794DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_796IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_796(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_796IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_799() ((void)0)


#define __MW_INSTRUM_NODE_800() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_801XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_801() __MW_INSTRUM_RECORD_HIT_801XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_802EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_802() __MW_INSTRUM_RECORD_HIT_802EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_803() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_804XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_804() __MW_INSTRUM_RECORD_HIT_804XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_805EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_805() __MW_INSTRUM_RECORD_HIT_805EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_806() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_807XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_807() __MW_INSTRUM_RECORD_HIT_807XZ_RntCWIQhSBMk0JpdeDcPVE()

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
int16_T AN_01; 
int16_T AN_02; 
int16_T AN_03; 
int16_T AN_04; 
}; 
uint8_T Message[8]; 
} TPDO_test; 
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
#line 237
__MW_INSTRUM_NODE_470(), CANOpenSlave_InitRPDO_APT(1, 0x1c1, 8, &(RPDO01_APT.Message)); 
__MW_INSTRUM_NODE_471(), CANOpenSlave_InitRPDO_APT(2, 0x1c2, 8, &(RPDO02_APT.Message)); 
__MW_INSTRUM_NODE_472(), CANOpenSlave_InitRPDO_APT(3, 0x1c3, 8, &(RPDO03_APT.Message)); __MW_INSTRUM_NODE_473(); 


} 
#line 250
const uint8_T SDOResponseTable_APT[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((6000L >> 0) & (0xff)), ((6000L >> 8) & (0xff)), ((6000L >> 16) & (0xff)), ((6000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 432
uint8_T Search_OD_APT(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_30(); __MW_INSTRUM_NODE_474(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable_APT)[0]); { 
while (__MW_INSTRUM_NODE_475(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_477(__MW_INSTRUM_NODE_479(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_481(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_484(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_486(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_489(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_490(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_492(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_495(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_497(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_500(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_502(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_505(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_506(); 
i++; 
}  } __MW_INSTRUM_NODE_507(); __MW_INSTRUM_NODE_508(); 
return 0xff; } 
} 
#line 528
void Send_SDO_Abort_APT(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_31(); __MW_INSTRUM_NODE_509(); { 
uint8_T i; 
(gTxSDO_APT.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_510(i < 4); i++) 
{ 
(gTxSDO_APT.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_512(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_513(); 
} 


void CopyConstToData_APT(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_32(); __MW_INSTRUM_NODE_514(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_515(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_517(); 
} 



uint8_T Handle_SDO_Request_APT(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_33(); __MW_INSTRUM_NODE_518(); { 

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


if (__MW_INSTRUM_NODE_519(__MW_INSTRUM_NODE_521(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_523(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_526(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_528(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 640
found = (__MW_INSTRUM_NODE_531(), Search_OD_APT(index, subindex)); { 

if (__MW_INSTRUM_NODE_532(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_534(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_537(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_539(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_542(), memcpy(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8]), 8); 
__MW_INSTRUM_NODE_543(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_544(); 
return 1; 
}  } __MW_INSTRUM_NODE_545(); 

__MW_INSTRUM_NODE_546(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_547(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_548(__MW_INSTRUM_NODE_550(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_552(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_555(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_557(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_560(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_562(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_565(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_566(); 
return 1; 
}  } __MW_INSTRUM_NODE_567(); 

__MW_INSTRUM_NODE_568(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_569(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_570(__MW_INSTRUM_NODE_572(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_574(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_577(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_579(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_582(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_584(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4b); 
(gTxSDO_APT.BUF)[4] = (uint8_T)(gCANOPENConfig_APT.heartbeat_time); 
(gTxSDO_APT.BUF)[5] = (uint8_T)((gCANOPENConfig_APT.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_587(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_588(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_589(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_591(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig_APT.heartbeat_time = pData[5]; 
gCANOPENConfig_APT.heartbeat_time = ((gCANOPENConfig_APT.heartbeat_time) << 8) + pData[4]; 
(gTxSDO_APT.BUF)[0] = (0x60); 

(gTxSDO_APT.BUF)[4] = (0); 
(gTxSDO_APT.BUF)[5] = (0); 
(gTxSDO_APT.BUF)[6] = (0); 
(gTxSDO_APT.BUF)[7] = (0); 
__MW_INSTRUM_NODE_594(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_595(); 
return 1; 
}  } __MW_INSTRUM_NODE_596(); 
__MW_INSTRUM_NODE_597(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_598(); 
return 0; 
}  } __MW_INSTRUM_NODE_599(); 


found = (__MW_INSTRUM_NODE_600(), Search_OD_APT(index, subindex)); { 
if (__MW_INSTRUM_NODE_601(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_603(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_606(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_608(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_611(), CopyConstToData_APT(&((gTxSDO_APT.BUF)[0]), &((SDOResponseTable_APT)[found * 8])); 
__MW_INSTRUM_NODE_612(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_613(); 
return 1; 
}  } __MW_INSTRUM_NODE_614(); 

__MW_INSTRUM_NODE_615(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_616(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_617(__MW_INSTRUM_NODE_619(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_621(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_624(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_626(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_629(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_631(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO_APT.BUF)[0] = (0x4f); 
(gTxSDO_APT.BUF)[4] = gCANOPENConfig_APT.error_register; 
__MW_INSTRUM_NODE_634(), CANOpenHW_SendMessage_APT(&((gTxSDO_APT.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_635(); 
return 1; 
}  } __MW_INSTRUM_NODE_636(); 

__MW_INSTRUM_NODE_637(), Send_SDO_Abort_APT(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_638(); 
return 0; 
}  } __MW_INSTRUM_NODE_639(); 
__MW_INSTRUM_NODE_640(), Send_SDO_Abort_APT(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_641(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_642(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_644(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_647(), Send_SDO_Abort_APT(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_648(); 
return 0; 
}  } __MW_INSTRUM_NODE_649(); __MW_INSTRUM_NODE_650(); 
return 1; } 
} 

void SDO_Write_APT(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_34(); __MW_INSTRUM_NODE_651(); { 
char k; 
gTxSDOw_APT.ID = 0x600 + Node_ID; 
gTxSDOw_APT.LEN = (8); 
(gTxSDOw_APT.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw_APT.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw_APT.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw_APT.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_652(k < 4); k++) 
{ (gTxSDOw_APT.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_654(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_655(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_656(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_657(); 
(gTxSDOw_APT.BUF)[4] = (uint8_T)data; 
(gTxSDOw_APT.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw_APT.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw_APT.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_658(); 




} 
#line 781
void CANOpenSlave_ProcessStackAsyncRx_APT(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_35(); __MW_INSTRUM_NODE_659(); { 
uint8_T i; 
gTimCnt_APT++; 
*txDLC = (0); { 



if (__MW_INSTRUM_NODE_660(((__mw_tmp_for_expr_1 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_2 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_662(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 != __mw_tmp_for_expr_2)))))) 
{ 
gRxCAN_APT = &((can_rx_queue_APT.msg)[can_rx_queue_APT.out]); { 




if (__MW_INSTRUM_NODE_665(__MW_INSTRUM_NODE_667(((__mw_tmp_for_expr_3 = gRxCAN_APT->ID), (__MW_INSTRUM_NODE_669(__mw_tmp_for_expr_3, 0), (__mw_tmp_for_expr_3 == 0)))) && __MW_INSTRUM_NODE_672(((__mw_tmp_for_expr_4 = gRxCAN_APT->LEN), (__MW_INSTRUM_NODE_674(__mw_tmp_for_expr_4, 3), (__mw_tmp_for_expr_4 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_677(__MW_INSTRUM_NODE_679(((__mw_tmp_for_expr_5 = (gRxCAN_APT->BUF)[1]), ((__mw_tmp_for_expr_6 = gCANOPENConfig_APT.Node_ID), (__MW_INSTRUM_NODE_681(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6))))) || __MW_INSTRUM_NODE_684(((__mw_tmp_for_expr_7 = (gRxCAN_APT->BUF)[1]), (__MW_INSTRUM_NODE_686(__mw_tmp_for_expr_7, 0), (__mw_tmp_for_expr_7 == 0)))))) 
{ { 
switch ((gRxCAN_APT->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_689(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_690(), Prepare_TPDOs_APT(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_691(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_692(); 
((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_693(); 
__MW_INSTRUM_NODE_694(), CANOpenSlave_ResetApplication_APT(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_695(); 
__MW_INSTRUM_NODE_696(), CANOpenSlave_ResetCommunication_APT(); 
break; 
default:  __MW_INSTRUM_NODE_697(); 
break; 
}  } 

can_rx_queue_APT.out = __MW_INSTRUM_NODE_698(((__mw_tmp_for_expr_8 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_9 = 8 - 1), (__MW_INSTRUM_NODE_700(__mw_tmp_for_expr_8, __mw_tmp_for_expr_9), (__mw_tmp_for_expr_8 < __mw_tmp_for_expr_9))))) ? (can_rx_queue_APT.out + 1) : 0; __MW_INSTRUM_NODE_703(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_704(((__mw_tmp_for_expr_10 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_706(__mw_tmp_for_expr_10, 0x4), (__mw_tmp_for_expr_10 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_709(((__mw_tmp_for_expr_11 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_12 = gCANOPENConfig_APT.Node_ID + 0x600), (__MW_INSTRUM_NODE_711(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 == __mw_tmp_for_expr_12)))))) 
{ 
i = (__MW_INSTRUM_NODE_714(), Handle_SDO_Request_APT(&((gRxCAN_APT->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_715(((__mw_tmp_for_expr_13 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_717(__mw_tmp_for_expr_13, 0x5), (__mw_tmp_for_expr_13 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_720(i < 3)) 
{ { 
if (__MW_INSTRUM_NODE_722(__MW_INSTRUM_NODE_724(((__mw_tmp_for_expr_14 = gRxCAN_APT->ID), ((__mw_tmp_for_expr_15 = ((gRPDOConfig_APT)[i]).ID), (__MW_INSTRUM_NODE_726(__mw_tmp_for_expr_14, __mw_tmp_for_expr_15), (__mw_tmp_for_expr_14 == __mw_tmp_for_expr_15))))) && __MW_INSTRUM_NODE_729(((__mw_tmp_for_expr_16 = gRxCAN_APT->LEN), ((__mw_tmp_for_expr_17 = ((gRPDOConfig_APT)[i]).LEN), (__MW_INSTRUM_NODE_731(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))))) 
{ 
__MW_INSTRUM_NODE_734(), memcpy(((gRPDOConfig_APT)[i]).pData, &((gRxCAN_APT->BUF)[0]), ((gRPDOConfig_APT)[i]).LEN); 
i = (3); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue_APT.out = __MW_INSTRUM_NODE_735(((__mw_tmp_for_expr_18 = can_rx_queue_APT.out), ((__mw_tmp_for_expr_19 = 8 - 1), (__MW_INSTRUM_NODE_737(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 < __mw_tmp_for_expr_19))))) ? (can_rx_queue_APT.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_740(((__mw_tmp_for_expr_20 = gTPDONr_APT), (__MW_INSTRUM_NODE_742(__mw_tmp_for_expr_20, 0xff), (__mw_tmp_for_expr_20 == 0xff))))) 
{ 

gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_745(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 

__MW_INSTRUM_NODE_746(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 

((gCANOPENConfig_APT.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_747(), Prepare_TPDOs_APT(); 




gTPDONr_APT = (1); __MW_INSTRUM_NODE_748(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_749(((__mw_tmp_for_expr_21 = ((gCANOPENConfig_APT.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_751(__mw_tmp_for_expr_21, 0x5), (__mw_tmp_for_expr_21 == 0x5))))) 
{ 
gTPDONr_APT++; { 
if (__MW_INSTRUM_NODE_754(((__mw_tmp_for_expr_22 = gTPDONr_APT), (__MW_INSTRUM_NODE_756(__mw_tmp_for_expr_22, 1), (__mw_tmp_for_expr_22 >= 1))))) 
{ 
gTPDONr_APT = (0); 
}  } { 

if (__MW_INSTRUM_NODE_759(__MW_INSTRUM_NODE_761(((__mw_tmp_for_expr_23 = ((gTPDOConfig_APT)[gTPDONr_APT]).event_time), (__MW_INSTRUM_NODE_763(__mw_tmp_for_expr_23, 0), (__mw_tmp_for_expr_23 != 0)))) && (__MW_INSTRUM_NODE_766((__MW_INSTRUM_NODE_768(), CANOpenHW_IsTimeExpired_APT(((gTPDOConfig_APT)[gTPDONr_APT]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_769(), memcpy((((gTPDOConfig_APT)[gTPDONr_APT]).CAN).BUF, ((gTPDOConfig_APT)[gTPDONr_APT]).pData, (((gTPDOConfig_APT)[gTPDONr_APT]).CAN).LEN); 
__MW_INSTRUM_NODE_770(), TransmitPDO_APT(gTPDONr_APT, txID, txDLC, txData); __MW_INSTRUM_NODE_771(); 
return; 
}  } 
#line 934
}  } { 



if (__MW_INSTRUM_NODE_772(((__mw_tmp_for_expr_24 = gCANOPENConfig_APT.heartbeat_time), (__MW_INSTRUM_NODE_774(__mw_tmp_for_expr_24, 0), (__mw_tmp_for_expr_24 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_777((__MW_INSTRUM_NODE_779(), CANOpenHW_IsTimeExpired_APT(gCANOPENConfig_APT.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_780(), CANOpenHW_SendMessage_APT(&(gCANOPENConfig_APT.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig_APT.heartbeat_timestamp = (__MW_INSTRUM_NODE_781(), CANOpenHW_GetTime_APT()) + gCANOPENConfig_APT.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_782(); 
} 

void CANOpenSlave_ProcessStack_APT(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_36(); __MW_INSTRUM_NODE_783(); { 
if (__MW_INSTRUM_NODE_784(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_786(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_789(((__mw_tmp_for_expr_2 = can_rx_queue_APT.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_791(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue_APT.in + 1) : 0; { 
if (__MW_INSTRUM_NODE_794(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue_APT.out), (__MW_INSTRUM_NODE_796(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG_APT *d = &((can_rx_queue_APT.msg)[can_rx_queue_APT.in]); 
__MW_INSTRUM_NODE_799(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue_APT.in = n; 
}  } 
#line 966
}  } 
__MW_INSTRUM_NODE_800(), CANOpenSlave_ProcessStackAsyncRx_APT(txID, txDLC, txData); __MW_INSTRUM_NODE_801(); 
} 

void CANOpenSlave_GetRPDO_APT(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_37(); __MW_INSTRUM_NODE_802(); 
__MW_INSTRUM_NODE_803(), memcpy(data, ((gRPDOConfig_APT)[no]).pData, ((gRPDOConfig_APT)[no]).LEN); __MW_INSTRUM_NODE_804(); 
} 
void CANOpenSlave_SetTPDO_APT(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_38(); __MW_INSTRUM_NODE_805(); 
__MW_INSTRUM_NODE_806(), memcpy(((gTPDOConfig_APT)[no]).pData, data, 8); __MW_INSTRUM_NODE_807(); 
} 
