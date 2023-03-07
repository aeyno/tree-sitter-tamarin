#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 711
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 243
#define ALIAS_COUNT 0
#define TOKEN_COUNT 147
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_theory = 1,
  anon_sym_begin = 2,
  anon_sym_end = 3,
  sym_ident = 4,
  anon_sym_functions = 5,
  anon_sym_COLON = 6,
  anon_sym_COMMA = 7,
  anon_sym_SLASH = 8,
  anon_sym_LBRACKprivate_RBRACK = 9,
  aux_sym_arity_token1 = 10,
  anon_sym_equations = 11,
  anon_sym_EQ = 12,
  anon_sym_builtins = 13,
  anon_sym_diffie_DASHhellman = 14,
  anon_sym_hashing = 15,
  anon_sym_symmetric_DASHencryption = 16,
  anon_sym_asymmetric_DASHencryption = 17,
  anon_sym_signing = 18,
  anon_sym_bilinear_DASHpairing = 19,
  anon_sym_xor = 20,
  anon_sym_multiset = 21,
  anon_sym_revealing_DASHsigning = 22,
  anon_sym_heuristic = 23,
  anon_sym_C = 24,
  anon_sym_I = 25,
  anon_sym_P = 26,
  anon_sym_S = 27,
  anon_sym_c = 28,
  anon_sym_i = 29,
  anon_sym_p = 30,
  anon_sym_s = 31,
  anon_sym_o = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_oracle_goal_ranking_token1 = 34,
  anon_sym_O = 35,
  anon_sym_tactic = 36,
  anon_sym_presort = 37,
  anon_sym_prio = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_deprio = 41,
  anon_sym_smallest = 42,
  anon_sym_id = 43,
  anon_sym_PIPE = 44,
  anon_sym_AMP = 45,
  anon_sym_not = 46,
  anon_sym_regex = 47,
  anon_sym_isFactName = 48,
  anon_sym_isInFactTerms = 49,
  anon_sym_dhreNoise = 50,
  anon_sym_defaultNoise = 51,
  anon_sym_reasonableNoncesNoise = 52,
  anon_sym_nonAbsurdGoal = 53,
  anon_sym_left = 54,
  anon_sym_right = 55,
  anon_sym_rule = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_DASH_DASH_GT = 59,
  anon_sym_DASH_DASH_LBRACK = 60,
  anon_sym_RBRACK_DASH_GT = 61,
  anon_sym_variants = 62,
  anon_sym_LPAREN = 63,
  anon_sym_modulo = 64,
  anon_sym_E = 65,
  anon_sym_AC = 66,
  anon_sym_RPAREN = 67,
  anon_sym_color_EQ = 68,
  anon_sym_colour_EQ = 69,
  anon_sym_let = 70,
  anon_sym_in = 71,
  anon_sym_DOT = 72,
  anon_sym_msg = 73,
  anon_sym_restriction = 74,
  anon_sym_lemma = 75,
  anon_sym_sources = 76,
  anon_sym_reuse = 77,
  anon_sym_use_induction = 78,
  anon_sym_hide_lemma_EQ = 79,
  anon_sym_heuristic_EQ = 80,
  anon_sym_all_DASHtrace = 81,
  anon_sym_exists_DASHtrace = 82,
  anon_sym_SOLVED = 83,
  anon_sym_by = 84,
  anon_sym_case = 85,
  anon_sym_next = 86,
  anon_sym_qed = 87,
  anon_sym_sorry = 88,
  anon_sym_simplify = 89,
  anon_sym_solve = 90,
  anon_sym_contradiction = 91,
  anon_sym_induction = 92,
  anon_sym_ = 93,
  anon_sym_AT = 94,
  anon_sym_TILDE_TILDE_GT = 95,
  anon_sym_2 = 96,
  anon_sym_splitEqs = 97,
  anon_sym_POUND = 98,
  anon_sym_node = 99,
  anon_sym_3 = 100,
  anon_sym_4 = 101,
  anon_sym_5 = 102,
  anon_sym_6 = 103,
  anon_sym_7 = 104,
  anon_sym_8 = 105,
  anon_sym_9 = 106,
  anon_sym_10 = 107,
  anon_sym_11 = 108,
  anon_sym_12 = 109,
  anon_sym_LBRACE_STAR = 110,
  aux_sym_formal_comment_token1 = 111,
  anon_sym_STAR_RBRACE = 112,
  anon_sym_LT = 113,
  anon_sym_GT = 114,
  anon_sym_PLUS = 115,
  anon_sym_XOR = 116,
  anon_sym_13 = 117,
  anon_sym_STAR = 118,
  anon_sym_CARET = 119,
  anon_sym_SQUOTE = 120,
  anon_sym_TILDE_SQUOTE = 121,
  anon_sym_DOLLAR = 122,
  anon_sym_pub = 123,
  anon_sym_TILDE = 124,
  anon_sym_fresh = 125,
  anon_sym_BANG = 126,
  anon_sym_DASH = 127,
  anon_sym_no_precomp = 128,
  anon_sym_LT_EQ_GT = 129,
  anon_sym_14 = 130,
  anon_sym_EQ_EQ_GT = 131,
  anon_sym_15 = 132,
  anon_sym_16 = 133,
  anon_sym_17 = 134,
  anon_sym_18 = 135,
  anon_sym_19 = 136,
  anon_sym_F = 137,
  anon_sym_20 = 138,
  anon_sym_T = 139,
  anon_sym_last = 140,
  anon_sym_Ex = 141,
  anon_sym_21 = 142,
  anon_sym_All = 143,
  anon_sym_22 = 144,
  sym_hexcolor = 145,
  sym_comment = 146,
  sym_source_file = 147,
  sym_security_protocol_theory = 148,
  sym_body = 149,
  sym__signature_spec = 150,
  sym_functions = 151,
  sym_function_sym = 152,
  sym_arity = 153,
  sym_equations = 154,
  sym_equation = 155,
  sym_built_ins = 156,
  sym_built_in = 157,
  sym_global_heuristic = 158,
  sym_goal_ranking = 159,
  sym_standard_goal_ranking = 160,
  sym_oracle_goal_ranking = 161,
  sym_tactic = 162,
  sym_presort = 163,
  sym_prio = 164,
  sym_deprio = 165,
  sym_post_ranking = 166,
  sym_function = 167,
  sym_and_function = 168,
  sym_not_function = 169,
  sym_param = 170,
  sym_function_name = 171,
  sym_rule = 172,
  sym_simple_rule = 173,
  sym_variants = 174,
  sym_modulo = 175,
  sym_rule_attrs = 176,
  sym_rule_attr = 177,
  sym_let_block = 178,
  sym_msg_var = 179,
  sym_restriction = 180,
  sym_restriction_attrs = 181,
  sym_lemma = 182,
  sym_lemma_attrs = 183,
  sym_lemma_attr = 184,
  sym_trace_quantifier = 185,
  sym_proof_skeleton = 186,
  sym_proof_method = 187,
  sym_goal = 188,
  sym_node_var = 189,
  sym_natural = 190,
  sym_natural_subscr = 191,
  sym_formal_comment = 192,
  sym_tuple_term = 193,
  sym__msetterm = 194,
  sym__xorterm = 195,
  sym__multterm = 196,
  sym__expterm = 197,
  sym_term = 198,
  sym_nested = 199,
  sym_app = 200,
  sym_literal = 201,
  sym_nonnode_var = 202,
  sym_facts = 203,
  sym_fact = 204,
  sym_fact_annotes = 205,
  sym_fact_annote = 206,
  sym_formula = 207,
  sym_imp = 208,
  sym_disjunction = 209,
  sym_conjunction = 210,
  sym_negation = 211,
  sym_atom = 212,
  sym_lvar = 213,
  sym_quantifier = 214,
  aux_sym_body_repeat1 = 215,
  aux_sym_functions_repeat1 = 216,
  aux_sym_equations_repeat1 = 217,
  aux_sym_built_ins_repeat1 = 218,
  aux_sym_global_heuristic_repeat1 = 219,
  aux_sym_tactic_repeat1 = 220,
  aux_sym_tactic_repeat2 = 221,
  aux_sym_prio_repeat1 = 222,
  aux_sym_function_repeat1 = 223,
  aux_sym_and_function_repeat1 = 224,
  aux_sym_not_function_repeat1 = 225,
  aux_sym_variants_repeat1 = 226,
  aux_sym_rule_attrs_repeat1 = 227,
  aux_sym_let_block_repeat1 = 228,
  aux_sym_lemma_attrs_repeat1 = 229,
  aux_sym_proof_skeleton_repeat1 = 230,
  aux_sym_goal_repeat1 = 231,
  aux_sym_natural_subscr_repeat1 = 232,
  aux_sym_tuple_term_repeat1 = 233,
  aux_sym__msetterm_repeat1 = 234,
  aux_sym__xorterm_repeat1 = 235,
  aux_sym__multterm_repeat1 = 236,
  aux_sym__expterm_repeat1 = 237,
  aux_sym_facts_repeat1 = 238,
  aux_sym_fact_annotes_repeat1 = 239,
  aux_sym_disjunction_repeat1 = 240,
  aux_sym_conjunction_repeat1 = 241,
  aux_sym_atom_repeat1 = 242,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_theory] = "theory",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_functions] = "functions",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACKprivate_RBRACK] = "[private]",
  [aux_sym_arity_token1] = "arity_token1",
  [anon_sym_equations] = "equations",
  [anon_sym_EQ] = "=",
  [anon_sym_builtins] = "builtins",
  [anon_sym_diffie_DASHhellman] = "diffie-hellman",
  [anon_sym_hashing] = "hashing",
  [anon_sym_symmetric_DASHencryption] = "symmetric-encryption",
  [anon_sym_asymmetric_DASHencryption] = "asymmetric-encryption",
  [anon_sym_signing] = "signing",
  [anon_sym_bilinear_DASHpairing] = "bilinear-pairing",
  [anon_sym_xor] = "xor",
  [anon_sym_multiset] = "multiset",
  [anon_sym_revealing_DASHsigning] = "revealing-signing",
  [anon_sym_heuristic] = "heuristic",
  [anon_sym_C] = "C",
  [anon_sym_I] = "I",
  [anon_sym_P] = "P",
  [anon_sym_S] = "S",
  [anon_sym_c] = "c",
  [anon_sym_i] = "i",
  [anon_sym_p] = "p",
  [anon_sym_s] = "s",
  [anon_sym_o] = "o",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_oracle_goal_ranking_token1] = "oracle_goal_ranking_token1",
  [anon_sym_O] = "O",
  [anon_sym_tactic] = "tactic",
  [anon_sym_presort] = "presort",
  [anon_sym_prio] = "prio",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_deprio] = "deprio",
  [anon_sym_smallest] = "smallest",
  [anon_sym_id] = "id",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_not] = "not",
  [anon_sym_regex] = "regex",
  [anon_sym_isFactName] = "isFactName",
  [anon_sym_isInFactTerms] = "isInFactTerms",
  [anon_sym_dhreNoise] = "dhreNoise",
  [anon_sym_defaultNoise] = "defaultNoise",
  [anon_sym_reasonableNoncesNoise] = "reasonableNoncesNoise",
  [anon_sym_nonAbsurdGoal] = "nonAbsurdGoal",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_rule] = "rule",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_DASH_DASH_LBRACK] = "--[",
  [anon_sym_RBRACK_DASH_GT] = "]->",
  [anon_sym_variants] = "variants",
  [anon_sym_LPAREN] = "(",
  [anon_sym_modulo] = "modulo",
  [anon_sym_E] = "E",
  [anon_sym_AC] = "AC",
  [anon_sym_RPAREN] = ")",
  [anon_sym_color_EQ] = "color=",
  [anon_sym_colour_EQ] = "colour=",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_DOT] = ".",
  [anon_sym_msg] = "msg",
  [anon_sym_restriction] = "restriction",
  [anon_sym_lemma] = "lemma",
  [anon_sym_sources] = "sources",
  [anon_sym_reuse] = "reuse",
  [anon_sym_use_induction] = "use_induction",
  [anon_sym_hide_lemma_EQ] = "hide_lemma=",
  [anon_sym_heuristic_EQ] = "heuristic=",
  [anon_sym_all_DASHtrace] = "all-trace",
  [anon_sym_exists_DASHtrace] = "exists-trace",
  [anon_sym_SOLVED] = "SOLVED",
  [anon_sym_by] = "by",
  [anon_sym_case] = "case",
  [anon_sym_next] = "next",
  [anon_sym_qed] = "qed",
  [anon_sym_sorry] = "sorry",
  [anon_sym_simplify] = "simplify",
  [anon_sym_solve] = "solve",
  [anon_sym_contradiction] = "contradiction",
  [anon_sym_induction] = "induction",
  [anon_sym_] = "▶",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE_TILDE_GT] = "~~>",
  [anon_sym_2] = "∥",
  [anon_sym_splitEqs] = "splitEqs",
  [anon_sym_POUND] = "#",
  [anon_sym_node] = "node",
  [anon_sym_3] = "₀",
  [anon_sym_4] = "₁",
  [anon_sym_5] = "₂",
  [anon_sym_6] = "₃",
  [anon_sym_7] = "₄",
  [anon_sym_8] = "₅",
  [anon_sym_9] = "₆",
  [anon_sym_10] = "₇",
  [anon_sym_11] = "₈",
  [anon_sym_12] = "₉",
  [anon_sym_LBRACE_STAR] = "{*",
  [aux_sym_formal_comment_token1] = "formal_comment_token1",
  [anon_sym_STAR_RBRACE] = "*}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_XOR] = "XOR",
  [anon_sym_13] = "⊕",
  [anon_sym_STAR] = "*",
  [anon_sym_CARET] = "^",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_TILDE_SQUOTE] = "~'",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_pub] = "pub",
  [anon_sym_TILDE] = "~",
  [anon_sym_fresh] = "fresh",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_no_precomp] = "no_precomp",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_14] = "⇔",
  [anon_sym_EQ_EQ_GT] = "==>",
  [anon_sym_15] = "⇒",
  [anon_sym_16] = "∨",
  [anon_sym_17] = "∧",
  [anon_sym_18] = "¬",
  [anon_sym_19] = "⊥",
  [anon_sym_F] = "F",
  [anon_sym_20] = "⊤",
  [anon_sym_T] = "T",
  [anon_sym_last] = "last",
  [anon_sym_Ex] = "Ex",
  [anon_sym_21] = "∃",
  [anon_sym_All] = "All",
  [anon_sym_22] = "∀",
  [sym_hexcolor] = "hexcolor",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_security_protocol_theory] = "security_protocol_theory",
  [sym_body] = "body",
  [sym__signature_spec] = "_signature_spec",
  [sym_functions] = "functions",
  [sym_function_sym] = "function_sym",
  [sym_arity] = "arity",
  [sym_equations] = "equations",
  [sym_equation] = "equation",
  [sym_built_ins] = "built_ins",
  [sym_built_in] = "built_in",
  [sym_global_heuristic] = "global_heuristic",
  [sym_goal_ranking] = "goal_ranking",
  [sym_standard_goal_ranking] = "standard_goal_ranking",
  [sym_oracle_goal_ranking] = "oracle_goal_ranking",
  [sym_tactic] = "tactic",
  [sym_presort] = "presort",
  [sym_prio] = "prio",
  [sym_deprio] = "deprio",
  [sym_post_ranking] = "post_ranking",
  [sym_function] = "function",
  [sym_and_function] = "and_function",
  [sym_not_function] = "not_function",
  [sym_param] = "param",
  [sym_function_name] = "function_name",
  [sym_rule] = "rule",
  [sym_simple_rule] = "simple_rule",
  [sym_variants] = "variants",
  [sym_modulo] = "modulo",
  [sym_rule_attrs] = "rule_attrs",
  [sym_rule_attr] = "rule_attr",
  [sym_let_block] = "let_block",
  [sym_msg_var] = "msg_var",
  [sym_restriction] = "restriction",
  [sym_restriction_attrs] = "restriction_attrs",
  [sym_lemma] = "lemma",
  [sym_lemma_attrs] = "lemma_attrs",
  [sym_lemma_attr] = "lemma_attr",
  [sym_trace_quantifier] = "trace_quantifier",
  [sym_proof_skeleton] = "proof_skeleton",
  [sym_proof_method] = "proof_method",
  [sym_goal] = "goal",
  [sym_node_var] = "node_var",
  [sym_natural] = "natural",
  [sym_natural_subscr] = "natural_subscr",
  [sym_formal_comment] = "formal_comment",
  [sym_tuple_term] = "tuple_term",
  [sym__msetterm] = "_msetterm",
  [sym__xorterm] = "_xorterm",
  [sym__multterm] = "_multterm",
  [sym__expterm] = "_expterm",
  [sym_term] = "term",
  [sym_nested] = "nested",
  [sym_app] = "app",
  [sym_literal] = "literal",
  [sym_nonnode_var] = "nonnode_var",
  [sym_facts] = "facts",
  [sym_fact] = "fact",
  [sym_fact_annotes] = "fact_annotes",
  [sym_fact_annote] = "fact_annote",
  [sym_formula] = "formula",
  [sym_imp] = "imp",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_negation] = "negation",
  [sym_atom] = "atom",
  [sym_lvar] = "lvar",
  [sym_quantifier] = "quantifier",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_functions_repeat1] = "functions_repeat1",
  [aux_sym_equations_repeat1] = "equations_repeat1",
  [aux_sym_built_ins_repeat1] = "built_ins_repeat1",
  [aux_sym_global_heuristic_repeat1] = "global_heuristic_repeat1",
  [aux_sym_tactic_repeat1] = "tactic_repeat1",
  [aux_sym_tactic_repeat2] = "tactic_repeat2",
  [aux_sym_prio_repeat1] = "prio_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_and_function_repeat1] = "and_function_repeat1",
  [aux_sym_not_function_repeat1] = "not_function_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_rule_attrs_repeat1] = "rule_attrs_repeat1",
  [aux_sym_let_block_repeat1] = "let_block_repeat1",
  [aux_sym_lemma_attrs_repeat1] = "lemma_attrs_repeat1",
  [aux_sym_proof_skeleton_repeat1] = "proof_skeleton_repeat1",
  [aux_sym_goal_repeat1] = "goal_repeat1",
  [aux_sym_natural_subscr_repeat1] = "natural_subscr_repeat1",
  [aux_sym_tuple_term_repeat1] = "tuple_term_repeat1",
  [aux_sym__msetterm_repeat1] = "_msetterm_repeat1",
  [aux_sym__xorterm_repeat1] = "_xorterm_repeat1",
  [aux_sym__multterm_repeat1] = "_multterm_repeat1",
  [aux_sym__expterm_repeat1] = "_expterm_repeat1",
  [aux_sym_facts_repeat1] = "facts_repeat1",
  [aux_sym_fact_annotes_repeat1] = "fact_annotes_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_theory] = anon_sym_theory,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACKprivate_RBRACK] = anon_sym_LBRACKprivate_RBRACK,
  [aux_sym_arity_token1] = aux_sym_arity_token1,
  [anon_sym_equations] = anon_sym_equations,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_builtins] = anon_sym_builtins,
  [anon_sym_diffie_DASHhellman] = anon_sym_diffie_DASHhellman,
  [anon_sym_hashing] = anon_sym_hashing,
  [anon_sym_symmetric_DASHencryption] = anon_sym_symmetric_DASHencryption,
  [anon_sym_asymmetric_DASHencryption] = anon_sym_asymmetric_DASHencryption,
  [anon_sym_signing] = anon_sym_signing,
  [anon_sym_bilinear_DASHpairing] = anon_sym_bilinear_DASHpairing,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_multiset] = anon_sym_multiset,
  [anon_sym_revealing_DASHsigning] = anon_sym_revealing_DASHsigning,
  [anon_sym_heuristic] = anon_sym_heuristic,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_oracle_goal_ranking_token1] = aux_sym_oracle_goal_ranking_token1,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_tactic] = anon_sym_tactic,
  [anon_sym_presort] = anon_sym_presort,
  [anon_sym_prio] = anon_sym_prio,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_deprio] = anon_sym_deprio,
  [anon_sym_smallest] = anon_sym_smallest,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_isFactName] = anon_sym_isFactName,
  [anon_sym_isInFactTerms] = anon_sym_isInFactTerms,
  [anon_sym_dhreNoise] = anon_sym_dhreNoise,
  [anon_sym_defaultNoise] = anon_sym_defaultNoise,
  [anon_sym_reasonableNoncesNoise] = anon_sym_reasonableNoncesNoise,
  [anon_sym_nonAbsurdGoal] = anon_sym_nonAbsurdGoal,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_DASH_DASH_LBRACK] = anon_sym_DASH_DASH_LBRACK,
  [anon_sym_RBRACK_DASH_GT] = anon_sym_RBRACK_DASH_GT,
  [anon_sym_variants] = anon_sym_variants,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_modulo] = anon_sym_modulo,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_AC] = anon_sym_AC,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_color_EQ] = anon_sym_color_EQ,
  [anon_sym_colour_EQ] = anon_sym_colour_EQ,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_msg] = anon_sym_msg,
  [anon_sym_restriction] = anon_sym_restriction,
  [anon_sym_lemma] = anon_sym_lemma,
  [anon_sym_sources] = anon_sym_sources,
  [anon_sym_reuse] = anon_sym_reuse,
  [anon_sym_use_induction] = anon_sym_use_induction,
  [anon_sym_hide_lemma_EQ] = anon_sym_hide_lemma_EQ,
  [anon_sym_heuristic_EQ] = anon_sym_heuristic_EQ,
  [anon_sym_all_DASHtrace] = anon_sym_all_DASHtrace,
  [anon_sym_exists_DASHtrace] = anon_sym_exists_DASHtrace,
  [anon_sym_SOLVED] = anon_sym_SOLVED,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_qed] = anon_sym_qed,
  [anon_sym_sorry] = anon_sym_sorry,
  [anon_sym_simplify] = anon_sym_simplify,
  [anon_sym_solve] = anon_sym_solve,
  [anon_sym_contradiction] = anon_sym_contradiction,
  [anon_sym_induction] = anon_sym_induction,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_TILDE_TILDE_GT] = anon_sym_TILDE_TILDE_GT,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_splitEqs] = anon_sym_splitEqs,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_LBRACE_STAR] = anon_sym_LBRACE_STAR,
  [aux_sym_formal_comment_token1] = aux_sym_formal_comment_token1,
  [anon_sym_STAR_RBRACE] = anon_sym_STAR_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_TILDE_SQUOTE] = anon_sym_TILDE_SQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_fresh] = anon_sym_fresh,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_no_precomp] = anon_sym_no_precomp,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_EQ_EQ_GT] = anon_sym_EQ_EQ_GT,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_Ex] = anon_sym_Ex,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_All] = anon_sym_All,
  [anon_sym_22] = anon_sym_22,
  [sym_hexcolor] = sym_hexcolor,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_security_protocol_theory] = sym_security_protocol_theory,
  [sym_body] = sym_body,
  [sym__signature_spec] = sym__signature_spec,
  [sym_functions] = sym_functions,
  [sym_function_sym] = sym_function_sym,
  [sym_arity] = sym_arity,
  [sym_equations] = sym_equations,
  [sym_equation] = sym_equation,
  [sym_built_ins] = sym_built_ins,
  [sym_built_in] = sym_built_in,
  [sym_global_heuristic] = sym_global_heuristic,
  [sym_goal_ranking] = sym_goal_ranking,
  [sym_standard_goal_ranking] = sym_standard_goal_ranking,
  [sym_oracle_goal_ranking] = sym_oracle_goal_ranking,
  [sym_tactic] = sym_tactic,
  [sym_presort] = sym_presort,
  [sym_prio] = sym_prio,
  [sym_deprio] = sym_deprio,
  [sym_post_ranking] = sym_post_ranking,
  [sym_function] = sym_function,
  [sym_and_function] = sym_and_function,
  [sym_not_function] = sym_not_function,
  [sym_param] = sym_param,
  [sym_function_name] = sym_function_name,
  [sym_rule] = sym_rule,
  [sym_simple_rule] = sym_simple_rule,
  [sym_variants] = sym_variants,
  [sym_modulo] = sym_modulo,
  [sym_rule_attrs] = sym_rule_attrs,
  [sym_rule_attr] = sym_rule_attr,
  [sym_let_block] = sym_let_block,
  [sym_msg_var] = sym_msg_var,
  [sym_restriction] = sym_restriction,
  [sym_restriction_attrs] = sym_restriction_attrs,
  [sym_lemma] = sym_lemma,
  [sym_lemma_attrs] = sym_lemma_attrs,
  [sym_lemma_attr] = sym_lemma_attr,
  [sym_trace_quantifier] = sym_trace_quantifier,
  [sym_proof_skeleton] = sym_proof_skeleton,
  [sym_proof_method] = sym_proof_method,
  [sym_goal] = sym_goal,
  [sym_node_var] = sym_node_var,
  [sym_natural] = sym_natural,
  [sym_natural_subscr] = sym_natural_subscr,
  [sym_formal_comment] = sym_formal_comment,
  [sym_tuple_term] = sym_tuple_term,
  [sym__msetterm] = sym__msetterm,
  [sym__xorterm] = sym__xorterm,
  [sym__multterm] = sym__multterm,
  [sym__expterm] = sym__expterm,
  [sym_term] = sym_term,
  [sym_nested] = sym_nested,
  [sym_app] = sym_app,
  [sym_literal] = sym_literal,
  [sym_nonnode_var] = sym_nonnode_var,
  [sym_facts] = sym_facts,
  [sym_fact] = sym_fact,
  [sym_fact_annotes] = sym_fact_annotes,
  [sym_fact_annote] = sym_fact_annote,
  [sym_formula] = sym_formula,
  [sym_imp] = sym_imp,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_negation] = sym_negation,
  [sym_atom] = sym_atom,
  [sym_lvar] = sym_lvar,
  [sym_quantifier] = sym_quantifier,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_functions_repeat1] = aux_sym_functions_repeat1,
  [aux_sym_equations_repeat1] = aux_sym_equations_repeat1,
  [aux_sym_built_ins_repeat1] = aux_sym_built_ins_repeat1,
  [aux_sym_global_heuristic_repeat1] = aux_sym_global_heuristic_repeat1,
  [aux_sym_tactic_repeat1] = aux_sym_tactic_repeat1,
  [aux_sym_tactic_repeat2] = aux_sym_tactic_repeat2,
  [aux_sym_prio_repeat1] = aux_sym_prio_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_and_function_repeat1] = aux_sym_and_function_repeat1,
  [aux_sym_not_function_repeat1] = aux_sym_not_function_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_rule_attrs_repeat1] = aux_sym_rule_attrs_repeat1,
  [aux_sym_let_block_repeat1] = aux_sym_let_block_repeat1,
  [aux_sym_lemma_attrs_repeat1] = aux_sym_lemma_attrs_repeat1,
  [aux_sym_proof_skeleton_repeat1] = aux_sym_proof_skeleton_repeat1,
  [aux_sym_goal_repeat1] = aux_sym_goal_repeat1,
  [aux_sym_natural_subscr_repeat1] = aux_sym_natural_subscr_repeat1,
  [aux_sym_tuple_term_repeat1] = aux_sym_tuple_term_repeat1,
  [aux_sym__msetterm_repeat1] = aux_sym__msetterm_repeat1,
  [aux_sym__xorterm_repeat1] = aux_sym__xorterm_repeat1,
  [aux_sym__multterm_repeat1] = aux_sym__multterm_repeat1,
  [aux_sym__expterm_repeat1] = aux_sym__expterm_repeat1,
  [aux_sym_facts_repeat1] = aux_sym_facts_repeat1,
  [aux_sym_fact_annotes_repeat1] = aux_sym_fact_annotes_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_theory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKprivate_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_equations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtins] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diffie_DASHhellman] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hashing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symmetric_DASHencryption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asymmetric_DASHencryption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bilinear_DASHpairing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revealing_DASHsigning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heuristic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oracle_goal_ranking_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tactic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_presort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deprio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smallest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isFactName] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isInFactTerms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dhreNoise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defaultNoise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reasonableNoncesNoise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonAbsurdGoal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colour_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restriction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lemma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sources] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_induction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide_lemma_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heuristic_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all_DASHtrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists_DASHtrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOLVED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sorry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simplify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contradiction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_induction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splitEqs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_formal_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fresh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_precomp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_All] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [sym_hexcolor] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_security_protocol_theory] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__signature_spec] = {
    .visible = false,
    .named = true,
  },
  [sym_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_function_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_arity] = {
    .visible = true,
    .named = true,
  },
  [sym_equations] = {
    .visible = true,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_built_ins] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in] = {
    .visible = true,
    .named = true,
  },
  [sym_global_heuristic] = {
    .visible = true,
    .named = true,
  },
  [sym_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_goal_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_tactic] = {
    .visible = true,
    .named = true,
  },
  [sym_presort] = {
    .visible = true,
    .named = true,
  },
  [sym_prio] = {
    .visible = true,
    .named = true,
  },
  [sym_deprio] = {
    .visible = true,
    .named = true,
  },
  [sym_post_ranking] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_and_function] = {
    .visible = true,
    .named = true,
  },
  [sym_not_function] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_variants] = {
    .visible = true,
    .named = true,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_let_block] = {
    .visible = true,
    .named = true,
  },
  [sym_msg_var] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_trace_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_proof_skeleton] = {
    .visible = true,
    .named = true,
  },
  [sym_proof_method] = {
    .visible = true,
    .named = true,
  },
  [sym_goal] = {
    .visible = true,
    .named = true,
  },
  [sym_node_var] = {
    .visible = true,
    .named = true,
  },
  [sym_natural] = {
    .visible = true,
    .named = true,
  },
  [sym_natural_subscr] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_term] = {
    .visible = true,
    .named = true,
  },
  [sym__msetterm] = {
    .visible = false,
    .named = true,
  },
  [sym__xorterm] = {
    .visible = false,
    .named = true,
  },
  [sym__multterm] = {
    .visible = false,
    .named = true,
  },
  [sym__expterm] = {
    .visible = false,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nonnode_var] = {
    .visible = true,
    .named = true,
  },
  [sym_facts] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_annotes] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_annote] = {
    .visible = true,
    .named = true,
  },
  [sym_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_imp] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_lvar] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_equations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_built_ins_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_heuristic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tactic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tactic_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prio_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_and_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lemma_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proof_skeleton_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_natural_subscr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__msetterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__xorterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_facts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fact_annotes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 19,
  [22] = 19,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 30,
  [43] = 33,
  [44] = 44,
  [45] = 45,
  [46] = 35,
  [47] = 47,
  [48] = 48,
  [49] = 34,
  [50] = 50,
  [51] = 38,
  [52] = 52,
  [53] = 39,
  [54] = 37,
  [55] = 55,
  [56] = 56,
  [57] = 44,
  [58] = 47,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 52,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 48,
  [68] = 66,
  [69] = 69,
  [70] = 65,
  [71] = 64,
  [72] = 72,
  [73] = 60,
  [74] = 74,
  [75] = 69,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 84,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 85,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 112,
  [119] = 119,
  [120] = 116,
  [121] = 121,
  [122] = 122,
  [123] = 121,
  [124] = 116,
  [125] = 125,
  [126] = 121,
  [127] = 112,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 131,
  [132] = 132,
  [133] = 132,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 36,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 146,
  [147] = 55,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 61,
  [162] = 72,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 79,
  [177] = 177,
  [178] = 170,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 172,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 76,
  [190] = 190,
  [191] = 191,
  [192] = 78,
  [193] = 193,
  [194] = 77,
  [195] = 195,
  [196] = 196,
  [197] = 90,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 106,
  [204] = 108,
  [205] = 109,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 83,
  [215] = 209,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 103,
  [220] = 99,
  [221] = 221,
  [222] = 91,
  [223] = 206,
  [224] = 224,
  [225] = 225,
  [226] = 208,
  [227] = 227,
  [228] = 228,
  [229] = 227,
  [230] = 95,
  [231] = 92,
  [232] = 232,
  [233] = 198,
  [234] = 234,
  [235] = 235,
  [236] = 98,
  [237] = 221,
  [238] = 238,
  [239] = 239,
  [240] = 232,
  [241] = 97,
  [242] = 94,
  [243] = 86,
  [244] = 244,
  [245] = 245,
  [246] = 175,
  [247] = 247,
  [248] = 55,
  [249] = 249,
  [250] = 195,
  [251] = 251,
  [252] = 175,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 170,
  [257] = 257,
  [258] = 258,
  [259] = 169,
  [260] = 170,
  [261] = 261,
  [262] = 262,
  [263] = 262,
  [264] = 258,
  [265] = 265,
  [266] = 253,
  [267] = 267,
  [268] = 255,
  [269] = 269,
  [270] = 270,
  [271] = 169,
  [272] = 272,
  [273] = 172,
  [274] = 172,
  [275] = 275,
  [276] = 171,
  [277] = 171,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 281,
  [284] = 72,
  [285] = 285,
  [286] = 286,
  [287] = 61,
  [288] = 288,
  [289] = 280,
  [290] = 80,
  [291] = 81,
  [292] = 74,
  [293] = 175,
  [294] = 294,
  [295] = 171,
  [296] = 76,
  [297] = 169,
  [298] = 298,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 86,
  [303] = 109,
  [304] = 103,
  [305] = 94,
  [306] = 89,
  [307] = 106,
  [308] = 88,
  [309] = 108,
  [310] = 234,
  [311] = 83,
  [312] = 99,
  [313] = 91,
  [314] = 87,
  [315] = 96,
  [316] = 95,
  [317] = 97,
  [318] = 92,
  [319] = 98,
  [320] = 90,
  [321] = 117,
  [322] = 119,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 61,
  [327] = 125,
  [328] = 328,
  [329] = 329,
  [330] = 217,
  [331] = 122,
  [332] = 332,
  [333] = 332,
  [334] = 334,
  [335] = 109,
  [336] = 91,
  [337] = 97,
  [338] = 142,
  [339] = 103,
  [340] = 232,
  [341] = 131,
  [342] = 342,
  [343] = 76,
  [344] = 234,
  [345] = 83,
  [346] = 94,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 135,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 140,
  [355] = 325,
  [356] = 356,
  [357] = 357,
  [358] = 323,
  [359] = 359,
  [360] = 360,
  [361] = 139,
  [362] = 362,
  [363] = 363,
  [364] = 352,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 367,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 374,
  [377] = 356,
  [378] = 378,
  [379] = 357,
  [380] = 380,
  [381] = 381,
  [382] = 375,
  [383] = 334,
  [384] = 363,
  [385] = 349,
  [386] = 348,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 328,
  [391] = 391,
  [392] = 392,
  [393] = 373,
  [394] = 392,
  [395] = 369,
  [396] = 381,
  [397] = 397,
  [398] = 372,
  [399] = 359,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 422,
  [429] = 423,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 421,
  [435] = 401,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 431,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 436,
  [446] = 446,
  [447] = 440,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 427,
  [452] = 413,
  [453] = 453,
  [454] = 404,
  [455] = 439,
  [456] = 440,
  [457] = 457,
  [458] = 415,
  [459] = 459,
  [460] = 460,
  [461] = 401,
  [462] = 462,
  [463] = 463,
  [464] = 436,
  [465] = 465,
  [466] = 449,
  [467] = 467,
  [468] = 416,
  [469] = 410,
  [470] = 467,
  [471] = 471,
  [472] = 463,
  [473] = 406,
  [474] = 415,
  [475] = 457,
  [476] = 476,
  [477] = 477,
  [478] = 442,
  [479] = 459,
  [480] = 460,
  [481] = 416,
  [482] = 482,
  [483] = 402,
  [484] = 471,
  [485] = 477,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 500,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 503,
  [514] = 512,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 269,
  [520] = 503,
  [521] = 489,
  [522] = 494,
  [523] = 492,
  [524] = 78,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 362,
  [529] = 529,
  [530] = 516,
  [531] = 247,
  [532] = 532,
  [533] = 368,
  [534] = 490,
  [535] = 389,
  [536] = 391,
  [537] = 512,
  [538] = 501,
  [539] = 539,
  [540] = 387,
  [541] = 397,
  [542] = 542,
  [543] = 251,
  [544] = 500,
  [545] = 267,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 583,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 588,
  [598] = 598,
  [599] = 599,
  [600] = 560,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 553,
  [606] = 549,
  [607] = 607,
  [608] = 589,
  [609] = 609,
  [610] = 604,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 581,
  [616] = 616,
  [617] = 587,
  [618] = 582,
  [619] = 619,
  [620] = 584,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 581,
  [626] = 583,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 611,
  [633] = 633,
  [634] = 580,
  [635] = 635,
  [636] = 612,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 631,
  [645] = 584,
  [646] = 582,
  [647] = 647,
  [648] = 547,
  [649] = 649,
  [650] = 650,
  [651] = 609,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 613,
  [658] = 568,
  [659] = 659,
  [660] = 650,
  [661] = 564,
  [662] = 558,
  [663] = 555,
  [664] = 552,
  [665] = 629,
  [666] = 616,
  [667] = 647,
  [668] = 668,
  [669] = 581,
  [670] = 547,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 614,
  [677] = 677,
  [678] = 559,
  [679] = 679,
  [680] = 551,
  [681] = 681,
  [682] = 599,
  [683] = 621,
  [684] = 684,
  [685] = 685,
  [686] = 607,
  [687] = 578,
  [688] = 688,
  [689] = 566,
  [690] = 690,
  [691] = 557,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 640,
  [701] = 701,
  [702] = 546,
  [703] = 703,
  [704] = 576,
  [705] = 705,
  [706] = 659,
  [707] = 707,
  [708] = 637,
  [709] = 709,
  [710] = 684,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(471);
      if (lookahead == '!') ADVANCE(853);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') ADVANCE(813);
      if (lookahead == '$') ADVANCE(847);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '*') ADVANCE(843);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(855);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(676);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(836);
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '>') ADVANCE(837);
      if (lookahead == '@') ADVANCE(809);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(696);
      if (lookahead == 'E') ADVANCE(771);
      if (lookahead == 'F') ADVANCE(865);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'O') ADVANCE(725);
      if (lookahead == 'P') ADVANCE(700);
      if (lookahead == 'S') ADVANCE(702);
      if (lookahead == 'T') ADVANCE(868);
      if (lookahead == 'X') ADVANCE(93);
      if (lookahead == '[') ADVANCE(761);
      if (lookahead == '\\') SKIP(470)
      if (lookahead == ']') ADVANCE(762);
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead == 'q') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'v') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(327);
      if (lookahead == '{') ADVANCE(733);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '}') ADVANCE(734);
      if (lookahead == '~') ADVANCE(851);
      if (lookahead == 172) ADVANCE(863);
      if (lookahead == 8320) ADVANCE(815);
      if (lookahead == 8321) ADVANCE(816);
      if (lookahead == 8322) ADVANCE(817);
      if (lookahead == 8323) ADVANCE(818);
      if (lookahead == 8324) ADVANCE(819);
      if (lookahead == 8325) ADVANCE(820);
      if (lookahead == 8326) ADVANCE(821);
      if (lookahead == 8327) ADVANCE(822);
      if (lookahead == 8328) ADVANCE(823);
      if (lookahead == 8329) ADVANCE(824);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8704) ADVANCE(877);
      if (lookahead == 8707) ADVANCE(874);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == 8853) ADVANCE(841);
      if (lookahead == 8868) ADVANCE(867);
      if (lookahead == 8869) ADVANCE(864);
      if (lookahead == 9654) ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(63)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(853);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') ADVANCE(813);
      if (lookahead == '$') ADVANCE(847);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(835);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'E') ADVANCE(667);
      if (lookahead == 'F') ADVANCE(866);
      if (lookahead == 'T') ADVANCE(869);
      if (lookahead == '[') ADVANCE(761);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '~') ADVANCE(850);
      if (lookahead == 172) ADVANCE(863);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8704) ADVANCE(877);
      if (lookahead == 8707) ADVANCE(874);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == 8868) ADVANCE(867);
      if (lookahead == 8869) ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(853);
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') ADVANCE(813);
      if (lookahead == '$') ADVANCE(847);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(836);
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '~') ADVANCE(849);
      if (lookahead == 8320) ADVANCE(815);
      if (lookahead == 8321) ADVANCE(816);
      if (lookahead == 8322) ADVANCE(817);
      if (lookahead == 8323) ADVANCE(818);
      if (lookahead == 8324) ADVANCE(819);
      if (lookahead == 8325) ADVANCE(820);
      if (lookahead == 8326) ADVANCE(821);
      if (lookahead == 8327) ADVANCE(822);
      if (lookahead == 8328) ADVANCE(823);
      if (lookahead == 8329) ADVANCE(824);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(853);
      if (lookahead == '#') ADVANCE(813);
      if (lookahead == '$') ADVANCE(847);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(835);
      if (lookahead == '=') ADVANCE(681);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'E') ADVANCE(667);
      if (lookahead == 'F') ADVANCE(866);
      if (lookahead == 'T') ADVANCE(869);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == '~') ADVANCE(850);
      if (lookahead == 172) ADVANCE(863);
      if (lookahead == 8704) ADVANCE(877);
      if (lookahead == 8707) ADVANCE(874);
      if (lookahead == 8868) ADVANCE(867);
      if (lookahead == 8869) ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(853);
      if (lookahead == '#') ADVANCE(813);
      if (lookahead == '$') ADVANCE(847);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(835);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'E') ADVANCE(667);
      if (lookahead == 'F') ADVANCE(866);
      if (lookahead == 'T') ADVANCE(869);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == '~') ADVANCE(850);
      if (lookahead == 8704) ADVANCE(877);
      if (lookahead == 8707) ADVANCE(874);
      if (lookahead == 8868) ADVANCE(867);
      if (lookahead == 8869) ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '#') ADVANCE(467);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '>') ADVANCE(837);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead == 'p') ADVANCE(617);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == '~') ADVANCE(461);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '*') ADVANCE(842);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(854);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '>') ADVANCE(837);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(770);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(93);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(762);
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == 'q') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == 'x') ADVANCE(327);
      if (lookahead == '{') ADVANCE(732);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == 8853) ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '*') ADVANCE(842);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(836);
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '>') ADVANCE(837);
      if (lookahead == 'X') ADVANCE(93);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == 8853) ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(682);
      if (lookahead == '>') ADVANCE(837);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(714);
      if (lookahead == '&') ADVANCE(740);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '|') ADVANCE(739);
      if (lookahead == 8658) ADVANCE(860);
      if (lookahead == 8660) ADVANCE(858);
      if (lookahead == 8741) ADVANCE(811);
      if (lookahead == 8743) ADVANCE(862);
      if (lookahead == 8744) ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(847);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(835);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '~') ADVANCE(850);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ')') ADVANCE(773);
      if (lookahead == '*') ADVANCE(842);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(835);
      if (lookahead == '=') ADVANCE(681);
      if (lookahead == '@') ADVANCE(809);
      if (lookahead == 'X') ADVANCE(93);
      if (lookahead == '[') ADVANCE(761);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == 8853) ADVANCE(841);
      if (lookahead == 9654) ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == '*') ADVANCE(842);
      if (lookahead == '+') ADVANCE(838);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == 'X') ADVANCE(490);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == 8853) ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 49:
      if (lookahead == '(') ADVANCE(768);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '.') ADVANCE(778);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(880);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(825);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(879);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(399);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(699);
      if (lookahead == 'O') ADVANCE(726);
      if (lookahead == 'P') ADVANCE(701);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(713);
      if (lookahead == 'p') ADVANCE(709);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(489);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'b') ADVANCE(659);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(617);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'f') ADVANCE(658);
      if (lookahead == 'h') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == 'v') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(788);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(787);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(774);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(775);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(763);
      if (lookahead == '[') ADVANCE(764);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(857);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(859);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(810);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(765);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(772);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(772);
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(791);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(301);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'G') ADVANCE(333);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(341);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(344);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(345);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(839);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 97:
      if (lookahead == 'V') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(677);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(848);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(403);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(694);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == 'y') ADVANCE(793);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'h') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(410);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(457);
      END_STATE();
    case 208:
      if (lookahead == 'f') ADVANCE(242);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(779);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(686);
      END_STATE();
    case 211:
      if (lookahead == 'g') ADVANCE(690);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(693);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(689);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(852);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 221:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'y') ADVANCE(793);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(755);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'q') ADVANCE(441);
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(372);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(672);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 450:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 451:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 452:
      if (lookahead == 'x') ADVANCE(743);
      END_STATE();
    case 453:
      if (lookahead == 'x') ADVANCE(411);
      END_STATE();
    case 454:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 455:
      if (lookahead == 'y') ADVANCE(472);
      END_STATE();
    case 456:
      if (lookahead == 'y') ADVANCE(798);
      END_STATE();
    case 457:
      if (lookahead == 'y') ADVANCE(800);
      END_STATE();
    case 458:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 459:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 460:
      if (lookahead == '}') ADVANCE(834);
      END_STATE();
    case 461:
      if (lookahead == '~') ADVANCE(77);
      END_STATE();
    case 462:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(878);
      END_STATE();
    case 463:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      END_STATE();
    case 464:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(463);
      END_STATE();
    case 465:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(464);
      END_STATE();
    case 466:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      END_STATE();
    case 467:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      END_STATE();
    case 468:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(880);
      if (lookahead == '\r') ADVANCE(881);
      END_STATE();
    case 469:
      if (eof) ADVANCE(471);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 470:
      if (eof) ADVANCE(471);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(469)
      END_STATE();
    case 471:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_theory);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(505);
      if (lookahead == 'I') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'V') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(534);
      if (lookahead == 's') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'h') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'u') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == 'o') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == 'q') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 't') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'q') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(549);
      if (lookahead == 'y') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(880);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_LBRACKprivate_RBRACK);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_arity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_equations);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_equations);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_builtins);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_builtins);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_diffie_DASHhellman);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_hashing);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_symmetric_DASHencryption);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_asymmetric_DASHencryption);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_signing);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_bilinear_DASHpairing);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_multiset);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_revealing_DASHsigning);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (lookahead == '=') ADVANCE(788);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_heuristic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(721);
      if (lookahead == '\r') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '"') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(722);
      if (lookahead != 0) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '*') ADVANCE(718);
      if (lookahead == '/') ADVANCE(724);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '*') ADVANCE(718);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '*') ADVANCE(719);
      if (lookahead == '/') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead == '/') ADVANCE(720);
      if (lookahead == '\\') ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(717);
      if (lookahead == '\r') ADVANCE(723);
      if (lookahead == '"') ADVANCE(880);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(717);
      if (lookahead == '"') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(722);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_oracle_goal_ranking_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_presort);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_prio);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_prio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(825);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_deprio);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_deprio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_smallest);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_isFactName);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_isFactName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_isInFactTerms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_dhreNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_defaultNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_reasonableNoncesNoise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_nonAbsurdGoal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_RBRACK_DASH_GT);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_modulo);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'x') ADVANCE(872);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_AC);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_color_EQ);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_colour_EQ);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_restriction);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_restriction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_lemma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_sources);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_reuse);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_use_induction);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_hide_lemma_EQ);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_heuristic_EQ);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_all_DASHtrace);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_exists_DASHtrace);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_SOLVED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_qed);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_sorry);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_sorry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_solve);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_solve);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_contradiction);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_contradiction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_induction);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_induction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_splitEqs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead == '\r') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(833);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(833);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '\n') ADVANCE(833);
      if (lookahead == '*') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(831);
      if (lookahead != 0) ADVANCE(828);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(828);
      if (lookahead != 0) ADVANCE(833);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead == '/') ADVANCE(829);
      if (lookahead == '\\') ADVANCE(826);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(833);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(828);
      if (lookahead == '\r') ADVANCE(832);
      if (lookahead == '*') ADVANCE(880);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(828);
      if (lookahead == '*') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(831);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_formal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '}') ADVANCE(834);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_TILDE_SQUOTE);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(846);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\'') ADVANCE(846);
      if (lookahead == '~') ADVANCE(77);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_fresh);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_no_precomp);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_Ex);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_Ex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_All);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_All);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(671);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_hexcolor);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(880);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(468);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 45},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 42},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 41},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 63},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 63},
  [80] = {.lex_state = 42},
  [81] = {.lex_state = 42},
  [82] = {.lex_state = 38},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 42},
  [87] = {.lex_state = 42},
  [88] = {.lex_state = 42},
  [89] = {.lex_state = 42},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 42},
  [93] = {.lex_state = 64},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 42},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 42},
  [99] = {.lex_state = 42},
  [100] = {.lex_state = 46},
  [101] = {.lex_state = 64},
  [102] = {.lex_state = 64},
  [103] = {.lex_state = 42},
  [104] = {.lex_state = 38},
  [105] = {.lex_state = 64},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 38},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 42},
  [110] = {.lex_state = 46},
  [111] = {.lex_state = 46},
  [112] = {.lex_state = 46},
  [113] = {.lex_state = 46},
  [114] = {.lex_state = 46},
  [115] = {.lex_state = 46},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 42},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 42},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 42},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 46},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 46},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 65},
  [137] = {.lex_state = 65},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 46},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 46},
  [144] = {.lex_state = 46},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 45},
  [149] = {.lex_state = 42},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 65},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 66},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 38},
  [159] = {.lex_state = 38},
  [160] = {.lex_state = 66},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 42},
  [164] = {.lex_state = 42},
  [165] = {.lex_state = 45},
  [166] = {.lex_state = 66},
  [167] = {.lex_state = 49},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 45},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 47},
  [174] = {.lex_state = 67},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 45},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 49},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 49},
  [183] = {.lex_state = 49},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 49},
  [186] = {.lex_state = 49},
  [187] = {.lex_state = 49},
  [188] = {.lex_state = 49},
  [189] = {.lex_state = 49},
  [190] = {.lex_state = 49},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 49},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 49},
  [198] = {.lex_state = 49},
  [199] = {.lex_state = 45},
  [200] = {.lex_state = 45},
  [201] = {.lex_state = 49},
  [202] = {.lex_state = 49},
  [203] = {.lex_state = 49},
  [204] = {.lex_state = 49},
  [205] = {.lex_state = 49},
  [206] = {.lex_state = 67},
  [207] = {.lex_state = 45},
  [208] = {.lex_state = 49},
  [209] = {.lex_state = 49},
  [210] = {.lex_state = 47},
  [211] = {.lex_state = 49},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 45},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 67},
  [216] = {.lex_state = 49},
  [217] = {.lex_state = 47},
  [218] = {.lex_state = 47},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 49},
  [221] = {.lex_state = 49},
  [222] = {.lex_state = 49},
  [223] = {.lex_state = 49},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 45},
  [226] = {.lex_state = 67},
  [227] = {.lex_state = 49},
  [228] = {.lex_state = 49},
  [229] = {.lex_state = 67},
  [230] = {.lex_state = 49},
  [231] = {.lex_state = 49},
  [232] = {.lex_state = 45},
  [233] = {.lex_state = 67},
  [234] = {.lex_state = 45},
  [235] = {.lex_state = 45},
  [236] = {.lex_state = 49},
  [237] = {.lex_state = 67},
  [238] = {.lex_state = 45},
  [239] = {.lex_state = 45},
  [240] = {.lex_state = 45},
  [241] = {.lex_state = 49},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 49},
  [246] = {.lex_state = 37},
  [247] = {.lex_state = 49},
  [248] = {.lex_state = 48},
  [249] = {.lex_state = 49},
  [250] = {.lex_state = 37},
  [251] = {.lex_state = 49},
  [252] = {.lex_state = 45},
  [253] = {.lex_state = 49},
  [254] = {.lex_state = 45},
  [255] = {.lex_state = 49},
  [256] = {.lex_state = 37},
  [257] = {.lex_state = 49},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 45},
  [260] = {.lex_state = 37},
  [261] = {.lex_state = 42},
  [262] = {.lex_state = 42},
  [263] = {.lex_state = 42},
  [264] = {.lex_state = 38},
  [265] = {.lex_state = 49},
  [266] = {.lex_state = 42},
  [267] = {.lex_state = 49},
  [268] = {.lex_state = 42},
  [269] = {.lex_state = 49},
  [270] = {.lex_state = 42},
  [271] = {.lex_state = 37},
  [272] = {.lex_state = 49},
  [273] = {.lex_state = 37},
  [274] = {.lex_state = 37},
  [275] = {.lex_state = 38},
  [276] = {.lex_state = 45},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 49},
  [279] = {.lex_state = 49},
  [280] = {.lex_state = 38},
  [281] = {.lex_state = 42},
  [282] = {.lex_state = 42},
  [283] = {.lex_state = 42},
  [284] = {.lex_state = 48},
  [285] = {.lex_state = 42},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 48},
  [288] = {.lex_state = 42},
  [289] = {.lex_state = 38},
  [290] = {.lex_state = 48},
  [291] = {.lex_state = 48},
  [292] = {.lex_state = 48},
  [293] = {.lex_state = 37},
  [294] = {.lex_state = 42},
  [295] = {.lex_state = 37},
  [296] = {.lex_state = 48},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 42},
  [299] = {.lex_state = 42},
  [300] = {.lex_state = 42},
  [301] = {.lex_state = 42},
  [302] = {.lex_state = 48},
  [303] = {.lex_state = 48},
  [304] = {.lex_state = 48},
  [305] = {.lex_state = 48},
  [306] = {.lex_state = 48},
  [307] = {.lex_state = 48},
  [308] = {.lex_state = 48},
  [309] = {.lex_state = 48},
  [310] = {.lex_state = 45},
  [311] = {.lex_state = 48},
  [312] = {.lex_state = 48},
  [313] = {.lex_state = 48},
  [314] = {.lex_state = 48},
  [315] = {.lex_state = 48},
  [316] = {.lex_state = 48},
  [317] = {.lex_state = 48},
  [318] = {.lex_state = 48},
  [319] = {.lex_state = 48},
  [320] = {.lex_state = 48},
  [321] = {.lex_state = 48},
  [322] = {.lex_state = 48},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 41},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 38},
  [327] = {.lex_state = 48},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 38},
  [330] = {.lex_state = 38},
  [331] = {.lex_state = 48},
  [332] = {.lex_state = 42},
  [333] = {.lex_state = 42},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 38},
  [336] = {.lex_state = 38},
  [337] = {.lex_state = 38},
  [338] = {.lex_state = 38},
  [339] = {.lex_state = 38},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 48},
  [342] = {.lex_state = 38},
  [343] = {.lex_state = 38},
  [344] = {.lex_state = 37},
  [345] = {.lex_state = 38},
  [346] = {.lex_state = 38},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 38},
  [349] = {.lex_state = 38},
  [350] = {.lex_state = 44},
  [351] = {.lex_state = 38},
  [352] = {.lex_state = 38},
  [353] = {.lex_state = 44},
  [354] = {.lex_state = 44},
  [355] = {.lex_state = 37},
  [356] = {.lex_state = 38},
  [357] = {.lex_state = 38},
  [358] = {.lex_state = 37},
  [359] = {.lex_state = 38},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 44},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 42},
  [364] = {.lex_state = 38},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 38},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 38},
  [370] = {.lex_state = 44},
  [371] = {.lex_state = 38},
  [372] = {.lex_state = 38},
  [373] = {.lex_state = 38},
  [374] = {.lex_state = 38},
  [375] = {.lex_state = 38},
  [376] = {.lex_state = 38},
  [377] = {.lex_state = 38},
  [378] = {.lex_state = 42},
  [379] = {.lex_state = 38},
  [380] = {.lex_state = 42},
  [381] = {.lex_state = 38},
  [382] = {.lex_state = 38},
  [383] = {.lex_state = 37},
  [384] = {.lex_state = 42},
  [385] = {.lex_state = 38},
  [386] = {.lex_state = 38},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 42},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 37},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 38},
  [393] = {.lex_state = 38},
  [394] = {.lex_state = 38},
  [395] = {.lex_state = 38},
  [396] = {.lex_state = 38},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 38},
  [399] = {.lex_state = 38},
  [400] = {.lex_state = 38},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 38},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 39},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 38},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 38},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 38},
  [422] = {.lex_state = 37},
  [423] = {.lex_state = 42},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 42},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 37},
  [432] = {.lex_state = 38},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 38},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 38},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 42},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 42},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 38},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 42},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 42},
  [477] = {.lex_state = 42},
  [478] = {.lex_state = 38},
  [479] = {.lex_state = 37},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 42},
  [486] = {.lex_state = 39},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 38},
  [489] = {.lex_state = 37},
  [490] = {.lex_state = 37},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 37},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 37},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 42},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 38},
  [500] = {.lex_state = 42},
  [501] = {.lex_state = 721},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 42},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 42},
  [508] = {.lex_state = 39},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 42},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 41},
  [516] = {.lex_state = 37},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 42},
  [521] = {.lex_state = 37},
  [522] = {.lex_state = 37},
  [523] = {.lex_state = 37},
  [524] = {.lex_state = 41},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 44},
  [527] = {.lex_state = 39},
  [528] = {.lex_state = 37},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 39},
  [533] = {.lex_state = 37},
  [534] = {.lex_state = 37},
  [535] = {.lex_state = 37},
  [536] = {.lex_state = 37},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 721},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 37},
  [541] = {.lex_state = 37},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 42},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 38},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 37},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 38},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 37},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 38},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 38},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 39},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 38},
  [598] = {.lex_state = 38},
  [599] = {.lex_state = 37},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 39},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 38},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 38},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 38},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 37},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 38},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 38},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 42},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 721},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 41},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 721},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 38},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 38},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 38},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 38},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 39},
  [669] = {.lex_state = 38},
  [670] = {.lex_state = 38},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 37},
  [673] = {.lex_state = 41},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 38},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 37},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 37},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 37},
  [683] = {.lex_state = 37},
  [684] = {.lex_state = 38},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 38},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 830},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 38},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 37},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_theory] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_arity_token1] = ACTIONS(1),
    [anon_sym_equations] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_builtins] = ACTIONS(1),
    [anon_sym_diffie_DASHhellman] = ACTIONS(1),
    [anon_sym_hashing] = ACTIONS(1),
    [anon_sym_asymmetric_DASHencryption] = ACTIONS(1),
    [anon_sym_bilinear_DASHpairing] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_multiset] = ACTIONS(1),
    [anon_sym_revealing_DASHsigning] = ACTIONS(1),
    [anon_sym_heuristic] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_tactic] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_deprio] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_dhreNoise] = ACTIONS(1),
    [anon_sym_defaultNoise] = ACTIONS(1),
    [anon_sym_reasonableNoncesNoise] = ACTIONS(1),
    [anon_sym_nonAbsurdGoal] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_LBRACK] = ACTIONS(1),
    [anon_sym_variants] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_modulo] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_AC] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_msg] = ACTIONS(1),
    [anon_sym_restriction] = ACTIONS(1),
    [anon_sym_lemma] = ACTIONS(1),
    [anon_sym_reuse] = ACTIONS(1),
    [anon_sym_use_induction] = ACTIONS(1),
    [anon_sym_hide_lemma_EQ] = ACTIONS(1),
    [anon_sym_heuristic_EQ] = ACTIONS(1),
    [anon_sym_all_DASHtrace] = ACTIONS(1),
    [anon_sym_exists_DASHtrace] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_qed] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_LBRACE_STAR] = ACTIONS(1),
    [anon_sym_STAR_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_TILDE_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_fresh] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_no_precomp] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_Ex] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_All] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(709),
    [sym_security_protocol_theory] = STATE(707),
    [anon_sym_theory] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_splitEqs,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(443), 1,
      sym_formula,
    STATE(486), 1,
      sym_node_var,
    STATE(517), 1,
      sym_fact,
    STATE(549), 1,
      sym_goal,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [114] = 35,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_splitEqs,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(443), 1,
      sym_formula,
    STATE(486), 1,
      sym_node_var,
    STATE(517), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    STATE(606), 1,
      sym_goal,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [228] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(532), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [336] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(407), 1,
      sym_node_var,
    STATE(532), 1,
      sym__msetterm,
    STATE(575), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [444] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(591), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [552] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(172), 1,
      sym_negation,
    STATE(175), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(234), 1,
      sym_disjunction,
    STATE(239), 1,
      sym_formula,
    STATE(240), 1,
      sym_imp,
    STATE(289), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [660] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(548), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [768] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(574), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [876] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(593), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [984] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(172), 1,
      sym_negation,
    STATE(175), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(232), 1,
      sym_imp,
    STATE(234), 1,
      sym_disjunction,
    STATE(239), 1,
      sym_formula,
    STATE(289), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1092] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(554), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1200] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(562), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1308] = 33,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(340), 1,
      sym_imp,
    STATE(486), 1,
      sym_node_var,
    STATE(504), 1,
      sym_formula,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1416] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(196), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(274), 1,
      sym_negation,
    STATE(280), 1,
      sym_quantifier,
    STATE(293), 1,
      sym_conjunction,
    STATE(344), 1,
      sym_disjunction,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1521] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(196), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(252), 1,
      sym_conjunction,
    STATE(289), 1,
      sym_quantifier,
    STATE(310), 1,
      sym_disjunction,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1626] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(207), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(274), 1,
      sym_negation,
    STATE(280), 1,
      sym_quantifier,
    STATE(293), 1,
      sym_conjunction,
    STATE(344), 1,
      sym_disjunction,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1731] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(207), 1,
      sym_imp,
    STATE(225), 1,
      sym_atom,
    STATE(234), 1,
      sym_disjunction,
    STATE(246), 1,
      sym_conjunction,
    STATE(273), 1,
      sym_negation,
    STATE(280), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1836] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(184), 1,
      sym_negation,
    STATE(200), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(289), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [1935] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(200), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(274), 1,
      sym_negation,
    STATE(280), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2034] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(200), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(273), 1,
      sym_negation,
    STATE(280), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2133] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(172), 1,
      sym_negation,
    STATE(200), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_atom,
    STATE(289), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2232] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(43), 1,
      anon_sym_18,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(199), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(280), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2328] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_18,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(199), 1,
      sym_negation,
    STATE(225), 1,
      sym_atom,
    STATE(289), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2424] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(238), 1,
      sym_atom,
    STATE(289), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2511] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_last,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(238), 1,
      sym_atom,
    STATE(280), 1,
      sym_quantifier,
    STATE(486), 1,
      sym_node_var,
    STATE(594), 1,
      sym_fact,
    STATE(595), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    ACTIONS(29), 2,
      anon_sym_19,
      anon_sym_20,
    ACTIONS(31), 2,
      anon_sym_F,
      anon_sym_T,
    ACTIONS(35), 2,
      anon_sym_Ex,
      anon_sym_All,
    ACTIONS(37), 2,
      anon_sym_21,
      anon_sym_22,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [2598] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(48), 1,
      sym_not_function,
    STATE(66), 1,
      sym_and_function,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(50), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(45), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2641] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(48), 1,
      sym_not_function,
    STATE(66), 1,
      sym_and_function,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(57), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(53), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2684] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(48), 1,
      sym_not_function,
    STATE(66), 1,
      sym_and_function,
    STATE(27), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(57), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(59), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(66), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(61), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2763] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(72), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(68), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2805] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(77), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(45), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(80), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(64), 1,
      sym_not_function,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(93), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(86), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(96), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(36), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(77), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(102), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(100), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [2997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(48), 1,
      sym_not_function,
    STATE(69), 1,
      sym_and_function,
    ACTIONS(115), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(108), 12,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(80), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(120), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(118), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3111] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    STATE(32), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(72), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(122), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(36), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(77), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(126), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
    ACTIONS(124), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(66), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(61), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(80), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(135), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3292] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_end,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      anon_sym_functions,
    ACTIONS(145), 1,
      anon_sym_equations,
    ACTIONS(147), 1,
      anon_sym_builtins,
    ACTIONS(149), 1,
      anon_sym_heuristic,
    ACTIONS(151), 1,
      anon_sym_tactic,
    ACTIONS(153), 1,
      anon_sym_rule,
    ACTIONS(155), 1,
      anon_sym_restriction,
    ACTIONS(157), 1,
      anon_sym_lemma,
    STATE(174), 1,
      sym_simple_rule,
    STATE(693), 1,
      sym_body,
    STATE(56), 11,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_tactic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [3345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(98), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(96), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(159), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_AMP,
    STATE(52), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(163), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3446] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(71), 1,
      sym_not_function,
    ACTIONS(88), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(172), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(86), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(175), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3520] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(80), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(182), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_not_function_repeat1,
    ACTIONS(120), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(118), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3625] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(75), 1,
      sym_and_function,
    ACTIONS(189), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
    ACTIONS(108), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(194), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [3702] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(143), 1,
      anon_sym_functions,
    ACTIONS(145), 1,
      anon_sym_equations,
    ACTIONS(147), 1,
      anon_sym_builtins,
    ACTIONS(149), 1,
      anon_sym_heuristic,
    ACTIONS(151), 1,
      anon_sym_tactic,
    ACTIONS(153), 1,
      anon_sym_rule,
    ACTIONS(155), 1,
      anon_sym_restriction,
    ACTIONS(157), 1,
      anon_sym_lemma,
    ACTIONS(202), 1,
      anon_sym_end,
    STATE(174), 1,
      sym_simple_rule,
    STATE(62), 11,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_tactic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [3752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(135), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(159), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(204), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(175), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    STATE(65), 1,
      aux_sym_function_repeat1,
    ACTIONS(207), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(211), 20,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [3908] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_end,
    ACTIONS(217), 1,
      sym_ident,
    ACTIONS(220), 1,
      anon_sym_functions,
    ACTIONS(223), 1,
      anon_sym_equations,
    ACTIONS(226), 1,
      anon_sym_builtins,
    ACTIONS(229), 1,
      anon_sym_heuristic,
    ACTIONS(232), 1,
      anon_sym_tactic,
    ACTIONS(235), 1,
      anon_sym_rule,
    ACTIONS(238), 1,
      anon_sym_restriction,
    ACTIONS(241), 1,
      anon_sym_lemma,
    STATE(174), 1,
      sym_simple_rule,
    STATE(62), 11,
      sym__signature_spec,
      sym_functions,
      sym_equations,
      sym_built_ins,
      sym_global_heuristic,
      sym_tactic,
      sym_rule,
      sym_restriction,
      sym_lemma,
      sym_formal_comment,
      aux_sym_body_repeat1,
  [3958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(244), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(182), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(175), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    STATE(65), 1,
      aux_sym_function_repeat1,
    ACTIONS(246), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_function_repeat1,
    ACTIONS(251), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(244), 1,
      anon_sym_AMP,
    STATE(63), 1,
      aux_sym_and_function_repeat1,
    ACTIONS(163), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_function_repeat1,
    ACTIONS(251), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(246), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_prio,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_function_repeat1,
    ACTIONS(246), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(175), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(262), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_function_repeat1,
    ACTIONS(207), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(272), 1,
      anon_sym_CARET,
    STATE(81), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(268), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(246), 19,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_not,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(274), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 20,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(288), 1,
      anon_sym_EQ,
    STATE(74), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(286), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_EQ,
    ACTIONS(294), 1,
      anon_sym_CARET,
    STATE(81), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(290), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(297), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(262), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4590] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(472), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4643] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(483), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_EQ,
    ACTIONS(309), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_STAR,
    STATE(96), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(313), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_STAR,
    STATE(88), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(319), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_EQ,
    ACTIONS(290), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(326), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(330), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_EQ,
    ACTIONS(334), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4893] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SOLVED,
    ACTIONS(342), 1,
      anon_sym_by,
    ACTIONS(346), 1,
      anon_sym_solve,
    STATE(249), 1,
      sym_proof_skeleton,
    STATE(263), 1,
      sym_proof_method,
    ACTIONS(344), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(338), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [4930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(348), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(352), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [4984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_STAR,
    ACTIONS(358), 1,
      anon_sym_EQ,
    STATE(88), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(356), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_EQ,
    ACTIONS(360), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(364), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(368), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5096] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(463), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5149] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SOLVED,
    ACTIONS(342), 1,
      anon_sym_by,
    ACTIONS(346), 1,
      anon_sym_solve,
    STATE(263), 1,
      sym_proof_method,
    STATE(265), 1,
      sym_proof_skeleton,
    ACTIONS(344), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(374), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SOLVED,
    ACTIONS(342), 1,
      anon_sym_by,
    ACTIONS(346), 1,
      anon_sym_solve,
    STATE(257), 1,
      sym_proof_skeleton,
    STATE(263), 1,
      sym_proof_method,
    ACTIONS(344), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(376), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_EQ,
    ACTIONS(378), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(382), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5277] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SOLVED,
    ACTIONS(342), 1,
      anon_sym_by,
    ACTIONS(346), 1,
      anon_sym_solve,
    STATE(263), 1,
      sym_proof_method,
    STATE(279), 1,
      sym_proof_skeleton,
    ACTIONS(344), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
    ACTIONS(386), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [5314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(388), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(392), 17,
      sym_ident,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(396), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(400), 18,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5422] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(402), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5475] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(433), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5528] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(401), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5578] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(450), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5628] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(213), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5678] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      anon_sym_TILDE,
    STATE(290), 1,
      sym_term,
    STATE(303), 1,
      sym_msg_var,
    STATE(307), 1,
      sym_nonnode_var,
    STATE(314), 1,
      sym__expterm,
    STATE(331), 1,
      sym__multterm,
    STATE(361), 1,
      sym__xorterm,
    STATE(526), 1,
      sym__msetterm,
    ACTIONS(412), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(309), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5728] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(582), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_EQ,
    STATE(117), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(422), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(418), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5808] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(461), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(319), 17,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [5884] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(646), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5934] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(464), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [5984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_EQ,
    STATE(125), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(429), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(425), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6014] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(445), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6064] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(618), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ,
    STATE(117), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(429), 2,
      anon_sym_XOR,
      anon_sym_13,
    ACTIONS(431), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6144] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(436), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6194] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(139), 1,
      sym__xorterm,
    STATE(435), 1,
      sym__msetterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6244] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(122), 1,
      sym__multterm,
    STATE(129), 1,
      sym__xorterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 3,
      sym_ident,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(437), 14,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6316] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      anon_sym_TILDE,
    STATE(129), 1,
      sym__xorterm,
    STATE(290), 1,
      sym_term,
    STATE(303), 1,
      sym_msg_var,
    STATE(307), 1,
      sym_nonnode_var,
    STATE(314), 1,
      sym__expterm,
    STATE(331), 1,
      sym__multterm,
    ACTIONS(412), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(309), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_EQ,
    ACTIONS(418), 16,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6388] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(87), 1,
      sym__expterm,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(131), 1,
      sym__multterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6432] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      anon_sym_TILDE,
    STATE(290), 1,
      sym_term,
    STATE(303), 1,
      sym_msg_var,
    STATE(307), 1,
      sym_nonnode_var,
    STATE(314), 1,
      sym__expterm,
    STATE(341), 1,
      sym__multterm,
    ACTIONS(412), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(309), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(443), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(138), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(194), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(441), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6506] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_EQ,
    ACTIONS(445), 1,
      anon_sym_PLUS,
    STATE(135), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(437), 13,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_prio,
    ACTIONS(452), 1,
      anon_sym_deprio,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(156), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(448), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_prio,
    ACTIONS(452), 1,
      anon_sym_deprio,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(166), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(454), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(461), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(138), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(194), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(458), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_PLUS,
    STATE(140), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(464), 13,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_PLUS,
    ACTIONS(472), 1,
      anon_sym_EQ,
    STATE(135), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(470), 13,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6680] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(183), 1,
      sym_equation,
    STATE(668), 1,
      sym_term,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_EQ,
      anon_sym_LT,
    ACTIONS(474), 12,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6746] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_term,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(119), 1,
      sym__expterm,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6787] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    STATE(216), 1,
      sym_equation,
    STATE(668), 1,
      sym_term,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6828] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      anon_sym_TILDE,
    STATE(290), 1,
      sym_term,
    STATE(303), 1,
      sym_msg_var,
    STATE(307), 1,
      sym_nonnode_var,
    STATE(322), 1,
      sym__expterm,
    ACTIONS(412), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(309), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [6869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(41), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(77), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(480), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [6895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(196), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [6923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COLON,
    ACTIONS(494), 1,
      anon_sym_DOT,
    ACTIONS(492), 12,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [6947] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(48), 1,
      sym_not_function,
    STATE(66), 1,
      sym_and_function,
    STATE(29), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(500), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [6979] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    STATE(31), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(506), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(134), 2,
      sym_goal_ranking,
      aux_sym_global_heuristic_repeat1,
    STATE(194), 2,
      sym_standard_goal_ranking,
      sym_oracle_goal_ranking,
    ACTIONS(441), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [7037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_prio,
    STATE(152), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    ACTIONS(508), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_deprio,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7061] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_ident,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_LT,
    ACTIONS(521), 1,
      anon_sym_DOLLAR,
    ACTIONS(523), 1,
      anon_sym_TILDE,
    STATE(203), 1,
      sym_nonnode_var,
    STATE(205), 1,
      sym_msg_var,
    STATE(212), 1,
      sym_term,
    ACTIONS(519), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(204), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7099] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(301), 1,
      sym_ident,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_term,
    STATE(106), 1,
      sym_nonnode_var,
    STATE(109), 1,
      sym_msg_var,
    ACTIONS(19), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(108), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7137] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_ident,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym_DOLLAR,
    ACTIONS(416), 1,
      anon_sym_TILDE,
    STATE(303), 1,
      sym_msg_var,
    STATE(306), 1,
      sym_term,
    STATE(307), 1,
      sym_nonnode_var,
    ACTIONS(412), 2,
      anon_sym_SQUOTE,
      anon_sym_TILDE_SQUOTE,
    STATE(309), 4,
      sym_tuple_term,
      sym_nested,
      sym_app,
      sym_literal,
  [7175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_deprio,
    STATE(157), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(454), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_deprio,
    STATE(157), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(525), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(530), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(532), 10,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
  [7244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_natural_subscr_repeat1,
    ACTIONS(535), 2,
      sym_ident,
      anon_sym_POUND,
    ACTIONS(537), 10,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
  [7267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_deprio,
    STATE(157), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(448), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(213), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(264), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_function_name,
    STATE(48), 1,
      sym_not_function,
    STATE(66), 1,
      sym_and_function,
    STATE(28), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(500), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7365] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_function_name,
    STATE(67), 1,
      sym_not_function,
    STATE(68), 1,
      sym_and_function,
    STATE(40), 2,
      sym_function,
      aux_sym_prio_repeat1,
    ACTIONS(506), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [7394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(297), 12,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_deprio,
    STATE(157), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
    ACTIONS(545), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_functions_repeat1,
    ACTIONS(547), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_variants_repeat1,
    ACTIONS(552), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(557), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(559), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(563), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(561), 9,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [7544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(566), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(572), 1,
      anon_sym_DOT,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(194), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [7590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_variants,
    STATE(278), 1,
      sym_variants,
    ACTIONS(574), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(578), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [7632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 12,
      anon_sym_COMMA,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_RBRACK,
  [7650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_natural_subscr_repeat1,
    STATE(420), 1,
      sym_natural_subscr,
    ACTIONS(582), 10,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
  [7672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(584), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(559), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [7694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_variants_repeat1,
    ACTIONS(586), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(590), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_COMMA,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(594), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_LBRACKprivate_RBRACK,
    ACTIONS(598), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_equations_repeat1,
    ACTIONS(604), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(584), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(566), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [7824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(608), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_variants_repeat1,
    ACTIONS(610), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_functions_repeat1,
    ACTIONS(612), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_equations_repeat1,
    ACTIONS(616), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(276), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_equations_repeat1,
    ACTIONS(620), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_built_ins_repeat1,
    ACTIONS(625), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 12,
      anon_sym_COMMA,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_RBRACK,
  [7996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_functions_repeat1,
    ACTIONS(632), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 12,
      anon_sym_COMMA,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
      anon_sym_o,
      anon_sym_O,
      anon_sym_RBRACK,
  [8036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(638), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(636), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [8058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(643), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(552), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(649), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(657), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(661), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(368), 1,
      sym_fact_annotes,
    ACTIONS(667), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(309), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(625), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(671), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(620), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(679), 1,
      anon_sym_COLON,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_LT,
    ACTIONS(262), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8470] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(391), 1,
      sym_fact_annotes,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_AT,
    ACTIONS(364), 7,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_XOR,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [8493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(683), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(653), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(547), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(693), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(697), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 11,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_variants,
      anon_sym_restriction,
      anon_sym_lemma,
  [8838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 11,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(701), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [8980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(271), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(578), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [8998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_COLON,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      anon_sym_DOT,
    ACTIONS(196), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(194), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(725), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(636), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(259), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(730), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(578), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(675), 9,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(738), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(559), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_ident,
    ACTIONS(744), 1,
      anon_sym_DOT,
    ACTIONS(746), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_msg_var,
    ACTIONS(748), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(275), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(342), 2,
      sym_node_var,
      sym_nonnode_var,
  [9224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(276), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(730), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(557), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(559), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(211), 1,
      sym_built_in,
    ACTIONS(750), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [9280] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SOLVED,
    ACTIONS(754), 1,
      anon_sym_by,
    ACTIONS(756), 1,
      anon_sym_case,
    ACTIONS(760), 1,
      anon_sym_solve,
    STATE(262), 1,
      sym_proof_method,
    STATE(531), 1,
      sym_proof_skeleton,
    ACTIONS(758), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_solve,
    ACTIONS(762), 1,
      anon_sym_SOLVED,
    ACTIONS(764), 1,
      anon_sym_by,
    ACTIONS(766), 1,
      anon_sym_case,
    STATE(247), 1,
      sym_proof_skeleton,
    STATE(263), 1,
      sym_proof_method,
    ACTIONS(758), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_ident,
    ACTIONS(746), 1,
      anon_sym_POUND,
    ACTIONS(768), 1,
      anon_sym_DOT,
    STATE(335), 1,
      sym_msg_var,
    ACTIONS(748), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(275), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(342), 2,
      sym_node_var,
      sym_nonnode_var,
  [9364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 10,
      anon_sym_SOLVED,
      anon_sym_by,
      anon_sym_case,
      anon_sym_next,
      anon_sym_qed,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_solve,
      anon_sym_contradiction,
      anon_sym_induction,
  [9396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 10,
      anon_sym_SOLVED,
      anon_sym_by,
      anon_sym_case,
      anon_sym_next,
      anon_sym_qed,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_solve,
      anon_sym_contradiction,
      anon_sym_induction,
  [9428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(180), 1,
      sym_built_in,
    ACTIONS(750), 9,
      anon_sym_diffie_DASHhellman,
      anon_sym_hashing,
      anon_sym_symmetric_DASHencryption,
      anon_sym_asymmetric_DASHencryption,
      anon_sym_signing,
      anon_sym_bilinear_DASHpairing,
      anon_sym_xor,
      anon_sym_multiset,
      anon_sym_revealing_DASHsigning,
  [9462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(277), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(557), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(566), 9,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
  [9514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(738), 2,
      anon_sym_AMP,
      anon_sym_17,
    ACTIONS(566), 7,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_16,
  [9534] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_ident,
    ACTIONS(783), 1,
      anon_sym_DOT,
    ACTIONS(785), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_msg_var,
    ACTIONS(788), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(275), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(342), 2,
      sym_node_var,
      sym_nonnode_var,
  [9562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(276), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(791), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(561), 7,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(277), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(794), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(561), 7,
      anon_sym_DQUOTE,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
      anon_sym_17,
  [9602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 10,
      anon_sym_end,
      sym_ident,
      anon_sym_functions,
      anon_sym_equations,
      anon_sym_builtins,
      anon_sym_heuristic,
      anon_sym_tactic,
      anon_sym_rule,
      anon_sym_restriction,
      anon_sym_lemma,
  [9634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_ident,
    ACTIONS(746), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_msg_var,
    ACTIONS(748), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(258), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(342), 2,
      sym_node_var,
      sym_nonnode_var,
  [9659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SOLVED,
    ACTIONS(754), 1,
      anon_sym_by,
    ACTIONS(760), 1,
      anon_sym_solve,
    STATE(262), 1,
      sym_proof_method,
    STATE(452), 1,
      sym_proof_skeleton,
    ACTIONS(758), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
    ACTIONS(803), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(805), 1,
      anon_sym_heuristic_EQ,
    STATE(487), 1,
      sym_lemma_attr,
    ACTIONS(799), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [9707] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SOLVED,
    ACTIONS(754), 1,
      anon_sym_by,
    ACTIONS(760), 1,
      anon_sym_solve,
    STATE(262), 1,
      sym_proof_method,
    STATE(413), 1,
      sym_proof_skeleton,
    ACTIONS(758), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_COLON,
    ACTIONS(809), 1,
      anon_sym_DOT,
    ACTIONS(264), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(262), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9753] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SOLVED,
    ACTIONS(754), 1,
      anon_sym_by,
    ACTIONS(760), 1,
      anon_sym_solve,
    STATE(262), 1,
      sym_proof_method,
    STATE(493), 1,
      sym_proof_skeleton,
    ACTIONS(758), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [9778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(515), 1,
      sym_standard_goal_ranking,
    ACTIONS(811), 8,
      anon_sym_C,
      anon_sym_I,
      anon_sym_P,
      anon_sym_S,
      anon_sym_c,
      anon_sym_i,
      anon_sym_p,
      anon_sym_s,
  [9795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(211), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(805), 1,
      anon_sym_heuristic_EQ,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    STATE(487), 1,
      sym_lemma_attr,
    ACTIONS(799), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [9835] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_ident,
    ACTIONS(746), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_msg_var,
    ACTIONS(748), 2,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
    STATE(264), 2,
      sym_lvar,
      aux_sym_atom_repeat1,
    STATE(342), 2,
      sym_node_var,
      sym_nonnode_var,
  [9860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_CARET,
    STATE(292), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(286), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(288), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [9880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_CARET,
    STATE(291), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(290), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(292), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [9900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_CARET,
    STATE(291), 1,
      aux_sym__expterm_repeat1,
    ACTIONS(268), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(270), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [9920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(820), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(578), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_presort,
    ACTIONS(824), 1,
      anon_sym_prio,
    ACTIONS(826), 1,
      anon_sym_deprio,
    STATE(324), 1,
      sym_presort,
    STATE(136), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(160), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [9962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(828), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(561), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [9980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_DOT,
    ACTIONS(276), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(274), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [9998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(820), 2,
      anon_sym_PIPE,
      anon_sym_16,
    ACTIONS(557), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
  [10016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(805), 1,
      anon_sym_heuristic_EQ,
    STATE(418), 1,
      sym_lemma_attr,
    ACTIONS(799), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_function_name,
    ACTIONS(500), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [10052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_function_name,
    ACTIONS(506), 7,
      anon_sym_regex,
      anon_sym_isFactName,
      anon_sym_isInFactTerms,
      anon_sym_dhreNoise,
      anon_sym_defaultNoise,
      anon_sym_reasonableNoncesNoise,
      anon_sym_nonAbsurdGoal,
  [10068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_hide_lemma_EQ,
    ACTIONS(805), 1,
      anon_sym_heuristic_EQ,
    STATE(487), 1,
      sym_lemma_attr,
    ACTIONS(799), 5,
      anon_sym_left,
      anon_sym_right,
      anon_sym_sources,
      anon_sym_reuse,
      anon_sym_use_induction,
  [10088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(309), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(400), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(378), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(348), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(290), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(388), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_STAR,
    STATE(308), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(319), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(321), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(396), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(703), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
  [10227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(262), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(368), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(330), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_STAR,
    STATE(315), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(313), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(315), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_STAR,
    STATE(308), 1,
      aux_sym__multterm_repeat1,
    ACTIONS(356), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(358), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(352), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(360), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(334), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(364), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
    ACTIONS(326), 4,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
      anon_sym_CARET,
  [10385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(840), 1,
      anon_sym_XOR,
    ACTIONS(843), 1,
      anon_sym_13,
    STATE(321), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(420), 2,
      sym_ident,
      anon_sym_in,
  [10405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_PLUS,
      anon_sym_13,
      anon_sym_STAR,
    ACTIONS(321), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(397), 1,
      sym_fact_annotes,
    ACTIONS(846), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_prio,
    ACTIONS(826), 1,
      anon_sym_deprio,
    STATE(137), 2,
      sym_prio,
      aux_sym_tactic_repeat1,
    STATE(156), 2,
      sym_deprio,
      aux_sym_tactic_repeat2,
  [10453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(368), 1,
      sym_fact_annotes,
    ACTIONS(667), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      sym_ident,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(848), 1,
      anon_sym_XOR,
    ACTIONS(850), 1,
      anon_sym_13,
    STATE(321), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(433), 2,
      sym_ident,
      anon_sym_in,
  [10501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(391), 1,
      sym_fact_annotes,
    ACTIONS(681), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(194), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(262), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_PLUS,
    ACTIONS(848), 1,
      anon_sym_XOR,
    ACTIONS(850), 1,
      anon_sym_13,
    STATE(327), 1,
      aux_sym__xorterm_repeat1,
    ACTIONS(427), 2,
      sym_ident,
      anon_sym_in,
  [10565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_solve,
    STATE(531), 1,
      sym_proof_method,
    ACTIONS(758), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_solve,
    STATE(247), 1,
      sym_proof_method,
    ACTIONS(856), 4,
      anon_sym_sorry,
      anon_sym_simplify,
      anon_sym_contradiction,
      anon_sym_induction,
  [10597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    STATE(362), 1,
      sym_fact_annotes,
    ACTIONS(860), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_LT_EQ_GT,
      anon_sym_14,
    ACTIONS(701), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [10681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_PLUS,
      anon_sym_13,
    ACTIONS(420), 3,
      sym_ident,
      anon_sym_in,
      anon_sym_XOR,
  [10694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_EQ_EQ_GT,
      anon_sym_15,
    ACTIONS(703), 3,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_2,
  [10729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 5,
      sym_ident,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    STATE(585), 1,
      sym_trace_quantifier,
    ACTIONS(870), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [10765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(636), 1,
      sym_facts,
  [10781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(551), 1,
      sym_facts,
  [10797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_PLUS,
    STATE(350), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(435), 2,
      sym_ident,
      anon_sym_in,
  [10811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 4,
      sym_ident,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_TILDE,
  [10821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(578), 1,
      sym_facts,
  [10837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_ident,
    ACTIONS(885), 1,
      anon_sym_in,
    STATE(370), 1,
      aux_sym_let_block_repeat1,
    STATE(603), 1,
      sym_msg_var,
  [10853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_PLUS,
    STATE(350), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(472), 2,
      sym_ident,
      anon_sym_in,
  [10867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LBRACK,
    STATE(533), 1,
      sym_fact_annotes,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(691), 1,
      sym_facts,
  [10897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(689), 1,
      sym_facts,
  [10913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LBRACK,
    STATE(541), 1,
      sym_fact_annotes,
    ACTIONS(846), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [10927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(553), 1,
      sym_facts,
  [10943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    STATE(572), 1,
      sym_trace_quantifier,
    ACTIONS(870), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [10957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_PLUS,
    STATE(354), 1,
      aux_sym__msetterm_repeat1,
    ACTIONS(466), 2,
      sym_ident,
      anon_sym_in,
  [10971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [10981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(449), 1,
      sym_fact_annote,
    ACTIONS(893), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [10993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(687), 1,
      sym_facts,
  [11009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    STATE(628), 1,
      sym_trace_quantifier,
    ACTIONS(870), 2,
      anon_sym_all_DASHtrace,
      anon_sym_exists_DASHtrace,
  [11023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
    ACTIONS(900), 2,
      anon_sym_RPAREN,
      anon_sym_GT,
  [11037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(676), 1,
      sym_facts,
  [11053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(686), 1,
      sym_facts,
  [11079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_ident,
    ACTIONS(905), 1,
      anon_sym_in,
    STATE(370), 1,
      aux_sym_let_block_repeat1,
    STATE(603), 1,
      sym_msg_var,
  [11095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(614), 1,
      sym_facts,
  [11111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(683), 1,
      sym_facts,
  [11127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(589), 1,
      sym_facts,
  [11143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(657), 1,
      sym_facts,
  [11159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(599), 1,
      sym_facts,
  [11175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(613), 1,
      sym_facts,
  [11191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(557), 1,
      sym_facts,
  [11207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    STATE(539), 1,
      sym_rule_attr,
    ACTIONS(909), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [11221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(566), 1,
      sym_facts,
  [11237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(539), 1,
      sym_rule_attr,
    ACTIONS(909), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [11251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(559), 1,
      sym_facts,
  [11267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(682), 1,
      sym_facts,
  [11283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LBRACK,
    STATE(528), 1,
      sym_fact_annotes,
    ACTIONS(860), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [11297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(466), 1,
      sym_fact_annote,
    ACTIONS(893), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [11309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(680), 1,
      sym_facts,
  [11325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(612), 1,
      sym_facts,
  [11341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(510), 1,
      sym_fact_annote,
    ACTIONS(893), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_no_precomp,
  [11363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LBRACK,
    STATE(536), 1,
      sym_fact_annotes,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [11387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(610), 1,
      sym_facts,
  [11413] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(608), 1,
      sym_facts,
  [11429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(604), 1,
      sym_facts,
  [11445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(607), 1,
      sym_facts,
  [11461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(678), 1,
      sym_facts,
  [11477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_AT,
  [11487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(479), 1,
      sym_fact,
    STATE(621), 1,
      sym_facts,
  [11503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(459), 1,
      sym_fact,
    STATE(605), 1,
      sym_facts,
  [11519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      sym_ident,
    STATE(213), 1,
      sym_node_var,
  [11532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(923), 1,
      anon_sym_GT,
    STATE(416), 1,
      aux_sym_tuple_term_repeat1,
  [11545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      aux_sym_tuple_term_repeat1,
  [11558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COLON,
    ACTIONS(927), 1,
      anon_sym_LBRACK,
    STATE(654), 1,
      sym_restriction_attrs,
  [11571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RBRACK,
    STATE(414), 1,
      aux_sym_fact_annotes_repeat1,
  [11584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_ident,
    STATE(353), 1,
      aux_sym_let_block_repeat1,
    STATE(603), 1,
      sym_msg_var,
  [11597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COLON,
    ACTIONS(937), 1,
      anon_sym_LBRACK,
    STATE(659), 1,
      sym_rule_attrs,
  [11610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    ACTIONS(941), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [11621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RBRACK,
    STATE(430), 1,
      aux_sym_rule_attrs_repeat1,
  [11634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      aux_sym_lemma_attrs_repeat1,
  [11647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_LBRACK,
    ACTIONS(954), 1,
      anon_sym_let,
    STATE(546), 1,
      sym_let_block,
  [11660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      sym_ident,
    STATE(254), 1,
      sym_node_var,
  [11673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      anon_sym_2,
    STATE(424), 1,
      aux_sym_goal_repeat1,
  [11686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_next,
    ACTIONS(962), 1,
      anon_sym_qed,
    STATE(427), 1,
      aux_sym_proof_skeleton_repeat1,
  [11699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACK,
    STATE(414), 1,
      aux_sym_fact_annotes_repeat1,
  [11712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [11725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(971), 1,
      anon_sym_GT,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      sym_ident,
    STATE(565), 1,
      sym_node_var,
  [11751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_RBRACK,
    STATE(462), 1,
      aux_sym_lemma_attrs_repeat1,
  [11764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    ACTIONS(979), 1,
      anon_sym_msg,
    STATE(217), 1,
      sym_natural,
  [11777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      sym_ident,
    STATE(652), 1,
      sym_node_var,
  [11790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym_ident,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
    STATE(710), 1,
      sym_modulo,
  [11803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(422), 1,
      aux_sym_facts_repeat1,
  [11816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_node,
    ACTIONS(992), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [11827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    ACTIONS(996), 1,
      anon_sym_2,
    STATE(424), 1,
      aux_sym_goal_repeat1,
  [11840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COLON,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    STATE(653), 1,
      sym_lemma_attrs,
  [11853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_rule_attrs_repeat1,
  [11866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_next,
    ACTIONS(1008), 1,
      anon_sym_qed,
    STATE(437), 1,
      aux_sym_proof_skeleton_repeat1,
  [11879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_facts_repeat1,
  [11892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_node,
    ACTIONS(1013), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [11903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      aux_sym_rule_attrs_repeat1,
  [11916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(422), 1,
      aux_sym_facts_repeat1,
  [11929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
    ACTIONS(1021), 1,
      sym_ident,
    STATE(675), 1,
      sym_modulo,
  [11942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_tuple_term_repeat1,
  [11955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
    ACTIONS(1025), 1,
      sym_ident,
    STATE(684), 1,
      sym_modulo,
  [11968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_GT,
    STATE(481), 1,
      aux_sym_tuple_term_repeat1,
  [11981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_tuple_term_repeat1,
  [11994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_next,
    ACTIONS(1034), 1,
      anon_sym_qed,
    STATE(437), 1,
      aux_sym_proof_skeleton_repeat1,
  [12007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    ACTIONS(979), 1,
      anon_sym_msg,
    STATE(527), 1,
      sym_natural,
  [12020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    ACTIONS(979), 1,
      anon_sym_msg,
    STATE(72), 1,
      sym_natural,
  [12046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_facts_repeat1,
  [12059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(872), 1,
      sym_ident,
    STATE(530), 1,
      sym_fact,
  [12072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_2,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      aux_sym_goal_repeat1,
  [12085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(569), 1,
      sym_post_ranking,
    ACTIONS(1042), 2,
      anon_sym_smallest,
      anon_sym_id,
  [12096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym_tuple_term_repeat1,
  [12109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(570), 1,
      sym_post_ranking,
    ACTIONS(1042), 2,
      anon_sym_smallest,
      anon_sym_id,
  [12120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      aux_sym_arity_token1,
    ACTIONS(1048), 1,
      anon_sym_msg,
    STATE(284), 1,
      sym_natural,
  [12133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      sym_ident,
    STATE(679), 1,
      sym_node_var,
  [12146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RBRACK,
    STATE(404), 1,
      aux_sym_fact_annotes_repeat1,
  [12159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [12168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_next,
    ACTIONS(1052), 1,
      anon_sym_qed,
    STATE(437), 1,
      aux_sym_proof_skeleton_repeat1,
  [12181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_next,
    ACTIONS(1054), 1,
      anon_sym_qed,
    STATE(451), 1,
      aux_sym_proof_skeleton_repeat1,
  [12194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LBRACK,
    ACTIONS(1056), 1,
      anon_sym_COLON,
    STATE(622), 1,
      sym_lemma_attrs,
  [12207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RBRACK,
    STATE(414), 1,
      aux_sym_fact_annotes_repeat1,
  [12220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      aux_sym_arity_token1,
    ACTIONS(1064), 1,
      anon_sym_msg,
    STATE(162), 1,
      sym_natural,
  [12246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACK,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(637), 1,
      sym_rule_attrs,
  [12259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      aux_sym_facts_repeat1,
  [12285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_GT,
    STATE(468), 1,
      aux_sym_tuple_term_repeat1,
  [12311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
    ACTIONS(1076), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      aux_sym_lemma_attrs_repeat1,
  [12324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_tuple_term_repeat1,
  [12337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_tuple_term_repeat1,
  [12350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(539), 1,
      sym_rule_attr,
    ACTIONS(909), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      aux_sym_fact_annotes_repeat1,
  [12374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_let,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
    STATE(700), 1,
      sym_let_block,
  [12387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_GT,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_let,
    ACTIONS(1086), 1,
      anon_sym_LBRACK,
    STATE(702), 1,
      sym_let_block,
  [12413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_let,
    ACTIONS(1088), 1,
      anon_sym_LBRACK,
    STATE(640), 1,
      sym_let_block,
  [12426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_let,
    ACTIONS(1090), 1,
      anon_sym_LBRACK,
    STATE(704), 1,
      sym_let_block,
  [12439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_tuple_term_repeat1,
  [12452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      anon_sym_COLON,
    STATE(706), 1,
      sym_rule_attrs,
  [12465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACK,
    ACTIONS(1098), 1,
      anon_sym_COLON,
    STATE(708), 1,
      sym_rule_attrs,
  [12491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(408), 1,
      sym_rule_attr,
    ACTIONS(909), 2,
      anon_sym_color_EQ,
      anon_sym_colour_EQ,
  [12502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_node,
    ACTIONS(1102), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_ident,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(516), 1,
      sym_fact,
  [12526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RBRACK_DASH_GT,
    STATE(431), 1,
      aux_sym_facts_repeat1,
  [12539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_GT,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_tuple_term_repeat1,
  [12578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(480), 1,
      aux_sym_tuple_term_repeat1,
  [12591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_let,
    ACTIONS(1108), 1,
      anon_sym_LBRACK,
    STATE(576), 1,
      sym_let_block,
  [12604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_node,
    ACTIONS(1110), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [12623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_ident,
    STATE(193), 1,
      sym_function_sym,
  [12641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1116), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1120), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    STATE(681), 1,
      sym_natural,
  [12671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1124), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_next,
      anon_sym_qed,
  [12689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1130), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_rule,
    STATE(186), 1,
      sym_simple_rule,
  [12709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 2,
      anon_sym_E,
      anon_sym_AC,
  [12717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 2,
      anon_sym_left,
      anon_sym_right,
  [12725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      aux_sym_arity_token1,
    STATE(182), 1,
      sym_arity,
  [12735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_ident,
    STATE(224), 1,
      sym_function_sym,
  [12745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12753] = 3,
    ACTIONS(1140), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1142), 1,
      sym_comment,
    STATE(600), 1,
      sym_param,
  [12763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 2,
      anon_sym_RPAREN,
      anon_sym_2,
  [12787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_rule,
    STATE(201), 1,
      sym_simple_rule,
  [12797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    STATE(649), 1,
      sym_natural,
  [12807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_EQ,
    ACTIONS(1150), 1,
      anon_sym_DOT,
  [12825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    STATE(624), 1,
      sym_natural,
  [12851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      aux_sym_arity_token1,
    STATE(222), 1,
      sym_natural,
  [12861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      aux_sym_arity_token1,
    STATE(313), 1,
      sym_natural,
  [12879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [12887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [12895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_,
    ACTIONS(1160), 1,
      anon_sym_AT,
  [12905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    STATE(104), 1,
      sym_natural,
  [12915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 2,
      anon_sym_next,
      anon_sym_qed,
  [12923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [12931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1166), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1170), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1174), 1,
      anon_sym_DASH_DASH_LBRACK,
  [12961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_prio,
      anon_sym_deprio,
  [12969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 2,
      sym_ident,
      anon_sym_in,
  [12985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(266), 1,
      anon_sym_DOT,
  [12995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    STATE(165), 1,
      sym_natural,
  [13013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 2,
      anon_sym_next,
      anon_sym_qed,
  [13029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_EQ,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
  [13039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1188), 1,
      anon_sym_DASH_DASH_LBRACK,
  [13057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_arity_token1,
    STATE(91), 1,
      sym_natural,
  [13083] = 3,
    ACTIONS(1140), 1,
      aux_sym_oracle_goal_ranking_token1,
    ACTIONS(1142), 1,
      sym_comment,
    STATE(560), 1,
      sym_param,
  [13093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK_DASH_GT,
  [13117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 2,
      anon_sym_next,
      anon_sym_qed,
  [13133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 2,
      anon_sym_pub,
      anon_sym_fresh,
  [13141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 2,
      anon_sym_next,
      anon_sym_qed,
  [13149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_LBRACK,
  [13156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym_ident,
  [13163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
  [13170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
  [13177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_LPAREN,
  [13184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RBRACK_DASH_GT,
  [13191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_LBRACK,
  [13198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
  [13205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_DQUOTE,
  [13212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      sym_ident,
  [13219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_node,
  [13226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
  [13233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LBRACK,
  [13240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_RBRACK_DASH_GT,
  [13247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_DQUOTE,
  [13254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_DQUOTE,
  [13261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_DQUOTE,
  [13268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_COLON,
  [13275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_LPAREN,
  [13282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
  [13289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_RBRACK,
  [13296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_COLON,
  [13303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_LBRACK,
  [13310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_RBRACE,
  [13317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_RBRACE,
  [13324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
  [13331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_DQUOTE,
  [13338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_COLON,
  [13345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
  [13352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
  [13359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_LBRACK,
  [13366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_COLON,
  [13373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_RBRACK,
  [13380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_LBRACK,
  [13387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LPAREN,
  [13394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      sym_ident,
  [13401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
  [13408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_msg,
  [13415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_SQUOTE,
  [13422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
  [13429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_COLON,
  [13436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_DQUOTE,
  [13443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_ident,
  [13450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_RBRACK,
  [13457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_msg,
  [13464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
  [13471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_COLON,
  [13478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
  [13485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_AT,
  [13492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_EQ,
  [13499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_LPAREN,
  [13506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym_ident,
  [13513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      sym_ident,
  [13520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_RBRACK_DASH_GT,
  [13527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
  [13534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_COLON,
  [13541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_node,
  [13548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_EQ,
  [13555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RBRACK,
  [13562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RBRACK,
  [13569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [13576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RBRACK,
  [13583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RBRACK,
  [13590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_ident,
  [13597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RBRACK,
  [13604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_LPAREN,
  [13611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RBRACK,
  [13618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RBRACK,
  [13625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RBRACK,
  [13632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      sym_ident,
  [13639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_LBRACK,
  [13646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
  [13653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [13660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym_ident,
  [13667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_SQUOTE,
  [13674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RBRACK_DASH_GT,
  [13681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_COLON,
  [13688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      sym_ident,
  [13695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [13702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_ident,
  [13709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_msg,
  [13716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_case,
  [13723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
  [13730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_LBRACK,
  [13737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
  [13744] = 2,
    ACTIONS(1142), 1,
      sym_comment,
    ACTIONS(1348), 1,
      aux_sym_oracle_goal_ranking_token1,
  [13751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_LPAREN,
  [13758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_DQUOTE,
  [13765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_LPAREN,
  [13772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RBRACK,
  [13779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_RBRACK,
  [13786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_COLON,
  [13793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
  [13800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      sym_hexcolor,
  [13807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_LBRACK,
  [13814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_COLON,
  [13821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_COLON,
  [13828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      anon_sym_COLON,
  [13835] = 2,
    ACTIONS(1142), 1,
      sym_comment,
    ACTIONS(1372), 1,
      aux_sym_oracle_goal_ranking_token1,
  [13842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_SQUOTE,
  [13849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
  [13856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_LBRACK,
  [13863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym_ident,
  [13870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
  [13877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_DQUOTE,
  [13884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      sym_ident,
  [13891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
  [13898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_COLON,
  [13905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_COLON,
  [13912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      sym_ident,
  [13919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_DQUOTE,
  [13926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_RBRACK,
  [13933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_LBRACK,
  [13940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_COLON,
  [13947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_DQUOTE,
  [13954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_LPAREN,
  [13961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_LBRACK,
  [13968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      sym_ident,
  [13975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_LBRACK,
  [13982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      anon_sym_LBRACK,
  [13989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_LBRACK,
  [13996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_LBRACK,
  [14003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_EQ,
  [14010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      sym_ident,
  [14017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      sym_ident,
  [14024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_SLASH,
  [14031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_STAR_RBRACE,
  [14038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      anon_sym_TILDE_TILDE_GT,
  [14045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      ts_builtin_sym_end,
  [14052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      sym_ident,
  [14059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_RBRACK,
  [14066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_LPAREN,
  [14073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACK_DASH_GT,
  [14080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
  [14087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_RBRACK_DASH_GT,
  [14094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
  [14101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_RBRACK_DASH_GT,
  [14108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_RBRACK_DASH_GT,
  [14115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      sym_ident,
  [14122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_modulo,
  [14129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_RBRACK,
  [14136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_RBRACK,
  [14143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      sym_ident,
  [14150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_RBRACK,
  [14157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
  [14164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      anon_sym_RBRACK,
  [14171] = 2,
    ACTIONS(1142), 1,
      sym_comment,
    ACTIONS(1458), 1,
      aux_sym_formal_comment_token1,
  [14178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_end,
  [14185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      sym_ident,
  [14192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_COLON,
  [14199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_COLON,
  [14206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_COLON,
  [14213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_COLON,
  [14220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      anon_sym_COLON,
  [14227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LBRACK,
  [14234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LBRACE_STAR,
  [14241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_LBRACK,
  [14248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      ts_builtin_sym_end,
  [14255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_LBRACK,
  [14262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_begin,
  [14269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COLON,
  [14276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      ts_builtin_sym_end,
  [14283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_COLON,
  [14290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      ts_builtin_sym_end,
  [14297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 114,
  [SMALL_STATE(4)] = 228,
  [SMALL_STATE(5)] = 336,
  [SMALL_STATE(6)] = 444,
  [SMALL_STATE(7)] = 552,
  [SMALL_STATE(8)] = 660,
  [SMALL_STATE(9)] = 768,
  [SMALL_STATE(10)] = 876,
  [SMALL_STATE(11)] = 984,
  [SMALL_STATE(12)] = 1092,
  [SMALL_STATE(13)] = 1200,
  [SMALL_STATE(14)] = 1308,
  [SMALL_STATE(15)] = 1416,
  [SMALL_STATE(16)] = 1521,
  [SMALL_STATE(17)] = 1626,
  [SMALL_STATE(18)] = 1731,
  [SMALL_STATE(19)] = 1836,
  [SMALL_STATE(20)] = 1935,
  [SMALL_STATE(21)] = 2034,
  [SMALL_STATE(22)] = 2133,
  [SMALL_STATE(23)] = 2232,
  [SMALL_STATE(24)] = 2328,
  [SMALL_STATE(25)] = 2424,
  [SMALL_STATE(26)] = 2511,
  [SMALL_STATE(27)] = 2598,
  [SMALL_STATE(28)] = 2641,
  [SMALL_STATE(29)] = 2684,
  [SMALL_STATE(30)] = 2727,
  [SMALL_STATE(31)] = 2763,
  [SMALL_STATE(32)] = 2805,
  [SMALL_STATE(33)] = 2847,
  [SMALL_STATE(34)] = 2883,
  [SMALL_STATE(35)] = 2923,
  [SMALL_STATE(36)] = 2959,
  [SMALL_STATE(37)] = 2997,
  [SMALL_STATE(38)] = 3039,
  [SMALL_STATE(39)] = 3075,
  [SMALL_STATE(40)] = 3111,
  [SMALL_STATE(41)] = 3153,
  [SMALL_STATE(42)] = 3191,
  [SMALL_STATE(43)] = 3226,
  [SMALL_STATE(44)] = 3261,
  [SMALL_STATE(45)] = 3292,
  [SMALL_STATE(46)] = 3345,
  [SMALL_STATE(47)] = 3380,
  [SMALL_STATE(48)] = 3411,
  [SMALL_STATE(49)] = 3446,
  [SMALL_STATE(50)] = 3485,
  [SMALL_STATE(51)] = 3520,
  [SMALL_STATE(52)] = 3555,
  [SMALL_STATE(53)] = 3590,
  [SMALL_STATE(54)] = 3625,
  [SMALL_STATE(55)] = 3666,
  [SMALL_STATE(56)] = 3702,
  [SMALL_STATE(57)] = 3752,
  [SMALL_STATE(58)] = 3782,
  [SMALL_STATE(59)] = 3812,
  [SMALL_STATE(60)] = 3846,
  [SMALL_STATE(61)] = 3878,
  [SMALL_STATE(62)] = 3908,
  [SMALL_STATE(63)] = 3958,
  [SMALL_STATE(64)] = 3992,
  [SMALL_STATE(65)] = 4022,
  [SMALL_STATE(66)] = 4054,
  [SMALL_STATE(67)] = 4086,
  [SMALL_STATE(68)] = 4120,
  [SMALL_STATE(69)] = 4151,
  [SMALL_STATE(70)] = 4180,
  [SMALL_STATE(71)] = 4211,
  [SMALL_STATE(72)] = 4240,
  [SMALL_STATE(73)] = 4273,
  [SMALL_STATE(74)] = 4304,
  [SMALL_STATE(75)] = 4336,
  [SMALL_STATE(76)] = 4364,
  [SMALL_STATE(77)] = 4394,
  [SMALL_STATE(78)] = 4420,
  [SMALL_STATE(79)] = 4446,
  [SMALL_STATE(80)] = 4472,
  [SMALL_STATE(81)] = 4504,
  [SMALL_STATE(82)] = 4536,
  [SMALL_STATE(83)] = 4563,
  [SMALL_STATE(84)] = 4590,
  [SMALL_STATE(85)] = 4643,
  [SMALL_STATE(86)] = 4696,
  [SMALL_STATE(87)] = 4723,
  [SMALL_STATE(88)] = 4754,
  [SMALL_STATE(89)] = 4785,
  [SMALL_STATE(90)] = 4812,
  [SMALL_STATE(91)] = 4839,
  [SMALL_STATE(92)] = 4866,
  [SMALL_STATE(93)] = 4893,
  [SMALL_STATE(94)] = 4930,
  [SMALL_STATE(95)] = 4957,
  [SMALL_STATE(96)] = 4984,
  [SMALL_STATE(97)] = 5015,
  [SMALL_STATE(98)] = 5042,
  [SMALL_STATE(99)] = 5069,
  [SMALL_STATE(100)] = 5096,
  [SMALL_STATE(101)] = 5149,
  [SMALL_STATE(102)] = 5186,
  [SMALL_STATE(103)] = 5223,
  [SMALL_STATE(104)] = 5250,
  [SMALL_STATE(105)] = 5277,
  [SMALL_STATE(106)] = 5314,
  [SMALL_STATE(107)] = 5341,
  [SMALL_STATE(108)] = 5368,
  [SMALL_STATE(109)] = 5395,
  [SMALL_STATE(110)] = 5422,
  [SMALL_STATE(111)] = 5475,
  [SMALL_STATE(112)] = 5528,
  [SMALL_STATE(113)] = 5578,
  [SMALL_STATE(114)] = 5628,
  [SMALL_STATE(115)] = 5678,
  [SMALL_STATE(116)] = 5728,
  [SMALL_STATE(117)] = 5778,
  [SMALL_STATE(118)] = 5808,
  [SMALL_STATE(119)] = 5858,
  [SMALL_STATE(120)] = 5884,
  [SMALL_STATE(121)] = 5934,
  [SMALL_STATE(122)] = 5984,
  [SMALL_STATE(123)] = 6014,
  [SMALL_STATE(124)] = 6064,
  [SMALL_STATE(125)] = 6114,
  [SMALL_STATE(126)] = 6144,
  [SMALL_STATE(127)] = 6194,
  [SMALL_STATE(128)] = 6244,
  [SMALL_STATE(129)] = 6291,
  [SMALL_STATE(130)] = 6316,
  [SMALL_STATE(131)] = 6363,
  [SMALL_STATE(132)] = 6388,
  [SMALL_STATE(133)] = 6432,
  [SMALL_STATE(134)] = 6476,
  [SMALL_STATE(135)] = 6506,
  [SMALL_STATE(136)] = 6534,
  [SMALL_STATE(137)] = 6564,
  [SMALL_STATE(138)] = 6594,
  [SMALL_STATE(139)] = 6624,
  [SMALL_STATE(140)] = 6652,
  [SMALL_STATE(141)] = 6680,
  [SMALL_STATE(142)] = 6721,
  [SMALL_STATE(143)] = 6746,
  [SMALL_STATE(144)] = 6787,
  [SMALL_STATE(145)] = 6828,
  [SMALL_STATE(146)] = 6869,
  [SMALL_STATE(147)] = 6895,
  [SMALL_STATE(148)] = 6923,
  [SMALL_STATE(149)] = 6947,
  [SMALL_STATE(150)] = 6979,
  [SMALL_STATE(151)] = 7011,
  [SMALL_STATE(152)] = 7037,
  [SMALL_STATE(153)] = 7061,
  [SMALL_STATE(154)] = 7099,
  [SMALL_STATE(155)] = 7137,
  [SMALL_STATE(156)] = 7175,
  [SMALL_STATE(157)] = 7198,
  [SMALL_STATE(158)] = 7221,
  [SMALL_STATE(159)] = 7244,
  [SMALL_STATE(160)] = 7267,
  [SMALL_STATE(161)] = 7290,
  [SMALL_STATE(162)] = 7311,
  [SMALL_STATE(163)] = 7336,
  [SMALL_STATE(164)] = 7365,
  [SMALL_STATE(165)] = 7394,
  [SMALL_STATE(166)] = 7415,
  [SMALL_STATE(167)] = 7438,
  [SMALL_STATE(168)] = 7460,
  [SMALL_STATE(169)] = 7482,
  [SMALL_STATE(170)] = 7502,
  [SMALL_STATE(171)] = 7522,
  [SMALL_STATE(172)] = 7544,
  [SMALL_STATE(173)] = 7564,
  [SMALL_STATE(174)] = 7590,
  [SMALL_STATE(175)] = 7612,
  [SMALL_STATE(176)] = 7632,
  [SMALL_STATE(177)] = 7650,
  [SMALL_STATE(178)] = 7672,
  [SMALL_STATE(179)] = 7694,
  [SMALL_STATE(180)] = 7716,
  [SMALL_STATE(181)] = 7738,
  [SMALL_STATE(182)] = 7758,
  [SMALL_STATE(183)] = 7780,
  [SMALL_STATE(184)] = 7802,
  [SMALL_STATE(185)] = 7824,
  [SMALL_STATE(186)] = 7846,
  [SMALL_STATE(187)] = 7868,
  [SMALL_STATE(188)] = 7890,
  [SMALL_STATE(189)] = 7912,
  [SMALL_STATE(190)] = 7934,
  [SMALL_STATE(191)] = 7956,
  [SMALL_STATE(192)] = 7978,
  [SMALL_STATE(193)] = 7996,
  [SMALL_STATE(194)] = 8018,
  [SMALL_STATE(195)] = 8036,
  [SMALL_STATE(196)] = 8058,
  [SMALL_STATE(197)] = 8075,
  [SMALL_STATE(198)] = 8094,
  [SMALL_STATE(199)] = 8113,
  [SMALL_STATE(200)] = 8130,
  [SMALL_STATE(201)] = 8147,
  [SMALL_STATE(202)] = 8166,
  [SMALL_STATE(203)] = 8185,
  [SMALL_STATE(204)] = 8204,
  [SMALL_STATE(205)] = 8223,
  [SMALL_STATE(206)] = 8242,
  [SMALL_STATE(207)] = 8259,
  [SMALL_STATE(208)] = 8276,
  [SMALL_STATE(209)] = 8295,
  [SMALL_STATE(210)] = 8314,
  [SMALL_STATE(211)] = 8337,
  [SMALL_STATE(212)] = 8356,
  [SMALL_STATE(213)] = 8375,
  [SMALL_STATE(214)] = 8392,
  [SMALL_STATE(215)] = 8411,
  [SMALL_STATE(216)] = 8428,
  [SMALL_STATE(217)] = 8447,
  [SMALL_STATE(218)] = 8470,
  [SMALL_STATE(219)] = 8493,
  [SMALL_STATE(220)] = 8512,
  [SMALL_STATE(221)] = 8531,
  [SMALL_STATE(222)] = 8550,
  [SMALL_STATE(223)] = 8569,
  [SMALL_STATE(224)] = 8588,
  [SMALL_STATE(225)] = 8607,
  [SMALL_STATE(226)] = 8624,
  [SMALL_STATE(227)] = 8641,
  [SMALL_STATE(228)] = 8660,
  [SMALL_STATE(229)] = 8679,
  [SMALL_STATE(230)] = 8696,
  [SMALL_STATE(231)] = 8715,
  [SMALL_STATE(232)] = 8734,
  [SMALL_STATE(233)] = 8751,
  [SMALL_STATE(234)] = 8768,
  [SMALL_STATE(235)] = 8785,
  [SMALL_STATE(236)] = 8802,
  [SMALL_STATE(237)] = 8821,
  [SMALL_STATE(238)] = 8838,
  [SMALL_STATE(239)] = 8855,
  [SMALL_STATE(240)] = 8872,
  [SMALL_STATE(241)] = 8891,
  [SMALL_STATE(242)] = 8910,
  [SMALL_STATE(243)] = 8929,
  [SMALL_STATE(244)] = 8948,
  [SMALL_STATE(245)] = 8964,
  [SMALL_STATE(246)] = 8980,
  [SMALL_STATE(247)] = 8998,
  [SMALL_STATE(248)] = 9014,
  [SMALL_STATE(249)] = 9038,
  [SMALL_STATE(250)] = 9054,
  [SMALL_STATE(251)] = 9074,
  [SMALL_STATE(252)] = 9090,
  [SMALL_STATE(253)] = 9110,
  [SMALL_STATE(254)] = 9126,
  [SMALL_STATE(255)] = 9144,
  [SMALL_STATE(256)] = 9160,
  [SMALL_STATE(257)] = 9180,
  [SMALL_STATE(258)] = 9196,
  [SMALL_STATE(259)] = 9224,
  [SMALL_STATE(260)] = 9244,
  [SMALL_STATE(261)] = 9262,
  [SMALL_STATE(262)] = 9280,
  [SMALL_STATE(263)] = 9308,
  [SMALL_STATE(264)] = 9336,
  [SMALL_STATE(265)] = 9364,
  [SMALL_STATE(266)] = 9380,
  [SMALL_STATE(267)] = 9396,
  [SMALL_STATE(268)] = 9412,
  [SMALL_STATE(269)] = 9428,
  [SMALL_STATE(270)] = 9444,
  [SMALL_STATE(271)] = 9462,
  [SMALL_STATE(272)] = 9480,
  [SMALL_STATE(273)] = 9496,
  [SMALL_STATE(274)] = 9514,
  [SMALL_STATE(275)] = 9534,
  [SMALL_STATE(276)] = 9562,
  [SMALL_STATE(277)] = 9582,
  [SMALL_STATE(278)] = 9602,
  [SMALL_STATE(279)] = 9618,
  [SMALL_STATE(280)] = 9634,
  [SMALL_STATE(281)] = 9659,
  [SMALL_STATE(282)] = 9684,
  [SMALL_STATE(283)] = 9707,
  [SMALL_STATE(284)] = 9732,
  [SMALL_STATE(285)] = 9753,
  [SMALL_STATE(286)] = 9778,
  [SMALL_STATE(287)] = 9795,
  [SMALL_STATE(288)] = 9812,
  [SMALL_STATE(289)] = 9835,
  [SMALL_STATE(290)] = 9860,
  [SMALL_STATE(291)] = 9880,
  [SMALL_STATE(292)] = 9900,
  [SMALL_STATE(293)] = 9920,
  [SMALL_STATE(294)] = 9938,
  [SMALL_STATE(295)] = 9962,
  [SMALL_STATE(296)] = 9980,
  [SMALL_STATE(297)] = 9998,
  [SMALL_STATE(298)] = 10016,
  [SMALL_STATE(299)] = 10036,
  [SMALL_STATE(300)] = 10052,
  [SMALL_STATE(301)] = 10068,
  [SMALL_STATE(302)] = 10088,
  [SMALL_STATE(303)] = 10103,
  [SMALL_STATE(304)] = 10118,
  [SMALL_STATE(305)] = 10133,
  [SMALL_STATE(306)] = 10148,
  [SMALL_STATE(307)] = 10163,
  [SMALL_STATE(308)] = 10178,
  [SMALL_STATE(309)] = 10197,
  [SMALL_STATE(310)] = 10212,
  [SMALL_STATE(311)] = 10227,
  [SMALL_STATE(312)] = 10242,
  [SMALL_STATE(313)] = 10257,
  [SMALL_STATE(314)] = 10272,
  [SMALL_STATE(315)] = 10291,
  [SMALL_STATE(316)] = 10310,
  [SMALL_STATE(317)] = 10325,
  [SMALL_STATE(318)] = 10340,
  [SMALL_STATE(319)] = 10355,
  [SMALL_STATE(320)] = 10370,
  [SMALL_STATE(321)] = 10385,
  [SMALL_STATE(322)] = 10405,
  [SMALL_STATE(323)] = 10419,
  [SMALL_STATE(324)] = 10435,
  [SMALL_STATE(325)] = 10453,
  [SMALL_STATE(326)] = 10469,
  [SMALL_STATE(327)] = 10481,
  [SMALL_STATE(328)] = 10501,
  [SMALL_STATE(329)] = 10517,
  [SMALL_STATE(330)] = 10531,
  [SMALL_STATE(331)] = 10545,
  [SMALL_STATE(332)] = 10565,
  [SMALL_STATE(333)] = 10581,
  [SMALL_STATE(334)] = 10597,
  [SMALL_STATE(335)] = 10613,
  [SMALL_STATE(336)] = 10624,
  [SMALL_STATE(337)] = 10635,
  [SMALL_STATE(338)] = 10646,
  [SMALL_STATE(339)] = 10657,
  [SMALL_STATE(340)] = 10668,
  [SMALL_STATE(341)] = 10681,
  [SMALL_STATE(342)] = 10694,
  [SMALL_STATE(343)] = 10705,
  [SMALL_STATE(344)] = 10716,
  [SMALL_STATE(345)] = 10729,
  [SMALL_STATE(346)] = 10740,
  [SMALL_STATE(347)] = 10751,
  [SMALL_STATE(348)] = 10765,
  [SMALL_STATE(349)] = 10781,
  [SMALL_STATE(350)] = 10797,
  [SMALL_STATE(351)] = 10811,
  [SMALL_STATE(352)] = 10821,
  [SMALL_STATE(353)] = 10837,
  [SMALL_STATE(354)] = 10853,
  [SMALL_STATE(355)] = 10867,
  [SMALL_STATE(356)] = 10881,
  [SMALL_STATE(357)] = 10897,
  [SMALL_STATE(358)] = 10913,
  [SMALL_STATE(359)] = 10927,
  [SMALL_STATE(360)] = 10943,
  [SMALL_STATE(361)] = 10957,
  [SMALL_STATE(362)] = 10971,
  [SMALL_STATE(363)] = 10981,
  [SMALL_STATE(364)] = 10993,
  [SMALL_STATE(365)] = 11009,
  [SMALL_STATE(366)] = 11023,
  [SMALL_STATE(367)] = 11037,
  [SMALL_STATE(368)] = 11053,
  [SMALL_STATE(369)] = 11063,
  [SMALL_STATE(370)] = 11079,
  [SMALL_STATE(371)] = 11095,
  [SMALL_STATE(372)] = 11111,
  [SMALL_STATE(373)] = 11127,
  [SMALL_STATE(374)] = 11143,
  [SMALL_STATE(375)] = 11159,
  [SMALL_STATE(376)] = 11175,
  [SMALL_STATE(377)] = 11191,
  [SMALL_STATE(378)] = 11207,
  [SMALL_STATE(379)] = 11221,
  [SMALL_STATE(380)] = 11237,
  [SMALL_STATE(381)] = 11251,
  [SMALL_STATE(382)] = 11267,
  [SMALL_STATE(383)] = 11283,
  [SMALL_STATE(384)] = 11297,
  [SMALL_STATE(385)] = 11309,
  [SMALL_STATE(386)] = 11325,
  [SMALL_STATE(387)] = 11341,
  [SMALL_STATE(388)] = 11351,
  [SMALL_STATE(389)] = 11363,
  [SMALL_STATE(390)] = 11373,
  [SMALL_STATE(391)] = 11387,
  [SMALL_STATE(392)] = 11397,
  [SMALL_STATE(393)] = 11413,
  [SMALL_STATE(394)] = 11429,
  [SMALL_STATE(395)] = 11445,
  [SMALL_STATE(396)] = 11461,
  [SMALL_STATE(397)] = 11477,
  [SMALL_STATE(398)] = 11487,
  [SMALL_STATE(399)] = 11503,
  [SMALL_STATE(400)] = 11519,
  [SMALL_STATE(401)] = 11532,
  [SMALL_STATE(402)] = 11545,
  [SMALL_STATE(403)] = 11558,
  [SMALL_STATE(404)] = 11571,
  [SMALL_STATE(405)] = 11584,
  [SMALL_STATE(406)] = 11597,
  [SMALL_STATE(407)] = 11610,
  [SMALL_STATE(408)] = 11621,
  [SMALL_STATE(409)] = 11634,
  [SMALL_STATE(410)] = 11647,
  [SMALL_STATE(411)] = 11660,
  [SMALL_STATE(412)] = 11673,
  [SMALL_STATE(413)] = 11686,
  [SMALL_STATE(414)] = 11699,
  [SMALL_STATE(415)] = 11712,
  [SMALL_STATE(416)] = 11725,
  [SMALL_STATE(417)] = 11738,
  [SMALL_STATE(418)] = 11751,
  [SMALL_STATE(419)] = 11764,
  [SMALL_STATE(420)] = 11777,
  [SMALL_STATE(421)] = 11790,
  [SMALL_STATE(422)] = 11803,
  [SMALL_STATE(423)] = 11816,
  [SMALL_STATE(424)] = 11827,
  [SMALL_STATE(425)] = 11840,
  [SMALL_STATE(426)] = 11853,
  [SMALL_STATE(427)] = 11866,
  [SMALL_STATE(428)] = 11879,
  [SMALL_STATE(429)] = 11892,
  [SMALL_STATE(430)] = 11903,
  [SMALL_STATE(431)] = 11916,
  [SMALL_STATE(432)] = 11929,
  [SMALL_STATE(433)] = 11942,
  [SMALL_STATE(434)] = 11955,
  [SMALL_STATE(435)] = 11968,
  [SMALL_STATE(436)] = 11981,
  [SMALL_STATE(437)] = 11994,
  [SMALL_STATE(438)] = 12007,
  [SMALL_STATE(439)] = 12020,
  [SMALL_STATE(440)] = 12033,
  [SMALL_STATE(441)] = 12046,
  [SMALL_STATE(442)] = 12059,
  [SMALL_STATE(443)] = 12072,
  [SMALL_STATE(444)] = 12085,
  [SMALL_STATE(445)] = 12096,
  [SMALL_STATE(446)] = 12109,
  [SMALL_STATE(447)] = 12120,
  [SMALL_STATE(448)] = 12133,
  [SMALL_STATE(449)] = 12146,
  [SMALL_STATE(450)] = 12159,
  [SMALL_STATE(451)] = 12168,
  [SMALL_STATE(452)] = 12181,
  [SMALL_STATE(453)] = 12194,
  [SMALL_STATE(454)] = 12207,
  [SMALL_STATE(455)] = 12220,
  [SMALL_STATE(456)] = 12233,
  [SMALL_STATE(457)] = 12246,
  [SMALL_STATE(458)] = 12259,
  [SMALL_STATE(459)] = 12272,
  [SMALL_STATE(460)] = 12285,
  [SMALL_STATE(461)] = 12298,
  [SMALL_STATE(462)] = 12311,
  [SMALL_STATE(463)] = 12324,
  [SMALL_STATE(464)] = 12337,
  [SMALL_STATE(465)] = 12350,
  [SMALL_STATE(466)] = 12361,
  [SMALL_STATE(467)] = 12374,
  [SMALL_STATE(468)] = 12387,
  [SMALL_STATE(469)] = 12400,
  [SMALL_STATE(470)] = 12413,
  [SMALL_STATE(471)] = 12426,
  [SMALL_STATE(472)] = 12439,
  [SMALL_STATE(473)] = 12452,
  [SMALL_STATE(474)] = 12465,
  [SMALL_STATE(475)] = 12478,
  [SMALL_STATE(476)] = 12491,
  [SMALL_STATE(477)] = 12502,
  [SMALL_STATE(478)] = 12513,
  [SMALL_STATE(479)] = 12526,
  [SMALL_STATE(480)] = 12539,
  [SMALL_STATE(481)] = 12552,
  [SMALL_STATE(482)] = 12565,
  [SMALL_STATE(483)] = 12578,
  [SMALL_STATE(484)] = 12591,
  [SMALL_STATE(485)] = 12604,
  [SMALL_STATE(486)] = 12615,
  [SMALL_STATE(487)] = 12623,
  [SMALL_STATE(488)] = 12631,
  [SMALL_STATE(489)] = 12641,
  [SMALL_STATE(490)] = 12651,
  [SMALL_STATE(491)] = 12661,
  [SMALL_STATE(492)] = 12671,
  [SMALL_STATE(493)] = 12681,
  [SMALL_STATE(494)] = 12689,
  [SMALL_STATE(495)] = 12699,
  [SMALL_STATE(496)] = 12709,
  [SMALL_STATE(497)] = 12717,
  [SMALL_STATE(498)] = 12725,
  [SMALL_STATE(499)] = 12735,
  [SMALL_STATE(500)] = 12745,
  [SMALL_STATE(501)] = 12753,
  [SMALL_STATE(502)] = 12763,
  [SMALL_STATE(503)] = 12771,
  [SMALL_STATE(504)] = 12779,
  [SMALL_STATE(505)] = 12787,
  [SMALL_STATE(506)] = 12797,
  [SMALL_STATE(507)] = 12807,
  [SMALL_STATE(508)] = 12815,
  [SMALL_STATE(509)] = 12825,
  [SMALL_STATE(510)] = 12833,
  [SMALL_STATE(511)] = 12841,
  [SMALL_STATE(512)] = 12851,
  [SMALL_STATE(513)] = 12861,
  [SMALL_STATE(514)] = 12869,
  [SMALL_STATE(515)] = 12879,
  [SMALL_STATE(516)] = 12887,
  [SMALL_STATE(517)] = 12895,
  [SMALL_STATE(518)] = 12905,
  [SMALL_STATE(519)] = 12915,
  [SMALL_STATE(520)] = 12923,
  [SMALL_STATE(521)] = 12931,
  [SMALL_STATE(522)] = 12941,
  [SMALL_STATE(523)] = 12951,
  [SMALL_STATE(524)] = 12961,
  [SMALL_STATE(525)] = 12969,
  [SMALL_STATE(526)] = 12977,
  [SMALL_STATE(527)] = 12985,
  [SMALL_STATE(528)] = 12995,
  [SMALL_STATE(529)] = 13003,
  [SMALL_STATE(530)] = 13013,
  [SMALL_STATE(531)] = 13021,
  [SMALL_STATE(532)] = 13029,
  [SMALL_STATE(533)] = 13039,
  [SMALL_STATE(534)] = 13047,
  [SMALL_STATE(535)] = 13057,
  [SMALL_STATE(536)] = 13065,
  [SMALL_STATE(537)] = 13073,
  [SMALL_STATE(538)] = 13083,
  [SMALL_STATE(539)] = 13093,
  [SMALL_STATE(540)] = 13101,
  [SMALL_STATE(541)] = 13109,
  [SMALL_STATE(542)] = 13117,
  [SMALL_STATE(543)] = 13125,
  [SMALL_STATE(544)] = 13133,
  [SMALL_STATE(545)] = 13141,
  [SMALL_STATE(546)] = 13149,
  [SMALL_STATE(547)] = 13156,
  [SMALL_STATE(548)] = 13163,
  [SMALL_STATE(549)] = 13170,
  [SMALL_STATE(550)] = 13177,
  [SMALL_STATE(551)] = 13184,
  [SMALL_STATE(552)] = 13191,
  [SMALL_STATE(553)] = 13198,
  [SMALL_STATE(554)] = 13205,
  [SMALL_STATE(555)] = 13212,
  [SMALL_STATE(556)] = 13219,
  [SMALL_STATE(557)] = 13226,
  [SMALL_STATE(558)] = 13233,
  [SMALL_STATE(559)] = 13240,
  [SMALL_STATE(560)] = 13247,
  [SMALL_STATE(561)] = 13254,
  [SMALL_STATE(562)] = 13261,
  [SMALL_STATE(563)] = 13268,
  [SMALL_STATE(564)] = 13275,
  [SMALL_STATE(565)] = 13282,
  [SMALL_STATE(566)] = 13289,
  [SMALL_STATE(567)] = 13296,
  [SMALL_STATE(568)] = 13303,
  [SMALL_STATE(569)] = 13310,
  [SMALL_STATE(570)] = 13317,
  [SMALL_STATE(571)] = 13324,
  [SMALL_STATE(572)] = 13331,
  [SMALL_STATE(573)] = 13338,
  [SMALL_STATE(574)] = 13345,
  [SMALL_STATE(575)] = 13352,
  [SMALL_STATE(576)] = 13359,
  [SMALL_STATE(577)] = 13366,
  [SMALL_STATE(578)] = 13373,
  [SMALL_STATE(579)] = 13380,
  [SMALL_STATE(580)] = 13387,
  [SMALL_STATE(581)] = 13394,
  [SMALL_STATE(582)] = 13401,
  [SMALL_STATE(583)] = 13408,
  [SMALL_STATE(584)] = 13415,
  [SMALL_STATE(585)] = 13422,
  [SMALL_STATE(586)] = 13429,
  [SMALL_STATE(587)] = 13436,
  [SMALL_STATE(588)] = 13443,
  [SMALL_STATE(589)] = 13450,
  [SMALL_STATE(590)] = 13457,
  [SMALL_STATE(591)] = 13464,
  [SMALL_STATE(592)] = 13471,
  [SMALL_STATE(593)] = 13478,
  [SMALL_STATE(594)] = 13485,
  [SMALL_STATE(595)] = 13492,
  [SMALL_STATE(596)] = 13499,
  [SMALL_STATE(597)] = 13506,
  [SMALL_STATE(598)] = 13513,
  [SMALL_STATE(599)] = 13520,
  [SMALL_STATE(600)] = 13527,
  [SMALL_STATE(601)] = 13534,
  [SMALL_STATE(602)] = 13541,
  [SMALL_STATE(603)] = 13548,
  [SMALL_STATE(604)] = 13555,
  [SMALL_STATE(605)] = 13562,
  [SMALL_STATE(606)] = 13569,
  [SMALL_STATE(607)] = 13576,
  [SMALL_STATE(608)] = 13583,
  [SMALL_STATE(609)] = 13590,
  [SMALL_STATE(610)] = 13597,
  [SMALL_STATE(611)] = 13604,
  [SMALL_STATE(612)] = 13611,
  [SMALL_STATE(613)] = 13618,
  [SMALL_STATE(614)] = 13625,
  [SMALL_STATE(615)] = 13632,
  [SMALL_STATE(616)] = 13639,
  [SMALL_STATE(617)] = 13646,
  [SMALL_STATE(618)] = 13653,
  [SMALL_STATE(619)] = 13660,
  [SMALL_STATE(620)] = 13667,
  [SMALL_STATE(621)] = 13674,
  [SMALL_STATE(622)] = 13681,
  [SMALL_STATE(623)] = 13688,
  [SMALL_STATE(624)] = 13695,
  [SMALL_STATE(625)] = 13702,
  [SMALL_STATE(626)] = 13709,
  [SMALL_STATE(627)] = 13716,
  [SMALL_STATE(628)] = 13723,
  [SMALL_STATE(629)] = 13730,
  [SMALL_STATE(630)] = 13737,
  [SMALL_STATE(631)] = 13744,
  [SMALL_STATE(632)] = 13751,
  [SMALL_STATE(633)] = 13758,
  [SMALL_STATE(634)] = 13765,
  [SMALL_STATE(635)] = 13772,
  [SMALL_STATE(636)] = 13779,
  [SMALL_STATE(637)] = 13786,
  [SMALL_STATE(638)] = 13793,
  [SMALL_STATE(639)] = 13800,
  [SMALL_STATE(640)] = 13807,
  [SMALL_STATE(641)] = 13814,
  [SMALL_STATE(642)] = 13821,
  [SMALL_STATE(643)] = 13828,
  [SMALL_STATE(644)] = 13835,
  [SMALL_STATE(645)] = 13842,
  [SMALL_STATE(646)] = 13849,
  [SMALL_STATE(647)] = 13856,
  [SMALL_STATE(648)] = 13863,
  [SMALL_STATE(649)] = 13870,
  [SMALL_STATE(650)] = 13877,
  [SMALL_STATE(651)] = 13884,
  [SMALL_STATE(652)] = 13891,
  [SMALL_STATE(653)] = 13898,
  [SMALL_STATE(654)] = 13905,
  [SMALL_STATE(655)] = 13912,
  [SMALL_STATE(656)] = 13919,
  [SMALL_STATE(657)] = 13926,
  [SMALL_STATE(658)] = 13933,
  [SMALL_STATE(659)] = 13940,
  [SMALL_STATE(660)] = 13947,
  [SMALL_STATE(661)] = 13954,
  [SMALL_STATE(662)] = 13961,
  [SMALL_STATE(663)] = 13968,
  [SMALL_STATE(664)] = 13975,
  [SMALL_STATE(665)] = 13982,
  [SMALL_STATE(666)] = 13989,
  [SMALL_STATE(667)] = 13996,
  [SMALL_STATE(668)] = 14003,
  [SMALL_STATE(669)] = 14010,
  [SMALL_STATE(670)] = 14017,
  [SMALL_STATE(671)] = 14024,
  [SMALL_STATE(672)] = 14031,
  [SMALL_STATE(673)] = 14038,
  [SMALL_STATE(674)] = 14045,
  [SMALL_STATE(675)] = 14052,
  [SMALL_STATE(676)] = 14059,
  [SMALL_STATE(677)] = 14066,
  [SMALL_STATE(678)] = 14073,
  [SMALL_STATE(679)] = 14080,
  [SMALL_STATE(680)] = 14087,
  [SMALL_STATE(681)] = 14094,
  [SMALL_STATE(682)] = 14101,
  [SMALL_STATE(683)] = 14108,
  [SMALL_STATE(684)] = 14115,
  [SMALL_STATE(685)] = 14122,
  [SMALL_STATE(686)] = 14129,
  [SMALL_STATE(687)] = 14136,
  [SMALL_STATE(688)] = 14143,
  [SMALL_STATE(689)] = 14150,
  [SMALL_STATE(690)] = 14157,
  [SMALL_STATE(691)] = 14164,
  [SMALL_STATE(692)] = 14171,
  [SMALL_STATE(693)] = 14178,
  [SMALL_STATE(694)] = 14185,
  [SMALL_STATE(695)] = 14192,
  [SMALL_STATE(696)] = 14199,
  [SMALL_STATE(697)] = 14206,
  [SMALL_STATE(698)] = 14213,
  [SMALL_STATE(699)] = 14220,
  [SMALL_STATE(700)] = 14227,
  [SMALL_STATE(701)] = 14234,
  [SMALL_STATE(702)] = 14241,
  [SMALL_STATE(703)] = 14248,
  [SMALL_STATE(704)] = 14255,
  [SMALL_STATE(705)] = 14262,
  [SMALL_STATE(706)] = 14269,
  [SMALL_STATE(707)] = 14276,
  [SMALL_STATE(708)] = 14283,
  [SMALL_STATE(709)] = 14290,
  [SMALL_STATE(710)] = 14297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(299),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prio, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(538),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(300),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prio_repeat1, 2), SHIFT_REPEAT(58),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 1),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(299),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(47),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(78),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(660),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 1),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(299),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(47),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprio, 6),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_heuristic, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 2), SHIFT_REPEAT(501),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_not_function_repeat1, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(300),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 1), SHIFT_REPEAT(58),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(34),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_function, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_function, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(300),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 1), SHIFT_REPEAT(58),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_function_repeat1, 2), SHIFT_REPEAT(49),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_natural, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(701),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(699),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(698),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(697),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(696),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(695),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(434),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(694),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(432),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(37),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(54),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goal_ranking, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_goal_ranking, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_goal_ranking, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expterm, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expterm, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expterm_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(154),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multterm_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(143),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 7),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_var, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_var, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_term, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_term, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multterm, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multterm, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 6),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 9),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 8),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnode_var, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonnode_var, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(132),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xorterm, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xorterm, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(128),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(192),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_heuristic_repeat1, 2), SHIFT_REPEAT(650),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__msetterm, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__msetterm, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_var, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_var, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat1, 2), SHIFT_REPEAT(642),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tactic_repeat2, 2), SHIFT_REPEAT(641),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_subscr_repeat1, 2), SHIFT_REPEAT(158),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_subscr, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tactic, 6),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functions_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2), SHIFT_REPEAT(499),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(505),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(22),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_goal_ranking, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arity, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arity, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_ins, 4),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equations, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_equations_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2), SHIFT_REPEAT(144),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2), SHIFT_REPEAT(261),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_goal_ranking, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal_ranking, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(24),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 13),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 13),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sym, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sym, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 11),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 14),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 14),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 15),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 15),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_built_ins_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_equations_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 12),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 12),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 11),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_rule, 10),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_rule, 10),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_built_in, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imp, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 6),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_comment, 4),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(23),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_method, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lemma, 10),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 4),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 6),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_method, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proof_skeleton, 1),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 7),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(329),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(588),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(615),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(19),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(21),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expterm_repeat1, 2), SHIFT_REPEAT(155),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multterm_repeat1, 2), SHIFT_REPEAT(145),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(133),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xorterm_repeat1, 2), SHIFT_REPEAT(133),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 6),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvar, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__msetterm_repeat1, 2), SHIFT_REPEAT(130),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2), SHIFT_REPEAT(113),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_term_repeat1, 2),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2), SHIFT_REPEAT(508),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotes, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 7),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2), SHIFT_REPEAT(301),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lemma_attrs_repeat1, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2), SHIFT_REPEAT(388),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotes_repeat1, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(478),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(14),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2), SHIFT_REPEAT(465),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_attrs_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_facts_repeat1, 2), SHIFT_REPEAT(442),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2), SHIFT_REPEAT(627),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facts, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proof_skeleton_repeat1, 4),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attr, 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attr, 2),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presort, 3),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annote, 1),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_block_repeat1, 3),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 2),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 5),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof_skeleton, 6),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 5),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 5),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_ranking, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 4),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 4),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_block, 3),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma_attrs, 3),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction_attrs, 3),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulo, 4),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_attrs, 3),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace_quantifier, 1),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 4),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 5),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 11),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_security_protocol_theory, 4),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tamarin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
