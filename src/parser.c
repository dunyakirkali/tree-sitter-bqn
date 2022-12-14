#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_STAR = 3,
  anon_sym_SLASH = 4,
  anon_sym_STAR_STAR = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_number = 8,
  sym_variable = 9,
  sym_expression = 10,
  sym__expression = 11,
  sym_sum = 12,
  sym_subtraction = 13,
  sym_product = 14,
  sym_division = 15,
  sym_exponent = 16,
  sym__parenthesized_expression = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_variable] = "variable",
  [sym_expression] = "expression",
  [sym__expression] = "_expression",
  [sym_sum] = "sum",
  [sym_subtraction] = "subtraction",
  [sym_product] = "product",
  [sym_division] = "division",
  [sym_exponent] = "exponent",
  [sym__parenthesized_expression] = "_parenthesized_expression",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_variable] = sym_variable,
  [sym_expression] = sym_expression,
  [sym__expression] = sym__expression,
  [sym_sum] = sym_sum,
  [sym_subtraction] = sym_subtraction,
  [sym_product] = sym_product,
  [sym_division] = sym_division,
  [sym_exponent] = sym_exponent,
  [sym__parenthesized_expression] = sym__parenthesized_expression,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_product] = {
    .visible = true,
    .named = true,
  },
  [sym_division] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesized_expression] = {
    .visible = false,
    .named = true,
  },
};

enum {
  field_base = 1,
  field_exponent = 2,
  field_left = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_exponent] = "exponent",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
  [2] =
    {field_base, 0},
    {field_exponent, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(16),
    [sym__expression] = STATE(14),
    [sym_sum] = STATE(14),
    [sym_subtraction] = STATE(14),
    [sym_product] = STATE(14),
    [sym_division] = STATE(14),
    [sym_exponent] = STATE(14),
    [sym__parenthesized_expression] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_variable] = ACTIONS(5),
  },
  [2] = {
    [sym__expression] = STATE(15),
    [sym_sum] = STATE(15),
    [sym_subtraction] = STATE(15),
    [sym_product] = STATE(15),
    [sym_division] = STATE(15),
    [sym_exponent] = STATE(15),
    [sym__parenthesized_expression] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(7),
    [sym_variable] = ACTIONS(7),
  },
  [3] = {
    [sym__expression] = STATE(9),
    [sym_sum] = STATE(9),
    [sym_subtraction] = STATE(9),
    [sym_product] = STATE(9),
    [sym_division] = STATE(9),
    [sym_exponent] = STATE(9),
    [sym__parenthesized_expression] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(9),
    [sym_variable] = ACTIONS(9),
  },
  [4] = {
    [sym__expression] = STATE(10),
    [sym_sum] = STATE(10),
    [sym_subtraction] = STATE(10),
    [sym_product] = STATE(10),
    [sym_division] = STATE(10),
    [sym_exponent] = STATE(10),
    [sym__parenthesized_expression] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(11),
    [sym_variable] = ACTIONS(11),
  },
  [5] = {
    [sym__expression] = STATE(11),
    [sym_sum] = STATE(11),
    [sym_subtraction] = STATE(11),
    [sym_product] = STATE(11),
    [sym_division] = STATE(11),
    [sym_exponent] = STATE(11),
    [sym__parenthesized_expression] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(13),
    [sym_variable] = ACTIONS(13),
  },
  [6] = {
    [sym__expression] = STATE(12),
    [sym_sum] = STATE(12),
    [sym_subtraction] = STATE(12),
    [sym_product] = STATE(12),
    [sym_division] = STATE(12),
    [sym_exponent] = STATE(12),
    [sym__parenthesized_expression] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(15),
    [sym_variable] = ACTIONS(15),
  },
  [7] = {
    [sym__expression] = STATE(13),
    [sym_sum] = STATE(13),
    [sym_subtraction] = STATE(13),
    [sym_product] = STATE(13),
    [sym_division] = STATE(13),
    [sym_exponent] = STATE(13),
    [sym__parenthesized_expression] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(17),
    [sym_variable] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
  [12] = 4,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [28] = 4,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [44] = 3,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [58] = 3,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [72] = 2,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_RPAREN,
  [84] = 6,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
  [103] = 6,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
  [122] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 12,
  [SMALL_STATE(10)] = 28,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 58,
  [SMALL_STATE(13)] = 72,
  [SMALL_STATE(14)] = 84,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesized_expression, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_BQN(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
