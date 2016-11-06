/*******************************************************/
/**  Autogenerated lts rules (regex) for cmu_pashto     */
/**  from wfst/    */
/*******************************************************/

#include "cst_string.h"
#include "cst_lts.h"
#include "cst_lexicon.h"

const char * const cmu_pashto_lts_phone_table[245] = 
{
    "epsilon",
    "i1",
    "a1",
    "u0",
    "A1",
    "A0",
    "@-j",
    "a0",
    "o0",
    "Q-A0",
    "i0",
    "A0-h",
    "@",
    "A0-j",
    "h-A0",
    "b",
    "u1",
    "b-a0",
    "@-b",
    "b-a1",
    "a1-b",
    "u0-b",
    "a0-b",
    "t-a0",
    "t-i0",
    "t-@",
    "t",
    "a0-t",
    "a1-t",
    "t-u1",
    "a0-s",
    "s",
    "s-a1",
    "i0-s",
    "dZ-u0",
    "dZ-@",
    "dZ",
    "i0-dZ",
    "dZ-a0",
    "a0-h",
    "i0-h",
    "h-i1",
    "h",
    "h-a1",
    "a1-h",
    "u0-h",
    "h-a0",
    "h-i0",
    "x-i0",
    "x-a0",
    "i0-x",
    "u0-x",
    "@-x",
    "x",
    "a0-x",
    "a1-x",
    "d-i0",
    "d-a0",
    "d",
    "d-a1",
    "i0-d",
    "d-@",
    "@-d",
    "a0-d",
    "a1-d",
    "z-a0",
    "a0-z",
    "a1-z",
    "i0-z",
    "z",
    "F-a1",
    "F",
    "a1-F",
    "F-i0",
    "F-a0",
    "F-@",
    "a0-F",
    "@-F",
    "i0-F",
    "u0-F",
    "i1-F",
    "F-i1",
    "s-@",
    "s-a0",
    "a1-s",
    "@-s",
    "u0-s",
    "i1-s",
    "S-i0",
    "u0-S",
    "S",
    "S-a0",
    "S-a1",
    "a0-S",
    "S-@",
    "S-u1",
    "i0-S",
    "@-S",
    "i1-S",
    "s-i0",
    "z-i1",
    "u0-t",
    "i0-t",
    "i1-t",
    "Q-a1",
    "m",
    "e0-Q",
    "i0-Q",
    "a0-Q",
    "Q",
    "Q-a0",
    "i1-Q",
    "G-a0",
    "G",
    "u0-G",
    "f",
    "u0-f",
    "a0-f",
    "@-f",
    "i0-f",
    "f-i0",
    "a1-f",
    "i1-f",
    "f-@",
    "f-a0",
    "q",
    "q-a0",
    "l",
    "l-a0",
    "l-i0",
    "l-@",
    "l-a1",
    "l-i1",
    "@-l",
    "i1-l",
    "a0-l",
    "u0-l",
    "i0-l",
    "a1-l",
    "u1-l",
    "m-u0",
    "m-i0",
    "m-a0",
    "m-a1",
    "@-m",
    "a1-m",
    "a0-m",
    "u0-m",
    "u1-m",
    "i0-m",
    "n",
    "n-a1",
    "N",
    "a0-N",
    "nH",
    "a1-N",
    "a0-nH",
    "a1-n",
    "n-a0",
    "n-@",
    "@-n",
    "a0-n",
    "u0-n",
    "n-i0",
    "i0-n",
    "i1-n",
    "n-u0",
    "n-e0",
    "w",
    "U:1",
    "w-@",
    "w-a1",
    "w-a0",
    "o1",
    "u0-w",
    "a0-w",
    "a1-w",
    "U:0",
    "w-u0",
    "@-w",
    "w-u1",
    "U:0-l",
    "i:1",
    "a0-tH",
    "tH-a0",
    "tH",
    "p-a0",
    "p",
    "dz-@",
    "dz",
    "@-dz",
    "dz-a1",
    "ts",
    "tS-a1",
    "tS-a0",
    "tS",
    "t-S",
    "dH",
    "dH-a0",
    "a0-rH",
    "rH-@",
    "rH-a1",
    "rH",
    "rH-u1",
    "rH-a0",
    "@-rH",
    "a0-zH",
    "zH",
    "zH-a1",
    "a1-zH",
    "@-zH",
    "zH-@",
    "Z",
    "u0-sH",
    "a0-sH",
    "@-sH",
    "sH",
    "a1-sH",
    "k",
    "a0-k",
    "a1-k",
    "k-a0",
    "k-a1",
    "k-i0",
    "i0-k",
    "S-k",
    "g-u0",
    "g",
    "g-a0",
    "g-@",
    "a0-g",
    "a1-g",
    "j",
    "i0-j",
    "j-a1",
    "i1-j",
    "a1-j",
    "j-a0",
    "j-i1",
    "j-@",
    "i:0",
    "a0-j",
    "e1",
    "e0",
    NULL
};

const char * const cmu_pashto_lts_letter_table[52] = 
{
    "nothing",
    "#",
    "0",
    "=",
    "ء",
    "آ",
    "ئ",
    "ا",
    "ب",
    "ت",
    "ث",
    "ج",
    "ح",
    "خ",
    "د",
    "ذ",
    "ر",
    "ز",
    "س",
    "ش",
    "ص",
    "ض",
    "ط",
    "ظ",
    "ع",
    "غ",
    "ف",
    "ق",
    "ل",
    "م",
    "ن",
    "ه",
    "و",
    "ي",
    "ً",
    "ټ",
    "پ",
    "ځ",
    "څ",
    "چ",
    "ډ",
    "ړ",
    "ږ",
    "ژ",
    "ښ",
    "ک",
    "ګ",
    "ڼ",
    "ی",
    "ۍ",
    "ې",
    NULL
};

const cst_lts_addr cmu_pashto_lts_letter_index[49] = 
{
    0, /* = */
    8, /* ء */
    9, /* آ */
    13, /* ئ */
    14, /* ا */
    264, /* ب */
    311, /* ت */
    349, /* ث */
    358, /* ج */
    371, /* ح */
    405, /* خ */
    438, /* د */
    474, /* ذ */
    485, /* ر */
    690, /* ز */
    691, /* س */
    747, /* ش */
    800, /* ص */
    806, /* ض */
    815, /* ط */
    845, /* ظ */
    857, /* ع */
    911, /* غ */
    917, /* ف */
    957, /* ق */
    963, /* ل */
    1189, /* م */
    1319, /* ن */
    1459, /* ه */
    1520, /* و */
    2023, /* ي */
    2024, /* ً */
    2025, /* ټ */
    2032, /* پ */
    2037, /* ځ */
    2049, /* څ */
    2050, /* چ */
    2059, /* ډ */
    2062, /* ړ */
    2090, /* ږ */
    2108, /* ژ */
    2109, /* ښ */
    2124, /* ک */
    2195, /* ګ */
    2224, /* ڼ */
    2225, /* ی */
    2472, /* ۍ */
    2473, /* ې */
    0
};

