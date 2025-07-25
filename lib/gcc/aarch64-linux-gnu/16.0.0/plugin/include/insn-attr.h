/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#include "insn-attr-common.h"

#define HAVE_ATTR_autodetect_type 1
extern enum attr_autodetect_type get_attr_autodetect_type (rtx_insn *);

#define HAVE_ATTR_type 1
extern enum attr_type get_attr_type (rtx_insn *);

#define HAVE_ATTR_mul32 1
extern enum attr_mul32 get_attr_mul32 (rtx_insn *);

#define HAVE_ATTR_widen_mul64 1
extern enum attr_widen_mul64 get_attr_widen_mul64 (rtx_insn *);

#define HAVE_ATTR_is_neon_type 1
extern enum attr_is_neon_type get_attr_is_neon_type (rtx_insn *);

#define HAVE_ATTR_is_mve_type 1
extern enum attr_is_mve_type get_attr_is_mve_type (rtx_insn *);

#define HAVE_ATTR_arch 1
extern enum arches get_attr_arch (rtx_insn *);

#define HAVE_ATTR_is_call 1
extern enum attr_is_call get_attr_is_call (rtx_insn *);

#define HAVE_ATTR_pred_clobber 1
extern enum attr_pred_clobber get_attr_pred_clobber (rtx_insn *);

#define HAVE_ATTR_enable_ldapur 1
extern enum attr_enable_ldapur get_attr_enable_ldapur (rtx_insn *);

#define HAVE_ATTR_fp 1
extern enum attr_fp get_attr_fp (rtx_insn *);

#define HAVE_ATTR_arch_enabled 1
extern enum attr_arch_enabled get_attr_arch_enabled (rtx_insn *);

#define HAVE_ATTR_is_bf16 1
extern enum attr_is_bf16 get_attr_is_bf16 (rtx_insn *);

#define HAVE_ATTR_is_rev 1
extern enum attr_is_rev get_attr_is_rev (rtx_insn *);

#define HAVE_ATTR_supports_bf16_rev 1
extern enum attr_supports_bf16_rev get_attr_supports_bf16_rev (rtx_insn *);

#define HAVE_ATTR_mode_enabled 1
extern enum attr_mode_enabled get_attr_mode_enabled (rtx_insn *);

#define HAVE_ATTR_enabled 1
extern enum attr_enabled get_attr_enabled (rtx_insn *);

#define HAVE_ATTR_far_branch 1
extern enum attr_far_branch get_attr_far_branch (rtx_insn *);

#define HAVE_ATTR_movprfx 1
extern enum attr_movprfx get_attr_movprfx (rtx_insn *);

#define HAVE_ATTR_sls_length 1
extern enum attr_sls_length get_attr_sls_length (rtx_insn *);

#define HAVE_ATTR_length 1
extern int get_attr_length (rtx_insn *);
extern void shorten_branches (rtx_insn *);
extern int insn_default_length (rtx_insn *);
extern int insn_min_length (rtx_insn *);
extern int insn_variable_length_p (rtx_insn *);
extern int insn_current_length (rtx_insn *);

#include "insn-addr.h"

#define HAVE_ATTR_predicated 1
extern enum attr_predicated get_attr_predicated (rtx_insn *);

#define HAVE_ATTR_speculation_barrier 1
extern enum attr_speculation_barrier get_attr_speculation_barrier (rtx_insn *);

#define HAVE_ATTR_stride_type 1
extern enum attr_stride_type get_attr_stride_type (rtx_insn *);

#define HAVE_ATTR_ldpstp 1
extern enum attr_ldpstp get_attr_ldpstp (rtx_insn *);

#define HAVE_ATTR_tune 1
extern enum attr_tune get_attr_tune (void);

#define HAVE_ATTR_cortex_a53_advsimd_type 1
extern enum attr_cortex_a53_advsimd_type get_attr_cortex_a53_advsimd_type (rtx_insn *);

#define HAVE_ATTR_cortex_a57_neon_type 1
extern enum attr_cortex_a57_neon_type get_attr_cortex_a57_neon_type (rtx_insn *);

#define HAVE_ATTR_exynos_m1_neon_type 1
extern enum attr_exynos_m1_neon_type get_attr_exynos_m1_neon_type (rtx_insn *);

#define HAVE_ATTR_tsv110_neon_type 1
extern enum attr_tsv110_neon_type get_attr_tsv110_neon_type (rtx_insn *);

#define HAVE_ATTR_add_vec_concat_subst_le 1
extern enum attr_add_vec_concat_subst_le get_attr_add_vec_concat_subst_le (rtx_insn *);

#define HAVE_ATTR_add_vec_concat_subst_be 1
extern enum attr_add_vec_concat_subst_be get_attr_add_vec_concat_subst_be (rtx_insn *);

extern int num_delay_slots (rtx_insn *);
extern int eligible_for_delay (rtx_insn *, int, rtx_insn *, int);

extern int const_num_delay_slots (rtx_insn *);

#define ANNUL_IFTRUE_SLOTS 0
extern int eligible_for_annul_true (rtx_insn *, int, rtx_insn *, int);
#define ANNUL_IFFALSE_SLOTS 0
extern int eligible_for_annul_false (rtx_insn *, int, rtx_insn *, int);

/* DFA based pipeline interface.  */
#ifndef AUTOMATON_ALTS
#define AUTOMATON_ALTS 0
#endif


#ifndef AUTOMATON_STATE_ALTS
#define AUTOMATON_STATE_ALTS 0
#endif

#ifndef CPU_UNITS_QUERY
#define CPU_UNITS_QUERY 0
#endif

#define init_sched_attrs() do { } while (0)

/* Internal insn code number used by automata.  */
extern int internal_dfa_insn_code (rtx_insn *);

/* Insn latency time defined in define_insn_reservation. */
extern int insn_default_latency (rtx_insn *);

/* Return nonzero if there is a bypass for given insn
   which is a data producer.  */
extern int bypass_p (rtx_insn *);

/* Insn latency time on data consumed by the 2nd insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int insn_latency (rtx_insn *, rtx_insn *);

/* Maximal insn latency time possible of all bypasses for this insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int maximal_insn_latency (rtx_insn *);


#if AUTOMATON_ALTS
/* The following function returns number of alternative
   reservations of given insn.  It may be used for better
   insns scheduling heuristics. */
extern int insn_alts (rtx);

#endif

/* Maximal possible number of insns waiting results being
   produced by insns whose execution is not finished. */
extern const int max_insn_queue_index;

/* Pointer to data describing current state of DFA.  */
typedef void *state_t;

/* Size of the data in bytes.  */
extern int state_size (void);

/* Initiate given DFA state, i.e. Set up the state
   as all functional units were not reserved.  */
extern void state_reset (state_t);
/* The following function returns negative value if given
   insn can be issued in processor state described by given
   DFA state.  In this case, the DFA state is changed to
   reflect the current and future reservations by given
   insn.  Otherwise the function returns minimal time
   delay to issue the insn.  This delay may be zero
   for superscalar or VLIW processors.  If the second
   parameter is NULL the function changes given DFA state
   as new processor cycle started.  */
extern int state_transition (state_t, rtx);

#if AUTOMATON_STATE_ALTS
/* The following function returns number of possible
   alternative reservations of given insn in given
   DFA state.  It may be used for better insns scheduling
   heuristics.  By default the function is defined if
   macro AUTOMATON_STATE_ALTS is defined because its
   implementation may require much memory.  */
extern int state_alts (state_t, rtx);
#endif

extern int min_issue_delay (state_t, rtx_insn *);
/* The following function returns nonzero if no one insn
   can be issued in current DFA state. */
extern int state_dead_lock_p (state_t);
/* The function returns minimal delay of issue of the 2nd
   insn after issuing the 1st insn in given DFA state.
   The 1st insn should be issued in given state (i.e.
    state_transition should return negative value for
    the insn and the state).  Data dependencies between
    the insns are ignored by the function.  */
extern int min_insn_conflict_delay (state_t, rtx_insn *, rtx_insn *);
/* The following function outputs reservations for given
   insn as they are described in the corresponding
   define_insn_reservation.  */
extern void print_reservation (FILE *, rtx_insn *);

#if CPU_UNITS_QUERY
/* The following function returns code of functional unit
   with given name (see define_cpu_unit). */
extern int get_cpu_unit_code (const char *);
/* The following function returns nonzero if functional
   unit with given code is currently reserved in given
   DFA state.  */
extern int cpu_unit_reservation_p (state_t, int);
#endif

/* The following function returns true if insn
   has a dfa reservation.  */
extern bool insn_has_dfa_reservation_p (rtx_insn *);

/* Clean insn code cache.  It should be called if there
   is a chance that condition value in a
   define_insn_reservation will be changed after
   last call of dfa_start.  */
extern void dfa_clean_insn_cache (void);

extern void dfa_clear_single_insn_cache (rtx_insn *);

/* Initiate and finish work with DFA.  They should be
   called as the first and the last interface
   functions.  */
extern void dfa_start (void);
extern void dfa_finish (void);
#ifndef HAVE_ATTR_length
#define HAVE_ATTR_length 0
#endif
#ifndef HAVE_ATTR_enabled
#define HAVE_ATTR_enabled 0
#endif
#ifndef HAVE_ATTR_preferred_for_size
#define HAVE_ATTR_preferred_for_size 0
#endif
#ifndef HAVE_ATTR_preferred_for_speed
#define HAVE_ATTR_preferred_for_speed 0
#endif
#if !HAVE_ATTR_length
extern int hook_int_rtx_insn_unreachable (rtx_insn *);
#define insn_default_length hook_int_rtx_insn_unreachable
#define insn_min_length hook_int_rtx_insn_unreachable
#define insn_variable_length_p hook_int_rtx_insn_unreachable
#define insn_current_length hook_int_rtx_insn_unreachable
#include "insn-addr.h"
#endif
extern int hook_int_rtx_1 (rtx);
#if !HAVE_ATTR_enabled
#define get_attr_enabled hook_int_rtx_1
#endif
#if !HAVE_ATTR_preferred_for_size
#define get_attr_preferred_for_size hook_int_rtx_1
#endif
#if !HAVE_ATTR_preferred_for_speed
#define get_attr_preferred_for_speed hook_int_rtx_1
#endif


#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2

#endif /* GCC_INSN_ATTR_H */
