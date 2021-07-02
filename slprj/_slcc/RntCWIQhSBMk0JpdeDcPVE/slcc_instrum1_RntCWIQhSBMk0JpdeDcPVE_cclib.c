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

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_77 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_77() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_77 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_79(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(79U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(80U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_79(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(79U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(80U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_84(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(84U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(85U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_84(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(84U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(85U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_77(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(77U), __MW_INSTRUM_RECORD_COMBINATION_HIT_77(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(78U), __MW_INSTRUM_RECORD_COMBINATION_HIT_77(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_77(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(77U), __MW_INSTRUM_RECORD_COMBINATION_HIT_77(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(78U), __MW_INSTRUM_RECORD_COMBINATION_HIT_77(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_119 3U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_119() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_119 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_121(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(121U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(122U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_121(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(121U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(122U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_126(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(126U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(127U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_126(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(126U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(127U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_119(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(119U), __MW_INSTRUM_RECORD_COMBINATION_HIT_119(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(120U), __MW_INSTRUM_RECORD_COMBINATION_HIT_119(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_119(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(119U), __MW_INSTRUM_RECORD_COMBINATION_HIT_119(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(120U), __MW_INSTRUM_RECORD_COMBINATION_HIT_119(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_148 6U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_148() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_148 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_150(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(150U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(151U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_150(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(150U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(151U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_155(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(155U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(156U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_155(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(155U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(156U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_148(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(148U), __MW_INSTRUM_RECORD_COMBINATION_HIT_148(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(149U), __MW_INSTRUM_RECORD_COMBINATION_HIT_148(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_148(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(148U), __MW_INSTRUM_RECORD_COMBINATION_HIT_148(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(149U), __MW_INSTRUM_RECORD_COMBINATION_HIT_148(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_170 9U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_170() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_170 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_172(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(172U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(173U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_172(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(172U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(173U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_177(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(177U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(178U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_177(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(177U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(178U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_170(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(170U), __MW_INSTRUM_RECORD_COMBINATION_HIT_170(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(171U), __MW_INSTRUM_RECORD_COMBINATION_HIT_170(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_170(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(170U), __MW_INSTRUM_RECORD_COMBINATION_HIT_170(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(171U), __MW_INSTRUM_RECORD_COMBINATION_HIT_170(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_217 12U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_217() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_217 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_219(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(219U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(220U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_219(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(219U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(220U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_224(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(224U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(225U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_224(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(224U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(225U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_217(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(217U), __MW_INSTRUM_RECORD_COMBINATION_HIT_217(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(218U), __MW_INSTRUM_RECORD_COMBINATION_HIT_217(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_217(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(217U), __MW_INSTRUM_RECORD_COMBINATION_HIT_217(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(218U), __MW_INSTRUM_RECORD_COMBINATION_HIT_217(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_270 15U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_270() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_270 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_272(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(272U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(273U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_272(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(272U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(273U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_277(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(277U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(278U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_277(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(277U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(278U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_270(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(270U), __MW_INSTRUM_RECORD_COMBINATION_HIT_270(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(271U), __MW_INSTRUM_RECORD_COMBINATION_HIT_270(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_270(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(270U), __MW_INSTRUM_RECORD_COMBINATION_HIT_270(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(271U), __MW_INSTRUM_RECORD_COMBINATION_HIT_270(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_282 18U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_282() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_282 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_284(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(284U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 = 2), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(285U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_284(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(284U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 = 2), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(285U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_289(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(289U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(290U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_289(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(289U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(290U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_282(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(282U), __MW_INSTRUM_RECORD_COMBINATION_HIT_282(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(283U), __MW_INSTRUM_RECORD_COMBINATION_HIT_282(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_282(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(282U), __MW_INSTRUM_RECORD_COMBINATION_HIT_282(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(283U), __MW_INSTRUM_RECORD_COMBINATION_HIT_282(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_327 21U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_327() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_327 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_329(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(329U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(330U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_329(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(329U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(330U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_334(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(334U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(335U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_334(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(334U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(335U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_327(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(327U), __MW_INSTRUM_RECORD_COMBINATION_HIT_327(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(328U), __MW_INSTRUM_RECORD_COMBINATION_HIT_327(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_327(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(327U), __MW_INSTRUM_RECORD_COMBINATION_HIT_327(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(328U), __MW_INSTRUM_RECORD_COMBINATION_HIT_327(), 0) : 0))
#endif

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_363 24U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_363() \
  (++__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_363 + __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_365(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(365U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(366U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_365(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(365U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 = 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(366U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_370(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(370U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(371U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_370(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(370U), (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 += 1), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(371U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_363(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(363U), __MW_INSTRUM_RECORD_COMBINATION_HIT_363(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(364U), __MW_INSTRUM_RECORD_COMBINATION_HIT_363(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_363(expr) \
  ((expr) ? \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(363U), __MW_INSTRUM_RECORD_COMBINATION_HIT_363(), 1) : 1) : \
   ((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(364U), __MW_INSTRUM_RECORD_COMBINATION_HIT_363(), 0) : 0))
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
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_77 = 0; 
#define __MW_INSTRUM_FCN_ENTER_12() 
#define __MW_INSTRUM_FCN_ENTER_13() 
#define __MW_INSTRUM_FCN_ENTER_14() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_119 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_148 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_170 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_217 = 0; 
#define __MW_INSTRUM_FCN_ENTER_15() 
#define __MW_INSTRUM_FCN_ENTER_16() \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_270 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_282 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_327 = 0; \
  unsigned int __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_curr_combination_idx_363 = 0; 
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(24U))
#define __MW_INSTRUM_NODE_25() \
  (__MW_INSTRUM_RECORD_HIT(25U))
#define __MW_INSTRUM_NODE_26() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
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
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(54U))
#define __MW_INSTRUM_NODE_55() \
  (__MW_INSTRUM_RECORD_HIT(55U))
#define __MW_INSTRUM_NODE_56() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(56U))
#define __MW_INSTRUM_NODE_57() \
  (__MW_INSTRUM_RECORD_HIT(57U))
#define __MW_INSTRUM_NODE_58() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(74U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_75(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(75U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(76U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_75(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(75U), 1) : (__MW_INSTRUM_RECORD_HIT(76U), 0))
#endif
#define __MW_INSTRUM_NODE_81(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(81U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(82U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(83U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_86(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(86U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(87U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(88U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_89() \
  (__MW_INSTRUM_RECORD_HIT(89U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_90(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(90U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(91U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_90(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(90U), 1) : (__MW_INSTRUM_RECORD_HIT(91U), 0))
#endif
#define __MW_INSTRUM_NODE_92(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(92U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(93U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(94U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_95(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(95U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(96U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_95(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(95U), 1) : (__MW_INSTRUM_RECORD_HIT(96U), 0))
#endif
#define __MW_INSTRUM_NODE_97(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(97U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(98U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(99U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_100(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(100U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(101U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_100(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(100U), 1) : (__MW_INSTRUM_RECORD_HIT(101U), 0))
#endif
#define __MW_INSTRUM_NODE_102(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(102U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(103U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(104U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_105() \
  (__MW_INSTRUM_RECORD_HIT(105U))
#define __MW_INSTRUM_NODE_106() \
  (__MW_INSTRUM_RECORD_HIT(106U))
#define __MW_INSTRUM_NODE_107() \
  (__MW_INSTRUM_RECORD_HIT(107U))
#define __MW_INSTRUM_NODE_108() \
  (__MW_INSTRUM_RECORD_HIT(108U))
#define __MW_INSTRUM_NODE_109() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(109U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_110(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(110U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(111U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_110(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(110U), 1) : (__MW_INSTRUM_RECORD_HIT(111U), 0))
#endif
#define __MW_INSTRUM_NODE_112() \
  (__MW_INSTRUM_RECORD_HIT(112U))
#define __MW_INSTRUM_NODE_113() \
  (__MW_INSTRUM_RECORD_HIT(113U))
#define __MW_INSTRUM_NODE_114() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(114U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_115(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(115U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(116U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_115(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(115U), 1) : (__MW_INSTRUM_RECORD_HIT(116U), 0))
#endif
#define __MW_INSTRUM_NODE_117() \
  (__MW_INSTRUM_RECORD_HIT(117U))
#define __MW_INSTRUM_NODE_118() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(118U))
#define __MW_INSTRUM_NODE_123(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(123U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(124U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(125U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_128(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(128U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(129U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(130U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_131() \
  (__MW_INSTRUM_RECORD_HIT(131U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_132(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(132U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(133U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_132(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(132U), 1) : (__MW_INSTRUM_RECORD_HIT(133U), 0))
#endif
#define __MW_INSTRUM_NODE_134(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(134U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(135U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(136U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_137(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(137U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(138U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_137(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(137U), 1) : (__MW_INSTRUM_RECORD_HIT(138U), 0))
#endif
#define __MW_INSTRUM_NODE_139(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(139U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(140U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(141U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_142() \
  (__MW_INSTRUM_RECORD_HIT(142U))
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
#define __MW_INSTRUM_NODE_152(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(152U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(153U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(154U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_157(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(157U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(158U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(159U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_160(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(160U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(161U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_160(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(160U), 1) : (__MW_INSTRUM_RECORD_HIT(161U), 0))
#endif
#define __MW_INSTRUM_NODE_162(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(162U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(163U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(164U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_165() \
  (__MW_INSTRUM_RECORD_HIT(165U))
#define __MW_INSTRUM_NODE_166() \
  (__MW_INSTRUM_RECORD_HIT(166U))
#define __MW_INSTRUM_NODE_167() \
  (__MW_INSTRUM_RECORD_HIT(167U))
#define __MW_INSTRUM_NODE_168() \
  (__MW_INSTRUM_RECORD_HIT(168U))
#define __MW_INSTRUM_NODE_169() \
  (__MW_INSTRUM_RECORD_HIT(169U))
#define __MW_INSTRUM_NODE_174(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(174U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(175U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(176U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_179(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(179U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(180U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(181U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_182(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(182U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(183U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_182(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(182U), 1) : (__MW_INSTRUM_RECORD_HIT(183U), 0))
#endif
#define __MW_INSTRUM_NODE_184(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(184U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(185U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(186U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_187() \
  (__MW_INSTRUM_RECORD_HIT(187U))
#define __MW_INSTRUM_NODE_188() \
  (__MW_INSTRUM_RECORD_HIT(188U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_189(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(189U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(190U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_189(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(189U), 1) : (__MW_INSTRUM_RECORD_HIT(190U), 0))
#endif
#define __MW_INSTRUM_NODE_191(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(191U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(192U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(193U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_194() \
  (__MW_INSTRUM_RECORD_HIT(194U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_201(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(201U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(202U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_201(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(201U), 1) : (__MW_INSTRUM_RECORD_HIT(202U), 0))
#endif
#define __MW_INSTRUM_NODE_203(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(203U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(204U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(205U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_206(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(206U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(207U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_206(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(206U), 1) : (__MW_INSTRUM_RECORD_HIT(207U), 0))
#endif
#define __MW_INSTRUM_NODE_208(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(208U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(209U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(210U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_211() \
  (__MW_INSTRUM_RECORD_HIT(211U))
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
#define __MW_INSTRUM_NODE_221(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(221U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(222U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(223U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_226(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(226U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(227U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(228U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_229(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(229U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(230U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_229(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(229U), 1) : (__MW_INSTRUM_RECORD_HIT(230U), 0))
#endif
#define __MW_INSTRUM_NODE_231(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(231U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(232U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(233U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_234() \
  (__MW_INSTRUM_RECORD_HIT(234U))
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
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_242(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(242U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(243U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_242(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(242U), 1) : (__MW_INSTRUM_RECORD_HIT(243U), 0))
#endif
#define __MW_INSTRUM_NODE_244(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(244U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(245U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(246U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_247() \
  (__MW_INSTRUM_RECORD_HIT(247U))
#define __MW_INSTRUM_NODE_248() \
  (__MW_INSTRUM_RECORD_HIT(248U))
#define __MW_INSTRUM_NODE_249() \
  (__MW_INSTRUM_RECORD_HIT(249U))
#define __MW_INSTRUM_NODE_250() \
  (__MW_INSTRUM_RECORD_HIT(250U))
#define __MW_INSTRUM_NODE_251() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(251U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_252(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(252U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(253U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_252(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(252U), 1) : (__MW_INSTRUM_RECORD_HIT(253U), 0))
#endif
#define __MW_INSTRUM_NODE_253() \
  (__MW_INSTRUM_RECORD_HIT(253U))
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
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(259U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_260(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(260U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(261U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_260(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(260U), 1) : (__MW_INSTRUM_RECORD_HIT(261U), 0))
#endif
#define __MW_INSTRUM_NODE_262(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(262U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(263U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(264U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_265(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(265U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(266U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_265(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(265U), 1) : (__MW_INSTRUM_RECORD_HIT(266U), 0))
#endif
#define __MW_INSTRUM_NODE_267(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(267U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(268U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(269U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_274(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(274U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(275U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(276U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_279(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(279U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(280U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(281U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_286(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(286U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(287U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(288U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_291(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(291U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(292U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(293U) : (void) 0))) : (void) 0))
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
#define __MW_INSTRUM_NODE_299() \
  (__MW_INSTRUM_RECORD_HIT(299U))
#define __MW_INSTRUM_NODE_300() \
  (__MW_INSTRUM_RECORD_HIT(300U))
#define __MW_INSTRUM_NODE_301() \
  (__MW_INSTRUM_RECORD_HIT(301U))
#define __MW_INSTRUM_NODE_302() \
  (__MW_INSTRUM_RECORD_HIT(302U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_303(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(303U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(304U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_303(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(303U), 1) : (__MW_INSTRUM_RECORD_HIT(304U), 0))
#endif
#define __MW_INSTRUM_NODE_305(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(305U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(306U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(307U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_308() \
  (__MW_INSTRUM_RECORD_HIT(308U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_309(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(309U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(310U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_309(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(309U), 1) : (__MW_INSTRUM_RECORD_HIT(310U), 0))
#endif
#define __MW_INSTRUM_NODE_311(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(311U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(312U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(313U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_314(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(314U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(315U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_314(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(314U), 1) : (__MW_INSTRUM_RECORD_HIT(315U), 0))
#endif
#define __MW_INSTRUM_NODE_316(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(316U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(317U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(318U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_319() \
  (__MW_INSTRUM_RECORD_HIT(319U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_320(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(320U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(321U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_320(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(320U), 1) : (__MW_INSTRUM_RECORD_HIT(321U), 0))
#endif
#define __MW_INSTRUM_NODE_322(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(322U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(323U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(324U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_325(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(325U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(326U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_325(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(325U), 1) : (__MW_INSTRUM_RECORD_HIT(326U), 0))
#endif
#define __MW_INSTRUM_NODE_331(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(331U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(332U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(333U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_336(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(336U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(337U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(338U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_339() \
  (__MW_INSTRUM_RECORD_HIT(339U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_340(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(340U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(341U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_340(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(340U), 1) : (__MW_INSTRUM_RECORD_HIT(341U), 0))
#endif
#define __MW_INSTRUM_NODE_342(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(342U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(343U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(344U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_345(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(345U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(346U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_345(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(345U), 1) : (__MW_INSTRUM_RECORD_HIT(346U), 0))
#endif
#define __MW_INSTRUM_NODE_347(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(347U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(348U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(349U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_350() \
  (__MW_INSTRUM_RECORD_HIT(350U))
#define __MW_INSTRUM_NODE_351() \
  (__MW_INSTRUM_RECORD_HIT(351U))
#define __MW_INSTRUM_NODE_352() \
  (__MW_INSTRUM_RECORD_HIT(352U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_353(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(353U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(354U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_353(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(353U), 1) : (__MW_INSTRUM_RECORD_HIT(354U), 0))
#endif
#define __MW_INSTRUM_NODE_355(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(355U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(356U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(357U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_358(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(358U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(359U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_358(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(358U), 1) : (__MW_INSTRUM_RECORD_HIT(359U), 0))
#endif
#define __MW_INSTRUM_NODE_360(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(360U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(361U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(362U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_367(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(367U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(368U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(369U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_372() \
  (__MW_INSTRUM_RECORD_HIT(372U))
#define __MW_INSTRUM_NODE_373() \
  (__MW_INSTRUM_RECORD_HIT(373U))
#define __MW_INSTRUM_NODE_374() \
  (__MW_INSTRUM_RECORD_HIT(374U))
#define __MW_INSTRUM_NODE_375() \
  (__MW_INSTRUM_RECORD_HIT(375U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_376(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(376U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(377U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_376(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(376U), 1) : (__MW_INSTRUM_RECORD_HIT(377U), 0))
#endif
#define __MW_INSTRUM_NODE_378(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(378U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(379U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(380U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_381(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(381U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(382U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_381(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(381U), 1) : (__MW_INSTRUM_RECORD_HIT(382U), 0))
#endif
#define __MW_INSTRUM_NODE_383() \
  (__MW_INSTRUM_RECORD_HIT(383U))
#define __MW_INSTRUM_NODE_384() \
  (__MW_INSTRUM_RECORD_HIT(384U))
#define __MW_INSTRUM_NODE_385() \
  (__MW_INSTRUM_RECORD_HIT(385U))
#define __MW_INSTRUM_NODE_386() \
  (__MW_INSTRUM_RECORD_HIT(386U))
#define __MW_INSTRUM_NODE_387() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(387U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_388(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(388U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(389U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_388(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(388U), 1) : (__MW_INSTRUM_RECORD_HIT(389U), 0))
#endif
#define __MW_INSTRUM_NODE_390(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(390U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(391U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(392U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_393(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(393U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(394U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_393(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(393U), 1) : (__MW_INSTRUM_RECORD_HIT(394U), 0))
#endif
#define __MW_INSTRUM_NODE_395(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(395U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(396U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(397U) : (void) 0))) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_398(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(398U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(399U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_398(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(398U), 1) : (__MW_INSTRUM_RECORD_HIT(399U), 0))
#endif
#define __MW_INSTRUM_NODE_400(lhs, rhs) (((__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled && __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(400U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(401U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(402U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_403() \
  (__MW_INSTRUM_RECORD_HIT(403U))
#define __MW_INSTRUM_NODE_404() \
  (__MW_INSTRUM_RECORD_HIT(404U))
#define __MW_INSTRUM_NODE_405() \
  (__MW_INSTRUM_RECORD_HIT(405U))
#define __MW_INSTRUM_NODE_406() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(406U))
#define __MW_INSTRUM_NODE_407() \
  (__MW_INSTRUM_RECORD_HIT(407U))
#define __MW_INSTRUM_NODE_408() \
  (__MW_INSTRUM_RECORD_HIT(408U))
#define __MW_INSTRUM_NODE_409() \
  (((!__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_enabled || __mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_RntCWIQhSBMk0JpdeDcPVE_cclib_ptruth_tables = __MW_INSTRUM_RntCWIQhSBMk0JpdeDcPVE_cclib_INIT_FILE(77)))), \
   __MW_INSTRUM_RECORD_HIT(409U))
#define __MW_INSTRUM_NODE_410() \
  (__MW_INSTRUM_RECORD_HIT(410U))
#define __MW_INSTRUM_NODE_411() \
  (__MW_INSTRUM_RECORD_HIT(411U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_79CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_79(...) (__MW_INSTRUM_RECORD_HIT_79CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_79(exp) (__MW_INSTRUM_RECORD_HIT_79CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_84CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_84(...) (__MW_INSTRUM_RECORD_HIT_84CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_84(exp) (__MW_INSTRUM_RECORD_HIT_84CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_77DA_79_84Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_77(...) (__MW_INSTRUM_RECORD_HIT_77DA_79_84Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_77(exp) (__MW_INSTRUM_RECORD_HIT_77DA_79_84Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_121CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_121(...) (__MW_INSTRUM_RECORD_HIT_121CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_121(exp) (__MW_INSTRUM_RECORD_HIT_121CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_126CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_126(...) (__MW_INSTRUM_RECORD_HIT_126CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_126(exp) (__MW_INSTRUM_RECORD_HIT_126CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_119DO_121_126Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_119(...) (__MW_INSTRUM_RECORD_HIT_119DO_121_126Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_119(exp) (__MW_INSTRUM_RECORD_HIT_119DO_121_126Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_150CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_150(...) (__MW_INSTRUM_RECORD_HIT_150CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_150(exp) (__MW_INSTRUM_RECORD_HIT_150CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_155CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_155(...) (__MW_INSTRUM_RECORD_HIT_155CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_155(exp) (__MW_INSTRUM_RECORD_HIT_155CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_148DA_150_155Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_148(...) (__MW_INSTRUM_RECORD_HIT_148DA_150_155Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_148(exp) (__MW_INSTRUM_RECORD_HIT_148DA_150_155Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_172CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_172(...) (__MW_INSTRUM_RECORD_HIT_172CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_172(exp) (__MW_INSTRUM_RECORD_HIT_172CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_177CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_177(...) (__MW_INSTRUM_RECORD_HIT_177CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_177(exp) (__MW_INSTRUM_RECORD_HIT_177CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_170DA_172_177Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_170(...) (__MW_INSTRUM_RECORD_HIT_170DA_172_177Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_170(exp) (__MW_INSTRUM_RECORD_HIT_170DA_172_177Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_219CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_219(...) (__MW_INSTRUM_RECORD_HIT_219CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_219(exp) (__MW_INSTRUM_RECORD_HIT_219CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_224CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_224(...) (__MW_INSTRUM_RECORD_HIT_224CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_224(exp) (__MW_INSTRUM_RECORD_HIT_224CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_217DA_219_224Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_217(...) (__MW_INSTRUM_RECORD_HIT_217DA_219_224Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_217(exp) (__MW_INSTRUM_RECORD_HIT_217DA_219_224Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_272CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_272(...) (__MW_INSTRUM_RECORD_HIT_272CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_272(exp) (__MW_INSTRUM_RECORD_HIT_272CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_277CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_277(...) (__MW_INSTRUM_RECORD_HIT_277CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_277(exp) (__MW_INSTRUM_RECORD_HIT_277CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_270DA_272_277Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_270(...) (__MW_INSTRUM_RECORD_HIT_270DA_272_277Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_270(exp) (__MW_INSTRUM_RECORD_HIT_270DA_272_277Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_284CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_284(...) (__MW_INSTRUM_RECORD_HIT_284CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_284(exp) (__MW_INSTRUM_RECORD_HIT_284CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_289CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_289(...) (__MW_INSTRUM_RECORD_HIT_289CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_289(exp) (__MW_INSTRUM_RECORD_HIT_289CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_282DO_284_289Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_282(...) (__MW_INSTRUM_RECORD_HIT_282DO_284_289Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_282(exp) (__MW_INSTRUM_RECORD_HIT_282DO_284_289Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_329CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_329(...) (__MW_INSTRUM_RECORD_HIT_329CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_329(exp) (__MW_INSTRUM_RECORD_HIT_329CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_334CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_334(...) (__MW_INSTRUM_RECORD_HIT_334CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_334(exp) (__MW_INSTRUM_RECORD_HIT_334CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_327DA_329_334Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_327(...) (__MW_INSTRUM_RECORD_HIT_327DA_329_334Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_327(exp) (__MW_INSTRUM_RECORD_HIT_327DA_329_334Z_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_365CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_365(...) (__MW_INSTRUM_RECORD_HIT_365CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_365(exp) (__MW_INSTRUM_RECORD_HIT_365CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_370CZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_370(...) (__MW_INSTRUM_RECORD_HIT_370CZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_370(exp) (__MW_INSTRUM_RECORD_HIT_370CZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_363DA_365_370Z_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_363(...) (__MW_INSTRUM_RECORD_HIT_363DA_365_370Z_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_363(exp) (__MW_INSTRUM_RECORD_HIT_363DA_365_370Z_RntCWIQhSBMk0JpdeDcPVE(exp))
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


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_73XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_73() __MW_INSTRUM_RECORD_HIT_73XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_74EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_74() __MW_INSTRUM_RECORD_HIT_74EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_75DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_75(...) (__MW_INSTRUM_RECORD_HIT_75DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_75(exp) (__MW_INSTRUM_RECORD_HIT_75DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_81IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_81(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_81IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_86IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_86(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_86IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_89XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_89() __MW_INSTRUM_RECORD_HIT_89XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_90DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_90(...) (__MW_INSTRUM_RECORD_HIT_90DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_90(exp) (__MW_INSTRUM_RECORD_HIT_90DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_92IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_92(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_92IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_95DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_95(...) (__MW_INSTRUM_RECORD_HIT_95DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_95(exp) (__MW_INSTRUM_RECORD_HIT_95DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_97IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_97(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_97IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_100DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_100(...) (__MW_INSTRUM_RECORD_HIT_100DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_100(exp) (__MW_INSTRUM_RECORD_HIT_100DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_102IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_102(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_102IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_105XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_105() __MW_INSTRUM_RECORD_HIT_105XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_106() ((void)0)


#define __MW_INSTRUM_NODE_107() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_108XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_108() __MW_INSTRUM_RECORD_HIT_108XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_109EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_109() __MW_INSTRUM_RECORD_HIT_109EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_110DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_110(...) (__MW_INSTRUM_RECORD_HIT_110DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_110(exp) (__MW_INSTRUM_RECORD_HIT_110DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_112() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_113XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_113() __MW_INSTRUM_RECORD_HIT_113XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_114EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_114() __MW_INSTRUM_RECORD_HIT_114EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_115DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_115(...) (__MW_INSTRUM_RECORD_HIT_115DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_115(exp) (__MW_INSTRUM_RECORD_HIT_115DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

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
void __MW_INSTRUM_RECORD_HIT_123IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_123(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_123IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_128IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_128(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_128IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_131() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_132DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_132(...) (__MW_INSTRUM_RECORD_HIT_132DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_132(exp) (__MW_INSTRUM_RECORD_HIT_132DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_134IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_134(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_134IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_137DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_137(...) (__MW_INSTRUM_RECORD_HIT_137DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_137(exp) (__MW_INSTRUM_RECORD_HIT_137DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_139IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_139(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_139IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_142() ((void)0)


#define __MW_INSTRUM_NODE_143() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_144XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_144() __MW_INSTRUM_RECORD_HIT_144XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_145() ((void)0)


#define __MW_INSTRUM_NODE_146() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_147XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_147() __MW_INSTRUM_RECORD_HIT_147XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_152IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_152(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_152IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_157IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_157(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_157IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_160DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_160(...) (__MW_INSTRUM_RECORD_HIT_160DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_160(exp) (__MW_INSTRUM_RECORD_HIT_160DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_162IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_162(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_162IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_165() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_166XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_166() __MW_INSTRUM_RECORD_HIT_166XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_167() ((void)0)


#define __MW_INSTRUM_NODE_168() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_169XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_169() __MW_INSTRUM_RECORD_HIT_169XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_174IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_174(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_174IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_179IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_179(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_179IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_182DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_182(...) (__MW_INSTRUM_RECORD_HIT_182DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_182(exp) (__MW_INSTRUM_RECORD_HIT_182DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_184IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_184(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_184IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_187() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_188XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_188() __MW_INSTRUM_RECORD_HIT_188XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_189DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_189(...) (__MW_INSTRUM_RECORD_HIT_189DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_189(exp) (__MW_INSTRUM_RECORD_HIT_189DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_191IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_191(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_191IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_194() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_195XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_195() __MW_INSTRUM_RECORD_HIT_195XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_196() ((void)0)


#define __MW_INSTRUM_NODE_197() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_198XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_198() __MW_INSTRUM_RECORD_HIT_198XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_199() ((void)0)


#define __MW_INSTRUM_NODE_200() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_201DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_201(...) (__MW_INSTRUM_RECORD_HIT_201DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_201(exp) (__MW_INSTRUM_RECORD_HIT_201DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_203IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_203(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_203IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_206DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_206(...) (__MW_INSTRUM_RECORD_HIT_206DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_206(exp) (__MW_INSTRUM_RECORD_HIT_206DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_208IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_208(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_208IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_211() ((void)0)


#define __MW_INSTRUM_NODE_212() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_213XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_213() __MW_INSTRUM_RECORD_HIT_213XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_214() ((void)0)


#define __MW_INSTRUM_NODE_215() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_216XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_216() __MW_INSTRUM_RECORD_HIT_216XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_221IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_221(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_221IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_226IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_226(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_226IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_229DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_229(...) (__MW_INSTRUM_RECORD_HIT_229DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_229(exp) (__MW_INSTRUM_RECORD_HIT_229DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_231IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_231(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_231IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_234() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_235XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_235() __MW_INSTRUM_RECORD_HIT_235XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_236() ((void)0)


#define __MW_INSTRUM_NODE_237() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_238XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_238() __MW_INSTRUM_RECORD_HIT_238XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_239() ((void)0)


#define __MW_INSTRUM_NODE_240() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_241XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_241() __MW_INSTRUM_RECORD_HIT_241XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_242DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_242(...) (__MW_INSTRUM_RECORD_HIT_242DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_242(exp) (__MW_INSTRUM_RECORD_HIT_242DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_244IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_244(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_244IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_247() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_248XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_248() __MW_INSTRUM_RECORD_HIT_248XZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_249() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_250XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_250() __MW_INSTRUM_RECORD_HIT_250XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_251EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_251() __MW_INSTRUM_RECORD_HIT_251EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_252DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_252(...) (__MW_INSTRUM_RECORD_HIT_252DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_252(exp) (__MW_INSTRUM_RECORD_HIT_252DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_253() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_254DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_254() __MW_INSTRUM_RECORD_HIT_254DZ_RntCWIQhSBMk0JpdeDcPVE()

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
void __MW_INSTRUM_RECORD_HIT_258XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_258() __MW_INSTRUM_RECORD_HIT_258XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_259EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_259() __MW_INSTRUM_RECORD_HIT_259EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_260DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_260(...) (__MW_INSTRUM_RECORD_HIT_260DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_260(exp) (__MW_INSTRUM_RECORD_HIT_260DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_262IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_262(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_262IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_265DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_265(...) (__MW_INSTRUM_RECORD_HIT_265DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_265(exp) (__MW_INSTRUM_RECORD_HIT_265DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_267IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_267(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_267IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_274IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_274(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_274IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_279IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_279(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_279IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_286IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_286(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_286IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_291IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_291(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_291IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

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

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_297DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_297() __MW_INSTRUM_RECORD_HIT_297DZ_RntCWIQhSBMk0JpdeDcPVE()

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

#define __MW_INSTRUM_NODE_301() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_302DZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_302() __MW_INSTRUM_RECORD_HIT_302DZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_303DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_303(...) (__MW_INSTRUM_RECORD_HIT_303DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_303(exp) (__MW_INSTRUM_RECORD_HIT_303DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_305IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_305(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_305IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_308XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_308() __MW_INSTRUM_RECORD_HIT_308XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_309DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_309(...) (__MW_INSTRUM_RECORD_HIT_309DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_309(exp) (__MW_INSTRUM_RECORD_HIT_309DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_311IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_311(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_311IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_314DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_314(...) (__MW_INSTRUM_RECORD_HIT_314DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_314(exp) (__MW_INSTRUM_RECORD_HIT_314DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_316IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_316(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_316IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_319() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_320DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_320(...) (__MW_INSTRUM_RECORD_HIT_320DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_320(exp) (__MW_INSTRUM_RECORD_HIT_320DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_322IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_322(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_322IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_325DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_325(...) (__MW_INSTRUM_RECORD_HIT_325DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_325(exp) (__MW_INSTRUM_RECORD_HIT_325DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_331IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_331(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_331IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_336IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_336(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_336IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_339() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_340DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_340(...) (__MW_INSTRUM_RECORD_HIT_340DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_340(exp) (__MW_INSTRUM_RECORD_HIT_340DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_342IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_342(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_342IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_345DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_345(...) (__MW_INSTRUM_RECORD_HIT_345DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_345(exp) (__MW_INSTRUM_RECORD_HIT_345DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_347IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_347(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_347IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_350() ((void)0)


#define __MW_INSTRUM_NODE_351() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_352XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_352() __MW_INSTRUM_RECORD_HIT_352XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_353DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_353(...) (__MW_INSTRUM_RECORD_HIT_353DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_353(exp) (__MW_INSTRUM_RECORD_HIT_353DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_355IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_355(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_355IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_358DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_358(...) (__MW_INSTRUM_RECORD_HIT_358DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_358(exp) (__MW_INSTRUM_RECORD_HIT_358DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_360IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_360(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_360IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_367IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_367(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_367IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_372() ((void)0)


#define __MW_INSTRUM_NODE_373() ((void)0)


#define __MW_INSTRUM_NODE_374() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_375XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_375() __MW_INSTRUM_RECORD_HIT_375XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_376DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_376(...) (__MW_INSTRUM_RECORD_HIT_376DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_376(exp) (__MW_INSTRUM_RECORD_HIT_376DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_378IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_378(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_378IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_381DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_381(...) (__MW_INSTRUM_RECORD_HIT_381DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_381(exp) (__MW_INSTRUM_RECORD_HIT_381DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#define __MW_INSTRUM_NODE_383() ((void)0)


#define __MW_INSTRUM_NODE_384() ((void)0)


#define __MW_INSTRUM_NODE_385() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_386XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_386() __MW_INSTRUM_RECORD_HIT_386XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_387EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_387() __MW_INSTRUM_RECORD_HIT_387EZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_388DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_388(...) (__MW_INSTRUM_RECORD_HIT_388DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_388(exp) (__MW_INSTRUM_RECORD_HIT_388DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_390IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_390(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_390IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_393DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_393(...) (__MW_INSTRUM_RECORD_HIT_393DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_393(exp) (__MW_INSTRUM_RECORD_HIT_393DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_395IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_395(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_395IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_398DZ_RntCWIQhSBMk0JpdeDcPVE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_398(...) (__MW_INSTRUM_RECORD_HIT_398DZ_RntCWIQhSBMk0JpdeDcPVE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_398(exp) (__MW_INSTRUM_RECORD_HIT_398DZ_RntCWIQhSBMk0JpdeDcPVE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_400IZ_RntCWIQhSBMk0JpdeDcPVE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_400(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_400IZ_RntCWIQhSBMk0JpdeDcPVE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_403() ((void)0)


#define __MW_INSTRUM_NODE_404() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_405XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_405() __MW_INSTRUM_RECORD_HIT_405XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_406EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_406() __MW_INSTRUM_RECORD_HIT_406EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_407() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_408XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_408() __MW_INSTRUM_RECORD_HIT_408XZ_RntCWIQhSBMk0JpdeDcPVE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_409EZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_409() __MW_INSTRUM_RECORD_HIT_409EZ_RntCWIQhSBMk0JpdeDcPVE()

#define __MW_INSTRUM_NODE_410() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_411XZ_RntCWIQhSBMk0JpdeDcPVE(void) { }
#define __MW_INSTRUM_NODE_411() __MW_INSTRUM_RECORD_HIT_411XZ_RntCWIQhSBMk0JpdeDcPVE()

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
} RPDO_ID290; 
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
RPDO_ID290 RPDO05; 
RPDO_ID18x RPDO06, RPDO07, RPDO08, RPDO09; 
RPDO_ID28x RPDO10, RPDO11, RPDO12, RPDO13; 


TPDO_ID20x TPDO01, TPDO02, TPDO03, TPDO04; 
#line 33
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
#line 103
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
#line 122
}  } 
i++; 
}  } 
gTPDONr = (4); } __MW_INSTRUM_NODE_36(); 
} 



void TransmitPDO(uint8_T PDONr, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_37(); 
#line 137
((gTPDOConfig)[gTPDONr]).event_timestamp = (__MW_INSTRUM_NODE_38(), CANOpenHW_GetTime()) + ((gTPDOConfig)[gTPDONr]).event_time; 

__MW_INSTRUM_NODE_39(), CANOpenHW_SendMessage(&(((gTPDOConfig)[PDONr]).CAN), txID, txDLC, txData); __MW_INSTRUM_NODE_40(); 
} 




void CANOpenSlave_Init(uint16_T Baudrate, uint8_T Node_ID, uint16_T Heartbeat) 
{ __MW_INSTRUM_FCN_ENTER_6(); __MW_INSTRUM_NODE_41(); { 
uint8_T i; 
#line 154
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
#line 217
void CANOpenSlave_InitTPDO(uint8_T PDO_NR, uint16_T CAN_ID, uint16_T event_time, uint16_T inhibit_time, uint8_T len, uint8_T *pDat) 
{ __MW_INSTRUM_FCN_ENTER_8(); __MW_INSTRUM_NODE_54(); 
PDO_NR--; 
#line 226
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




__MW_INSTRUM_NODE_60(), CANOpenSlave_InitTPDO(1, 0x20a, 5, 0, 8, &(TPDO01.Message)); 
__MW_INSTRUM_NODE_61(), CANOpenSlave_InitTPDO(2, 0x20b, 5, 0, 8, &(TPDO02.Message)); 
__MW_INSTRUM_NODE_62(), CANOpenSlave_InitTPDO(3, 0x20c, 5, 0, 8, &(TPDO03.Message)); 
__MW_INSTRUM_NODE_63(), CANOpenSlave_InitTPDO(4, 0x20d, 5, 0, 8, &(TPDO04.Message)); 
#line 268
__MW_INSTRUM_NODE_64(), CANOpenSlave_InitRPDO(1, 0x182, 8, &(RPDO01.Message)); 
__MW_INSTRUM_NODE_65(), CANOpenSlave_InitRPDO(2, 0x282, 8, &(RPDO02.Message)); 
__MW_INSTRUM_NODE_66(), CANOpenSlave_InitRPDO(3, 0x1ff, 4, &(RPDO03.Message)); 
__MW_INSTRUM_NODE_67(), CANOpenSlave_InitRPDO(4, 0x2ff, 4, &(RPDO04.Message)); 

__MW_INSTRUM_NODE_68(), CANOpenSlave_InitRPDO(5, 0x290, 8, &(RPDO05.Message)); 

__MW_INSTRUM_NODE_69(), CANOpenSlave_InitRPDO(6, 0x18a, 8, &(RPDO06.Message)); 
__MW_INSTRUM_NODE_70(), CANOpenSlave_InitRPDO(7, 0x18b, 8, &(RPDO07.Message)); 
__MW_INSTRUM_NODE_71(), CANOpenSlave_InitRPDO(8, 0x18c, 8, &(RPDO08.Message)); 
__MW_INSTRUM_NODE_72(), CANOpenSlave_InitRPDO(9, 0x18d, 8, &(RPDO09.Message)); __MW_INSTRUM_NODE_73(); 
#line 289
} 
#line 298
const uint8_T SDOResponseTable[] = {(0x43 | ((4 - 4) << 2)), ((0x1000 >> 0) & 0xff), ((0x1000 >> 8) & 0xff), (0), ((0xf0191L >> 0) & (0xff)), ((0xf0191L >> 8) & (0xff)), ((0xf0191L >> 16) & (0xff)), ((0xf0191L >> 24) & (0xff)), (0x43 | ((4 - 8) << 2)), ((0x1008 >> 0) & 0xff), ((0x1008 >> 8) & 0xff), (0), ((0x6161 >> 0) & 0xff), ((0x6161 >> 8) & 0xff), ((0x6161 >> 16) & 0xff), ((0x6161 >> 24) & 0xff), (0x43 | ((4 - 2) << 2)), ((0x1017 >> 0) & 0xff), ((0x1017 >> 8) & 0xff), (0), ((1000L >> 0) & (0xff)), ((1000L >> 8) & (0xff)), ((1000L >> 16) & (0xff)), ((1000L >> 24) & (0xff)), (0x43 | ((4 - 1) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0), ((0x4L >> 0) & (0xff)), ((0x4L >> 8) & (0xff)), ((0x4L >> 16) & (0xff)), ((0x4L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x1), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x2), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x3), ((0x1L >> 0) & (0xff)), ((0x1L >> 8) & (0xff)), ((0x1L >> 16) & (0xff)), ((0x1L >> 24) & (0xff)), (0x43 | ((4 - 4) << 2)), ((0x1018 >> 0) & 0xff), ((0x1018 >> 8) & 0xff), (0x4), ((0xffffffffUL >> 0) & (0xff)), ((0xffffffffUL >> 8) & (0xff)), ((0xffffffffUL >> 16) & (0xff)), ((0xffffffffUL >> 24) & (0xff)), (0x43 | ((4 - 0) << 2)), ((0 >> 0) & 0xff), ((0 >> 8) & 0xff), (0), ((0L >> 0) & (0xff)), ((0L >> 8) & (0xff)), ((0L >> 16) & (0xff)), ((0L >> 24) & (0xff))}; 
#line 480
uint8_T Search_OD(uint16_T index, uint8_T subindex) 
{ int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_11(); __MW_INSTRUM_NODE_74(); { 
uint8_T i; 
uint8_T i_hi, hi; 
uint8_T i_lo, lo; 
const volatile uint8_T *p; 
const volatile uint8_T *r; 

i = (0); 
i_hi = (uint8_T)(index >> 8); 
i_lo = (uint8_T)index; 
r = &((SDOResponseTable)[0]); { 
while (__MW_INSTRUM_NODE_75(i < 255)) 
{ 
p = r; 
r += 8; 
p++; 
lo = *p; 
p++; 
hi = *p; { 
if (__MW_INSTRUM_NODE_77(__MW_INSTRUM_NODE_79(((__mw_tmp_for_expr_1 = lo), (__MW_INSTRUM_NODE_81(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0)))) && __MW_INSTRUM_NODE_84(((__mw_tmp_for_expr_2 = hi), (__MW_INSTRUM_NODE_86(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 == 0)))))) 
{ __MW_INSTRUM_NODE_89(); 
return 255; 
}  } { 
if (__MW_INSTRUM_NODE_90(((__mw_tmp_for_expr_3 = lo), ((__mw_tmp_for_expr_4 = i_lo), (__MW_INSTRUM_NODE_92(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 == __mw_tmp_for_expr_4)))))) 
{ { 
if (__MW_INSTRUM_NODE_95(((__mw_tmp_for_expr_5 = hi), ((__mw_tmp_for_expr_6 = i_hi), (__MW_INSTRUM_NODE_97(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 == __mw_tmp_for_expr_6)))))) 
{ 
p++; { 
if (__MW_INSTRUM_NODE_100(((__mw_tmp_for_expr_7 = *p), ((__mw_tmp_for_expr_8 = subindex), (__MW_INSTRUM_NODE_102(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8)))))) 
{ 
{ uint8_T __mw_tmp_for_return = i; __MW_INSTRUM_NODE_105(); return __mw_tmp_for_return; } 
}  } 
}  } 
}  } __MW_INSTRUM_NODE_106(); 
i++; 
}  } __MW_INSTRUM_NODE_107(); __MW_INSTRUM_NODE_108(); 
return 0xff; } 
} 
#line 584
void Send_SDO_Abort(uint32_T ErrorCode, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ __MW_INSTRUM_FCN_ENTER_12(); __MW_INSTRUM_NODE_109(); { 
uint8_T i; 
(gTxSDO.BUF)[0] = (0x80); { 
for (i = (0); __MW_INSTRUM_NODE_110(i < 4); i++) 
{ 
(gTxSDO.BUF)[4 + i] = ErrorCode; 
ErrorCode >>= 8; 
__MW_INSTRUM_NODE_112(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); 
}  } } __MW_INSTRUM_NODE_113(); 
} 


void CopyConstToData(uint8_T *dest, const volatile uint8_T *src) 
{ __MW_INSTRUM_FCN_ENTER_13(); __MW_INSTRUM_NODE_114(); { 
uint8_T i; { 
for (i = (0); __MW_INSTRUM_NODE_115(i < 8); i++) 
{ 
*dest = *src; 
dest++; 
src++; 
}  } } __MW_INSTRUM_NODE_117(); 
} 



uint8_T Handle_SDO_Request(uint8_T *pData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_14(); __MW_INSTRUM_NODE_118(); { 

uint8_T cmd; 
uint16_T index; 
uint8_T subindex; 
uint8_T found; 
#line 624
cmd = (*pData) & 0xe0; 
index = pData[2]; 
index = (index << 8) + pData[1]; 
subindex = pData[3]; 


(gTxSDO.BUF)[1] = pData[1]; 
(gTxSDO.BUF)[2] = pData[2]; 
(gTxSDO.BUF)[3] = pData[3]; { 


if (__MW_INSTRUM_NODE_119(__MW_INSTRUM_NODE_121(((__mw_tmp_for_expr_1 = cmd), (__MW_INSTRUM_NODE_123(__mw_tmp_for_expr_1, 0x40), (__mw_tmp_for_expr_1 == 0x40)))) || __MW_INSTRUM_NODE_126(((__mw_tmp_for_expr_2 = cmd), (__MW_INSTRUM_NODE_128(__mw_tmp_for_expr_2, 0x20), (__mw_tmp_for_expr_2 == 0x20)))))) 
{ 
#line 696
found = (__MW_INSTRUM_NODE_131(), Search_OD(index, subindex)); { 

if (__MW_INSTRUM_NODE_132(((__mw_tmp_for_expr_3 = found), (__MW_INSTRUM_NODE_134(__mw_tmp_for_expr_3, 255), (__mw_tmp_for_expr_3 < 255))))) 
{ { 

if (__MW_INSTRUM_NODE_137(((__mw_tmp_for_expr_4 = cmd), (__MW_INSTRUM_NODE_139(__mw_tmp_for_expr_4, 0x40), (__mw_tmp_for_expr_4 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_142(), memcpy(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8]), 8); 
__MW_INSTRUM_NODE_143(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_144(); 
return 1; 
}  } __MW_INSTRUM_NODE_145(); 

__MW_INSTRUM_NODE_146(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_147(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_148(__MW_INSTRUM_NODE_150(((__mw_tmp_for_expr_5 = index), (__MW_INSTRUM_NODE_152(__mw_tmp_for_expr_5, 0x1001), (__mw_tmp_for_expr_5 == 0x1001)))) && __MW_INSTRUM_NODE_155(((__mw_tmp_for_expr_6 = subindex), (__MW_INSTRUM_NODE_157(__mw_tmp_for_expr_6, 0), (__mw_tmp_for_expr_6 == 0)))))) 
{ { 

if (__MW_INSTRUM_NODE_160(((__mw_tmp_for_expr_7 = cmd), (__MW_INSTRUM_NODE_162(__mw_tmp_for_expr_7, 0x40), (__mw_tmp_for_expr_7 == 0x40))))) 
{ 

(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_165(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_166(); 
return 1; 
}  } __MW_INSTRUM_NODE_167(); 

__MW_INSTRUM_NODE_168(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_169(); 
return 0; 
}  } { 


if (__MW_INSTRUM_NODE_170(__MW_INSTRUM_NODE_172(((__mw_tmp_for_expr_8 = index), (__MW_INSTRUM_NODE_174(__mw_tmp_for_expr_8, 0x1017), (__mw_tmp_for_expr_8 == 0x1017)))) && __MW_INSTRUM_NODE_177(((__mw_tmp_for_expr_9 = subindex), (__MW_INSTRUM_NODE_179(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_182(((__mw_tmp_for_expr_10 = cmd), (__MW_INSTRUM_NODE_184(__mw_tmp_for_expr_10, 0x40), (__mw_tmp_for_expr_10 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4b); 
(gTxSDO.BUF)[4] = (uint8_T)(gCANOPENConfig.heartbeat_time); 
(gTxSDO.BUF)[5] = (uint8_T)((gCANOPENConfig.heartbeat_time) >> 8); 
__MW_INSTRUM_NODE_187(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_188(); 
return 1; 
}  } { 
if (__MW_INSTRUM_NODE_189(((__mw_tmp_for_expr_11 = *pData), (__MW_INSTRUM_NODE_191(__mw_tmp_for_expr_11, 0x2b), (__mw_tmp_for_expr_11 == 0x2b))))) 
{ 
gCANOPENConfig.heartbeat_time = pData[5]; 
gCANOPENConfig.heartbeat_time = ((gCANOPENConfig.heartbeat_time) << 8) + pData[4]; 
(gTxSDO.BUF)[0] = (0x60); 

(gTxSDO.BUF)[4] = (0); 
(gTxSDO.BUF)[5] = (0); 
(gTxSDO.BUF)[6] = (0); 
(gTxSDO.BUF)[7] = (0); 
__MW_INSTRUM_NODE_194(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_195(); 
return 1; 
}  } __MW_INSTRUM_NODE_196(); 
__MW_INSTRUM_NODE_197(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_198(); 
return 0; 
}  } __MW_INSTRUM_NODE_199(); 


found = (__MW_INSTRUM_NODE_200(), Search_OD(index, subindex)); { 
if (__MW_INSTRUM_NODE_201(((__mw_tmp_for_expr_12 = found), (__MW_INSTRUM_NODE_203(__mw_tmp_for_expr_12, 255), (__mw_tmp_for_expr_12 < 255))))) 
{ { 
if (__MW_INSTRUM_NODE_206(((__mw_tmp_for_expr_13 = cmd), (__MW_INSTRUM_NODE_208(__mw_tmp_for_expr_13, 0x40), (__mw_tmp_for_expr_13 == 0x40))))) 
{ 
__MW_INSTRUM_NODE_211(), CopyConstToData(&((gTxSDO.BUF)[0]), &((SDOResponseTable)[found * 8])); 
__MW_INSTRUM_NODE_212(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_213(); 
return 1; 
}  } __MW_INSTRUM_NODE_214(); 

__MW_INSTRUM_NODE_215(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_216(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_217(__MW_INSTRUM_NODE_219(((__mw_tmp_for_expr_14 = index), (__MW_INSTRUM_NODE_221(__mw_tmp_for_expr_14, 0x1001), (__mw_tmp_for_expr_14 == 0x1001)))) && __MW_INSTRUM_NODE_224(((__mw_tmp_for_expr_15 = subindex), (__MW_INSTRUM_NODE_226(__mw_tmp_for_expr_15, 0), (__mw_tmp_for_expr_15 == 0)))))) 
{ { 
if (__MW_INSTRUM_NODE_229(((__mw_tmp_for_expr_16 = cmd), (__MW_INSTRUM_NODE_231(__mw_tmp_for_expr_16, 0x40), (__mw_tmp_for_expr_16 == 0x40))))) 
{ 
(gTxSDO.BUF)[0] = (0x4f); 
(gTxSDO.BUF)[4] = gCANOPENConfig.error_register; 
__MW_INSTRUM_NODE_234(), CANOpenHW_SendMessage(&((gTxSDO.BUF)[0]), txID, txDLC, txData); __MW_INSTRUM_NODE_235(); 
return 1; 
}  } __MW_INSTRUM_NODE_236(); 

__MW_INSTRUM_NODE_237(), Send_SDO_Abort(0x6010002UL, txID, txDLC, txData); __MW_INSTRUM_NODE_238(); 
return 0; 
}  } __MW_INSTRUM_NODE_239(); 
__MW_INSTRUM_NODE_240(), Send_SDO_Abort(0x6020000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_241(); 
return 0; 
}  } { 
if (__MW_INSTRUM_NODE_242(((__mw_tmp_for_expr_17 = cmd), (__MW_INSTRUM_NODE_244(__mw_tmp_for_expr_17, 0x80), (__mw_tmp_for_expr_17 != 0x80))))) 
{ 
__MW_INSTRUM_NODE_247(), Send_SDO_Abort(0x6010000UL, txID, txDLC, txData); __MW_INSTRUM_NODE_248(); 
return 0; 
}  } __MW_INSTRUM_NODE_249(); __MW_INSTRUM_NODE_250(); 
return 1; } 
} 

void SDO_Write(uint16_T Node_ID, uint16_T index, uint8_T subindex, uint32_T data, uint8_T len) 
{ __MW_INSTRUM_FCN_ENTER_15(); __MW_INSTRUM_NODE_251(); { 
char k; 
gTxSDOw.ID = 0x600 + Node_ID; 
gTxSDOw.LEN = (8); 
(gTxSDOw.BUF)[0] = 0x23 | ((4 - len) << 2); 
(gTxSDOw.BUF)[1] = (uint8_T)(index & 0xff); 
(gTxSDOw.BUF)[2] = (uint8_T)((index >> 8) & 0xff); 
(gTxSDOw.BUF)[3] = subindex; { 
for (k = (0); __MW_INSTRUM_NODE_252(k < 4); k++) 
{ (gTxSDOw.BUF)[4 + k] = (0); }  } { 
switch (len) 
{ 
case 1:  __MW_INSTRUM_NODE_254(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
break; 
case 2:  __MW_INSTRUM_NODE_255(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
break; 
case 3:  __MW_INSTRUM_NODE_256(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
break; 
case 4:  __MW_INSTRUM_NODE_257(); 
(gTxSDOw.BUF)[4] = (uint8_T)data; 
(gTxSDOw.BUF)[5] = (uint8_T)(data >> 8); 
(gTxSDOw.BUF)[6] = (uint8_T)(data >> 16); 
(gTxSDOw.BUF)[7] = (uint8_T)(data >> 24); 
break; 

}  } } __MW_INSTRUM_NODE_258(); 




} 
#line 837
void CANOpenSlave_ProcessStackAsyncRx(uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_26; int __mw_tmp_for_expr_25; int __mw_tmp_for_expr_24; int __mw_tmp_for_expr_23; int __mw_tmp_for_expr_22; int __mw_tmp_for_expr_21; int __mw_tmp_for_expr_20; int __mw_tmp_for_expr_19; int __mw_tmp_for_expr_18; int __mw_tmp_for_expr_17; int __mw_tmp_for_expr_16; int __mw_tmp_for_expr_15; int __mw_tmp_for_expr_14; int __mw_tmp_for_expr_13; int __mw_tmp_for_expr_12; int __mw_tmp_for_expr_11; int __mw_tmp_for_expr_10; int __mw_tmp_for_expr_9; int __mw_tmp_for_expr_8; int __mw_tmp_for_expr_7; int __mw_tmp_for_expr_6; int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_16(); __MW_INSTRUM_NODE_259(); { 
uint8_T i; 


aux_gTimCnt++; { 

if (__MW_INSTRUM_NODE_260(((__mw_tmp_for_expr_1 = aux_gTimCnt), ((__mw_tmp_for_expr_2 = TimFactor), (__MW_INSTRUM_NODE_262(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ 
gTimCnt++; 
aux_gTimCnt = (0); 
}  } 


*txDLC = (0); { 



if (__MW_INSTRUM_NODE_265(((__mw_tmp_for_expr_3 = can_rx_queue.in), ((__mw_tmp_for_expr_4 = can_rx_queue.out), (__MW_INSTRUM_NODE_267(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 != __mw_tmp_for_expr_4)))))) 
{ 
gRxCAN = &((can_rx_queue.msg)[can_rx_queue.out]); { 




if (__MW_INSTRUM_NODE_270(__MW_INSTRUM_NODE_272(((__mw_tmp_for_expr_5 = gRxCAN->ID), (__MW_INSTRUM_NODE_274(__mw_tmp_for_expr_5, 0), (__mw_tmp_for_expr_5 == 0)))) && __MW_INSTRUM_NODE_277(((__mw_tmp_for_expr_6 = gRxCAN->LEN), (__MW_INSTRUM_NODE_279(__mw_tmp_for_expr_6, 3), (__mw_tmp_for_expr_6 < 3)))))) 
{ { 
if (__MW_INSTRUM_NODE_282(__MW_INSTRUM_NODE_284(((__mw_tmp_for_expr_7 = (gRxCAN->BUF)[1]), ((__mw_tmp_for_expr_8 = gCANOPENConfig.Node_ID), (__MW_INSTRUM_NODE_286(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 == __mw_tmp_for_expr_8))))) || __MW_INSTRUM_NODE_289(((__mw_tmp_for_expr_9 = (gRxCAN->BUF)[1]), (__MW_INSTRUM_NODE_291(__mw_tmp_for_expr_9, 0), (__mw_tmp_for_expr_9 == 0)))))) 
{ { 
switch ((gRxCAN->BUF)[0]) 
{ 
case 0x1:  __MW_INSTRUM_NODE_294(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x5); 

__MW_INSTRUM_NODE_295(), Prepare_TPDOs(); 

break; 
case 0x2:  __MW_INSTRUM_NODE_296(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x4); 
break; 
case 0x80:  __MW_INSTRUM_NODE_297(); 
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 
break; 
case 0x81:  __MW_INSTRUM_NODE_298(); 
__MW_INSTRUM_NODE_299(), CANOpenSlave_ResetApplication(); 
break; 
case 0x82:  __MW_INSTRUM_NODE_300(); 
__MW_INSTRUM_NODE_301(), CANOpenSlave_ResetCommunication(); 
break; 
default:  __MW_INSTRUM_NODE_302(); 
break; 
}  } 

can_rx_queue.out = __MW_INSTRUM_NODE_303(((__mw_tmp_for_expr_10 = can_rx_queue.out), ((__mw_tmp_for_expr_11 = 8 - 1), (__MW_INSTRUM_NODE_305(__mw_tmp_for_expr_10, __mw_tmp_for_expr_11), (__mw_tmp_for_expr_10 < __mw_tmp_for_expr_11))))) ? (can_rx_queue.out + 1) : 0; __MW_INSTRUM_NODE_308(); 



return; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_309(((__mw_tmp_for_expr_12 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_311(__mw_tmp_for_expr_12, 0x4), (__mw_tmp_for_expr_12 != 0x4))))) 
{ { 
if (__MW_INSTRUM_NODE_314(((__mw_tmp_for_expr_13 = gRxCAN->ID), ((__mw_tmp_for_expr_14 = gCANOPENConfig.Node_ID + 0x600), (__MW_INSTRUM_NODE_316(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 == __mw_tmp_for_expr_14)))))) 
{ 
i = (__MW_INSTRUM_NODE_319(), Handle_SDO_Request(&((gRxCAN->BUF)[0]), txID, txDLC, txData)); 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_320(((__mw_tmp_for_expr_15 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_322(__mw_tmp_for_expr_15, 0x5), (__mw_tmp_for_expr_15 == 0x5))))) 
{ 
i = (0); { 
while (__MW_INSTRUM_NODE_325(i < 13)) 
{ { 
if (__MW_INSTRUM_NODE_327(__MW_INSTRUM_NODE_329(((__mw_tmp_for_expr_16 = gRxCAN->ID), ((__mw_tmp_for_expr_17 = ((gRPDOConfig)[i]).ID), (__MW_INSTRUM_NODE_331(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 == __mw_tmp_for_expr_17))))) && __MW_INSTRUM_NODE_334(((__mw_tmp_for_expr_18 = gRxCAN->LEN), ((__mw_tmp_for_expr_19 = ((gRPDOConfig)[i]).LEN), (__MW_INSTRUM_NODE_336(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 == __mw_tmp_for_expr_19))))))) 
{ 
#line 926
__MW_INSTRUM_NODE_339(), memcpy(((gRPDOConfig)[i]).pData, &((gRxCAN->BUF)[0]), ((gRPDOConfig)[i]).LEN); 
i = (13); 
}  } 
i++; 
}  } 
}  } 


can_rx_queue.out = __MW_INSTRUM_NODE_340(((__mw_tmp_for_expr_20 = can_rx_queue.out), ((__mw_tmp_for_expr_21 = 8 - 1), (__MW_INSTRUM_NODE_342(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 < __mw_tmp_for_expr_21))))) ? (can_rx_queue.out + 1) : 0; 



}  } { 



if (__MW_INSTRUM_NODE_345(((__mw_tmp_for_expr_22 = gTPDONr), (__MW_INSTRUM_NODE_347(__mw_tmp_for_expr_22, 0xff), (__mw_tmp_for_expr_22 == 0xff))))) 
{ 

gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_350(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 

__MW_INSTRUM_NODE_351(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
#line 954
((gCANOPENConfig.heartbeat_msg).BUF)[0] = (0x7f); 

gTPDONr = (4); __MW_INSTRUM_NODE_352(); 
return; 
}  } { 



if (__MW_INSTRUM_NODE_353(((__mw_tmp_for_expr_23 = ((gCANOPENConfig.heartbeat_msg).BUF)[0]), (__MW_INSTRUM_NODE_355(__mw_tmp_for_expr_23, 0x5), (__mw_tmp_for_expr_23 == 0x5))))) 
{ 
gTPDONr++; { 
if (__MW_INSTRUM_NODE_358(((__mw_tmp_for_expr_24 = gTPDONr), (__MW_INSTRUM_NODE_360(__mw_tmp_for_expr_24, 4), (__mw_tmp_for_expr_24 >= 4))))) 
{ 
gTPDONr = (0); 
}  } { 



if (__MW_INSTRUM_NODE_363(__MW_INSTRUM_NODE_365(((__mw_tmp_for_expr_25 = ((gTPDOConfig)[gTPDONr]).event_time), (__MW_INSTRUM_NODE_367(__mw_tmp_for_expr_25, 0), (__mw_tmp_for_expr_25 != 0)))) && (__MW_INSTRUM_NODE_370((__MW_INSTRUM_NODE_372(), CANOpenHW_IsTimeExpired(((gTPDOConfig)[gTPDONr]).event_timestamp)))))) 
{ 

__MW_INSTRUM_NODE_373(), memcpy((((gTPDOConfig)[gTPDONr]).CAN).BUF, ((gTPDOConfig)[gTPDONr]).pData, (((gTPDOConfig)[gTPDONr]).CAN).LEN); 
__MW_INSTRUM_NODE_374(), TransmitPDO(gTPDONr, txID, txDLC, txData); __MW_INSTRUM_NODE_375(); 
return; 
}  } 
#line 1010
}  } { 



if (__MW_INSTRUM_NODE_376(((__mw_tmp_for_expr_26 = gCANOPENConfig.heartbeat_time), (__MW_INSTRUM_NODE_378(__mw_tmp_for_expr_26, 0), (__mw_tmp_for_expr_26 != 0))))) 
{ { 
if (__MW_INSTRUM_NODE_381((__MW_INSTRUM_NODE_383(), CANOpenHW_IsTimeExpired(gCANOPENConfig.heartbeat_timestamp)))) 
{ 
__MW_INSTRUM_NODE_384(), CANOpenHW_SendMessage(&(gCANOPENConfig.heartbeat_msg), txID, txDLC, txData); 
gCANOPENConfig.heartbeat_timestamp = (__MW_INSTRUM_NODE_385(), CANOpenHW_GetTime()) + gCANOPENConfig.heartbeat_time; 
}  } 
}  } } __MW_INSTRUM_NODE_386(); 
} 

void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T *rxData, uint32_T *txID, uint8_T *txDLC, uint8_T *txData) 
{ int __mw_tmp_for_expr_5; int __mw_tmp_for_expr_4; int __mw_tmp_for_expr_3; int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_17(); __MW_INSTRUM_NODE_387(); { 
if (__MW_INSTRUM_NODE_388(((__mw_tmp_for_expr_1 = rxDLC), (__MW_INSTRUM_NODE_390(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 > 0))))) { 

uint8_T n = __MW_INSTRUM_NODE_393(((__mw_tmp_for_expr_2 = can_rx_queue.in), ((__mw_tmp_for_expr_3 = 8 - 1), (__MW_INSTRUM_NODE_395(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 < __mw_tmp_for_expr_3))))) ? (can_rx_queue.in + 1) : 0; { 
if (__MW_INSTRUM_NODE_398(((__mw_tmp_for_expr_4 = n), ((__mw_tmp_for_expr_5 = can_rx_queue.out), (__MW_INSTRUM_NODE_400(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 != __mw_tmp_for_expr_5)))))) { 
CAN_MSG *d = &((can_rx_queue.msg)[can_rx_queue.in]); 
__MW_INSTRUM_NODE_403(), memcpy(d->BUF, rxData, rxDLC); 
d->ID = rxID; 
d->LEN = rxDLC; 
can_rx_queue.in = n; 
}  } 
#line 1042
}  } 
__MW_INSTRUM_NODE_404(), CANOpenSlave_ProcessStackAsyncRx(txID, txDLC, txData); __MW_INSTRUM_NODE_405(); 
} 

void CANOpenSlave_GetRPDO(uint8_T no, uint8_T *data) { __MW_INSTRUM_FCN_ENTER_18(); __MW_INSTRUM_NODE_406(); 
__MW_INSTRUM_NODE_407(), memcpy(data, ((gRPDOConfig)[no]).pData, ((gRPDOConfig)[no]).LEN); __MW_INSTRUM_NODE_408(); 
} 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T *data) { __MW_INSTRUM_FCN_ENTER_19(); __MW_INSTRUM_NODE_409(); 
__MW_INSTRUM_NODE_410(), memcpy(((gTPDOConfig)[no]).pData, data, 8); __MW_INSTRUM_NODE_411(); 
} 
