#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym__block_token1 = 1,
  aux_sym_metadata_key_token1 = 2,
  aux_sym_metadata_value_token1 = 3,
  anon_sym_GT_GT = 4,
  anon_sym_COLON = 5,
  sym_comment = 6,
  sym_block_comment = 7,
  sym__name_word = 8,
  anon_sym_AT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_POUND = 12,
  anon_sym_TILDE = 13,
  anon_sym_PERCENT = 14,
  sym__number = 15,
  sym__alphabetic = 16,
  sym__whitespace = 17,
  sym__punctuation = 18,
  sym__text_item = 19,
  sym_source_file = 20,
  sym__block = 21,
  sym_metadata_key = 22,
  sym_metadata_value = 23,
  sym_metadata = 24,
  sym_step = 25,
  sym__name_multiword = 26,
  sym_ingredient = 27,
  sym_cookware = 28,
  sym_timer = 29,
  sym_name = 30,
  sym_quantity = 31,
  sym_units = 32,
  sym_amount = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_metadata_key_repeat1 = 35,
  aux_sym_metadata_value_repeat1 = 36,
  aux_sym_step_repeat1 = 37,
  aux_sym__name_multiword_repeat1 = 38,
  aux_sym__name_multiword_repeat2 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__block_token1] = "_block_token1",
  [aux_sym_metadata_key_token1] = "metadata_key_token1",
  [aux_sym_metadata_value_token1] = "metadata_value_token1",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym__name_word] = "_name_word",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_PERCENT] = "%",
  [sym__number] = "_number",
  [sym__alphabetic] = "_alphabetic",
  [sym__whitespace] = "_whitespace",
  [sym__punctuation] = "_punctuation",
  [sym__text_item] = "_text_item",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_metadata_key] = "metadata_key",
  [sym_metadata_value] = "metadata_value",
  [sym_metadata] = "metadata",
  [sym_step] = "step",
  [sym__name_multiword] = "_name_multiword",
  [sym_ingredient] = "ingredient",
  [sym_cookware] = "cookware",
  [sym_timer] = "timer",
  [sym_name] = "name",
  [sym_quantity] = "quantity",
  [sym_units] = "units",
  [sym_amount] = "amount",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_metadata_key_repeat1] = "metadata_key_repeat1",
  [aux_sym_metadata_value_repeat1] = "metadata_value_repeat1",
  [aux_sym_step_repeat1] = "step_repeat1",
  [aux_sym__name_multiword_repeat1] = "_name_multiword_repeat1",
  [aux_sym__name_multiword_repeat2] = "_name_multiword_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__block_token1] = aux_sym__block_token1,
  [aux_sym_metadata_key_token1] = aux_sym_metadata_key_token1,
  [aux_sym_metadata_value_token1] = aux_sym_metadata_value_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym__name_word] = sym__name_word,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym__number] = sym__number,
  [sym__alphabetic] = sym__alphabetic,
  [sym__whitespace] = sym__whitespace,
  [sym__punctuation] = sym__punctuation,
  [sym__text_item] = sym__text_item,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_metadata_key] = sym_metadata_key,
  [sym_metadata_value] = sym_metadata_value,
  [sym_metadata] = sym_metadata,
  [sym_step] = sym_step,
  [sym__name_multiword] = sym__name_multiword,
  [sym_ingredient] = sym_ingredient,
  [sym_cookware] = sym_cookware,
  [sym_timer] = sym_timer,
  [sym_name] = sym_name,
  [sym_quantity] = sym_quantity,
  [sym_units] = sym_units,
  [sym_amount] = sym_amount,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_metadata_key_repeat1] = aux_sym_metadata_key_repeat1,
  [aux_sym_metadata_value_repeat1] = aux_sym_metadata_value_repeat1,
  [aux_sym_step_repeat1] = aux_sym_step_repeat1,
  [aux_sym__name_multiword_repeat1] = aux_sym__name_multiword_repeat1,
  [aux_sym__name_multiword_repeat2] = aux_sym__name_multiword_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__name_word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__alphabetic] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__punctuation] = {
    .visible = false,
    .named = true,
  },
  [sym__text_item] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_value] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym__name_multiword] = {
    .visible = false,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_cookware] = {
    .visible = true,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_multiword_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_multiword_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_metadata_key = 1,
  field_metadata_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_metadata_key] = "metadata_key",
  [field_metadata_value] = "metadata_value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_metadata_key, 1},
    {field_metadata_value, 4},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static inline bool aux_sym_metadata_key_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < 7360
    ? (c < 2557
      ? (c < 1470
        ? (c < 167
          ? (c < '?'
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= '/' || c == ';'))
            : (c <= '?' || (c < '_'
              ? (c >= '[' && c <= ']')
              : (c <= '_' || c == 161))))
          : (c <= 167 || (c < 894
            ? (c < 187
              ? (c < 182
                ? c == 171
                : c <= 183)
              : (c <= 187 || c == 191))
            : (c <= 894 || (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))))))
        : (c <= 1470 || (c < 1642
          ? (c < 1545
            ? (c < 1478
              ? (c < 1475
                ? c == 1472
                : c <= 1475)
              : (c <= 1478 || (c >= 1523 && c <= 1524)))
            : (c <= 1546 || (c < 1563
              ? (c >= 1548 && c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))))
          : (c <= 1645 || (c < 2096
            ? (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5120
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4057
            ? (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym_comment_character_set_2(int32_t c) {
  return (c < 7360
    ? (c < 2557
      ? (c < 1470
        ? (c < 167
          ? (c < '?'
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= '/' || c == ';'))
            : (c <= '?' || (c < '_'
              ? (c >= '[' && c <= ']')
              : (c <= '_' || c == 161))))
          : (c <= 167 || (c < 894
            ? (c < 187
              ? (c < 182
                ? c == 171
                : c <= 183)
              : (c <= 187 || c == 191))
            : (c <= 894 || (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))))))
        : (c <= 1470 || (c < 1642
          ? (c < 1545
            ? (c < 1478
              ? (c < 1475
                ? c == 1472
                : c <= 1475)
              : (c <= 1478 || (c >= 1523 && c <= 1524)))
            : (c <= 1546 || (c < 1563
              ? (c >= 1548 && c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))))
          : (c <= 1645 || (c < 2096
            ? (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5120
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4057
            ? (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym__name_word_character_set_1(int32_t c) {
  return (c < 7360
    ? (c < 2557
      ? (c < 1470
        ? (c < 167
          ? (c < '?'
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= '/' || c == ';'))
            : (c <= '?' || (c < '_'
              ? (c >= '\\' && c <= ']')
              : (c <= '_' || c == 161))))
          : (c <= 167 || (c < 894
            ? (c < 187
              ? (c < 182
                ? c == 171
                : c <= 183)
              : (c <= 187 || c == 191))
            : (c <= 894 || (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))))))
        : (c <= 1470 || (c < 1642
          ? (c < 1545
            ? (c < 1478
              ? (c < 1475
                ? c == 1472
                : c <= 1475)
              : (c <= 1478 || (c >= 1523 && c <= 1524)))
            : (c <= 1546 || (c < 1563
              ? (c >= 1548 && c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))))
          : (c <= 1645 || (c < 2096
            ? (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5120
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4057
            ? (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym__name_word_character_set_2(int32_t c) {
  return (c < 7360
    ? (c < 2557
      ? (c < 1470
        ? (c < 167
          ? (c < '?'
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= '/' || c == ';'))
            : (c <= '?' || (c < '_'
              ? (c >= '[' && c <= '\\')
              : (c <= '_' || c == 161))))
          : (c <= 167 || (c < 894
            ? (c < 187
              ? (c < 182
                ? c == 171
                : c <= 183)
              : (c <= 187 || c == 191))
            : (c <= 894 || (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))))))
        : (c <= 1470 || (c < 1642
          ? (c < 1545
            ? (c < 1478
              ? (c < 1475
                ? c == 1472
                : c <= 1475)
              : (c <= 1478 || (c >= 1523 && c <= 1524)))
            : (c <= 1546 || (c < 1563
              ? (c >= 1548 && c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))))
          : (c <= 1645 || (c < 2096
            ? (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5120
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4057
            ? (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool sym__punctuation_character_set_1(int32_t c) {
  return (c < 7360
    ? (c < 2557
      ? (c < 1470
        ? (c < 167
          ? (c < '?'
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= '/' || c == ';'))
            : (c <= '?' || (c < '_'
              ? (c >= '[' && c <= '\\')
              : (c <= '_' || c == 161))))
          : (c <= 167 || (c < 894
            ? (c < 187
              ? (c < 182
                ? c == 171
                : c <= 183)
              : (c <= 187 || c == 191))
            : (c <= 894 || (c < 1370
              ? c == 903
              : (c <= 1375 || (c >= 1417 && c <= 1418)))))))
        : (c <= 1470 || (c < 1642
          ? (c < 1545
            ? (c < 1478
              ? (c < 1475
                ? c == 1472
                : c <= 1475)
              : (c <= 1478 || (c >= 1523 && c <= 1524)))
            : (c <= 1546 || (c < 1563
              ? (c >= 1548 && c <= 1549)
              : (c <= 1563 || (c >= 1565 && c <= 1567)))))
          : (c <= 1645 || (c < 2096
            ? (c < 1792
              ? c == 1748
              : (c <= 1805 || (c >= 2039 && c <= 2041)))
            : (c <= 2110 || (c < 2404
              ? c == 2142
              : (c <= 2405 || c == 2416))))))))
      : (c <= 2557 || (c < 5120
        ? (c < 3860
          ? (c < 3572
            ? (c < 3191
              ? (c < 2800
                ? c == 2678
                : c <= 2800)
              : (c <= 3191 || c == 3204))
            : (c <= 3572 || (c < 3674
              ? c == 3663
              : (c <= 3675 || (c >= 3844 && c <= 3858)))))
          : (c <= 3860 || (c < 4057
            ? (c < 3973
              ? (c >= 3898 && c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(16);
      if (aux_sym_metadata_key_token1_character_set_1(lookahead)) ADVANCE(16);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(46);
      if (sym__name_word_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(16);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(24);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(53);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__block_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__block_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(59);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(59);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(59);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(30);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(30);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '%') ADVANCE(57);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_block_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(57);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '-') ADVANCE(27);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '-') ADVANCE(39);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '%') ADVANCE(57);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (sym__name_word_character_set_2(lookahead)) ADVANCE(39);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '#' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(39);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name_word);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__punctuation);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == ']') ADVANCE(33);
      if (sym__punctuation_character_set_1(lookahead)) ADVANCE(56);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__punctuation);
      if (lookahead == '-') ADVANCE(55);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(56);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__punctuation);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__text_item);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__text_item);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__block_token1] = ACTIONS(1),
    [aux_sym_metadata_key_token1] = ACTIONS(1),
    [aux_sym_metadata_value_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym__alphabetic] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__block] = STATE(2),
    [sym_metadata] = STATE(2),
    [sym_step] = STATE(2),
    [sym_ingredient] = STATE(6),
    [sym_cookware] = STATE(6),
    [sym_timer] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_step_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym__block_token1] = ACTIONS(9),
    [anon_sym_GT_GT] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_block_comment] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [sym__whitespace] = ACTIONS(5),
    [sym__text_item] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_GT_GT,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_TILDE,
    ACTIONS(21), 1,
      sym__text_item,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__block_token1,
    ACTIONS(27), 2,
      sym_comment,
      sym_block_comment,
    STATE(3), 4,
      sym__block,
      sym_metadata,
      sym_step,
      aux_sym_source_file_repeat1,
    STATE(6), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [41] = 11,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__block_token1,
    ACTIONS(34), 1,
      anon_sym_GT_GT,
    ACTIONS(40), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(46), 1,
      anon_sym_TILDE,
    ACTIONS(49), 1,
      sym__text_item,
    ACTIONS(37), 2,
      sym_comment,
      sym_block_comment,
    STATE(3), 4,
      sym__block,
      sym_metadata,
      sym_step,
      aux_sym_source_file_repeat1,
    STATE(6), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [82] = 5,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      aux_sym_metadata_value_token1,
    STATE(4), 1,
      aux_sym_metadata_value_repeat1,
    ACTIONS(54), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      anon_sym_GT_GT,
      sym_comment,
      sym_block_comment,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [105] = 5,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(63), 1,
      aux_sym_metadata_value_token1,
    STATE(4), 1,
      aux_sym_metadata_value_repeat1,
    ACTIONS(61), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_GT_GT,
      sym_comment,
      sym_block_comment,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [128] = 8,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      aux_sym__block_token1,
    ACTIONS(67), 1,
      sym__text_item,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    STATE(7), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [157] = 8,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      aux_sym__block_token1,
    ACTIONS(71), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_TILDE,
    ACTIONS(80), 1,
      sym__text_item,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    STATE(7), 4,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym_step_repeat1,
  [186] = 7,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym__whitespace,
    STATE(22), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(85), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [212] = 7,
    ACTIONS(89), 1,
      sym__whitespace,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(91), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(93), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [238] = 3,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(99), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_GT_GT,
      sym_comment,
      sym_block_comment,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [255] = 3,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(103), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_GT_GT,
      sym_comment,
      sym_block_comment,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [272] = 7,
    ACTIONS(105), 1,
      sym__name_word,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym__number,
    STATE(37), 1,
      sym_quantity,
    STATE(38), 1,
      sym__name_multiword,
    STATE(43), 1,
      sym_amount,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [296] = 7,
    ACTIONS(105), 1,
      sym__name_word,
    ACTIONS(109), 1,
      sym__number,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_quantity,
    STATE(38), 1,
      sym__name_multiword,
    STATE(46), 1,
      sym_amount,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [320] = 7,
    ACTIONS(105), 1,
      sym__name_word,
    ACTIONS(109), 1,
      sym__number,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_quantity,
    STATE(38), 1,
      sym__name_multiword,
    STATE(41), 1,
      sym_amount,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [344] = 7,
    ACTIONS(105), 1,
      sym__name_word,
    ACTIONS(109), 1,
      sym__number,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_quantity,
    STATE(38), 1,
      sym__name_multiword,
    STATE(45), 1,
      sym_amount,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [368] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(119), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [385] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(121), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(123), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [402] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(125), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(127), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [419] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(129), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(131), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [436] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(133), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(135), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [453] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(137), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(139), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [470] = 5,
    ACTIONS(143), 1,
      sym__whitespace,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [489] = 4,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      aux_sym__block_token1,
      sym__text_item,
    ACTIONS(147), 3,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [506] = 5,
    ACTIONS(151), 1,
      sym__whitespace,
    STATE(24), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [525] = 5,
    ACTIONS(154), 1,
      sym__name_word,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_name,
    STATE(49), 1,
      sym__name_multiword,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [543] = 5,
    ACTIONS(143), 1,
      sym__whitespace,
    STATE(22), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [561] = 5,
    ACTIONS(160), 1,
      sym__name_word,
    ACTIONS(162), 1,
      sym__punctuation,
    STATE(50), 1,
      sym__name_multiword,
    STATE(51), 1,
      sym_units,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [579] = 5,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(164), 1,
      aux_sym_metadata_key_token1,
    ACTIONS(166), 1,
      anon_sym_COLON,
    STATE(31), 1,
      aux_sym_metadata_key_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [596] = 5,
    ACTIONS(143), 1,
      sym__whitespace,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [613] = 5,
    ACTIONS(143), 1,
      sym__whitespace,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym__name_multiword_repeat2,
    STATE(35), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [630] = 5,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      aux_sym_metadata_key_token1,
    ACTIONS(175), 1,
      anon_sym_COLON,
    STATE(31), 1,
      aux_sym_metadata_key_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [647] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      sym__whitespace,
  [658] = 5,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      aux_sym_metadata_key_token1,
    STATE(28), 1,
      aux_sym_metadata_key_repeat1,
    STATE(47), 1,
      sym_metadata_key,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [675] = 5,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      aux_sym_metadata_value_token1,
    STATE(5), 1,
      aux_sym_metadata_value_repeat1,
    STATE(10), 1,
      sym_metadata_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
  [692] = 4,
    ACTIONS(181), 1,
      sym__name_word,
    ACTIONS(183), 1,
      sym__whitespace,
    STATE(36), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_block_comment,
  [706] = 4,
    ACTIONS(185), 1,
      sym__name_word,
    ACTIONS(187), 1,
      sym__whitespace,
    STATE(36), 1,
      aux_sym__name_multiword_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_block_comment,
  [720] = 3,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [732] = 2,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [742] = 3,
    ACTIONS(194), 1,
      sym__name_word,
    STATE(52), 1,
      sym__name_multiword,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [754] = 3,
    ACTIONS(196), 1,
      sym__name_word,
    STATE(42), 1,
      sym__name_multiword,
    ACTIONS(5), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [766] = 2,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [775] = 2,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [784] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [793] = 2,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [802] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [811] = 2,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [820] = 2,
    ACTIONS(206), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [829] = 2,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [838] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [847] = 2,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [856] = 2,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [865] = 2,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 3,
      sym_comment,
      sym_block_comment,
      sym__whitespace,
  [874] = 2,
    ACTIONS(212), 1,
      sym__whitespace,
    ACTIONS(3), 2,
      sym_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 296,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 344,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 506,
  [SMALL_STATE(25)] = 525,
  [SMALL_STATE(26)] = 543,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 596,
  [SMALL_STATE(30)] = 613,
  [SMALL_STATE(31)] = 630,
  [SMALL_STATE(32)] = 647,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 675,
  [SMALL_STATE(35)] = 692,
  [SMALL_STATE(36)] = 706,
  [SMALL_STATE(37)] = 720,
  [SMALL_STATE(38)] = 732,
  [SMALL_STATE(39)] = 742,
  [SMALL_STATE(40)] = 754,
  [SMALL_STATE(41)] = 766,
  [SMALL_STATE(42)] = 775,
  [SMALL_STATE(43)] = 784,
  [SMALL_STATE(44)] = 793,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 811,
  [SMALL_STATE(47)] = 820,
  [SMALL_STATE(48)] = 829,
  [SMALL_STATE(49)] = 838,
  [SMALL_STATE(50)] = 847,
  [SMALL_STATE(51)] = 856,
  [SMALL_STATE(52)] = 865,
  [SMALL_STATE(53)] = 874,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_value_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_value_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_value_repeat1, 2), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_value, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_value, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(40),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(39),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 5, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 5, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_multiword, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_multiword_repeat2, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_multiword_repeat2, 2), SHIFT_REPEAT(35),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_key, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_key_repeat1, 2), SHIFT_REPEAT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_key_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_multiword_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_multiword_repeat1, 2), SHIFT_REPEAT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cooklang() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif