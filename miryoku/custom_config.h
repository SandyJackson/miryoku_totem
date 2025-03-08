// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// Modifed by SandyJackson in 2025
// Base layout is QWERTY with a modified Graphite layout as 'extra'
// Main addition is an implementation of timeless home row mods, based on urob's configuration
// See https://github.com/urob/zmk-config for troubleshooting steps
// Also included are personalised thumb controls, with a 'magic' shift and a meh key
// Modifications to create custom behaviours found in [miuryoku_behaviors.dsti, miryoku_behaviours.h, totem.h]

// Customise build and behaviour timings
#define MIRYOKU_CLIPBOARD_MAC
#define HRM_TAPPING_TERM 400
#define HRM_QUICK_TAP 175
#define HRM_PRIOR_IDLE 280
#define LT_QUICK_TAP 175
#define STICKY_KEY_RELEASE_MS 2000

// Create custom layer map

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym")
//MIRYOKU_X(MOUSE,  "Mouse")
//MIRYOKU_X(TAP,    "Tap")
//MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_BUTTON 2
#define U_NAV    3
#define U_MEDIA  4
#define U_NUM    5
#define U_SYM    6
#define U_TAP    U_BASE
#define U_MOUSE  U_BASE
#define U_FUN    U_BASE

// Custom Base Layer Mapping for Totem
#define MIRYOKU_LAYOUTMAPPING_BASE( \
    K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
             K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
             K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
&kp LG(TAB)  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp LA(BSPC) \
               K32  K33  K34       K35  K36  K37

// QWERTY Base
//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_BASE \
    &kp Q,            &kp W,             &kp E,             &kp R,             &kp T,                 &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
     HRM_L(LSHFT, A),   HRM_L(LALT, S),   HRM_L(LCTRL, D),  HRM_L(LGUI, F),       &kp G,                &kp H,             HRM_R(LGUI, J),    HRM_R(LCTRL, K),   HRM_R(LALT, L),  HRM_R(LSHFT, SQT), \
    U_LT(U_BUTTON, Z),   U_MT(RALT, X),    &kp C,             &kp V,             &kp B,                &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
    U_NP,             U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC),    &m_shft,              U_LT(U_SYM, RET),U_LT(U_NUM,SPACE),U_MT(LS(LC(LALT)),TAB),   U_NP,             U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯

// Modified Graphite (modifed to exclude need for custom morphs)
//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_EXTRA \
    &kp B,             &kp L,             &kp D,             &kp W,             &kp Z,                 &kp J,             &kp F,             &kp O,             &kp U,             &kp SQT,            \
    HRM_L(LSHFT, N),   HRM_L(LALT, R),    HRM_L(LCTRL, T),   HRM_L(LGUI, S),    &kp G,                 &kp Y,             HRM_R(LGUI, H),    HRM_R(LCTRL, A),   HRM_R(LALT, E),    HRM_R(LSHFT, I),   \
    U_LT(U_BUTTON, Q), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,                 &kp K,             &kp P,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
    U_NP,             U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC),    &m_shft,              U_LT(U_SYM, RET),U_LT(U_NUM,SPACE),U_MT(LS(LC(LALT)),TAB),   U_NP,             U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯

// COLEMAK-DH Extra commented out while I trial graphite
/*
//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭───── ─────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_EXTRA \ 
    &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,                 &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
    HRM_L(LSHFT, A),   HRM_L(LALT, R),    HRM_L(LCTRL, S),   HRM_L(LGUI, T),    &kp G,                 &kp M,             HRM_R(LGUI, N),    HRM_R(LCTRL, E),   HRM_R(LALT, I),    HRM_R(LSHFT, O),   \
    U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,                 &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
    U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC), &m_shft,               U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE),U_MT(LS(LC(LA)), TAB),U_NP,            U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯
*/

//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_NAV \
    U_BOOT,            U_NA,  	         &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,                   U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
    &kp LSHFT,         &kp LALT,          &kp LCTRL,         &kp LGUI,          U_NA,                &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
    U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,                &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
    U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                &kp RET,           &kp BSPC,          &kp TAB,           U_NP,              U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯

//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_BUTTON \
    U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,                U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
    &kp LSHFT,         &kp LALT,          &kp LCTRL,         &kp LGUI,          U_NU,                 U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
    U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,                U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
    U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,               U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯

//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_SYM \
    &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,             U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     U_NA,  	         U_BOOT,            \
    &kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,             U_NA,              &kp LGUI,          &kp LCTRL,         &kp LALT,          &kp LSHFT,         \
    &kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,             U_NA,              &u_to_U_SYM,       U_NA,               &kp RALT,          U_NA,              \
    U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯

//╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮   ╭──────────────────┬──────────────────┬──────────────────┬──────────────────┬──────────────────╮
#define MIRYOKU_LAYER_NUM \
    &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,             U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     U_NA,  	         U_BOOT,            \
    &kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,            U_NA,              &kp LGUI,          &kp LCTRL,         &kp LALT,          &kp LSHFT,         \
    &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,             U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
    U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP
//╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯   ╰──────────────────┴──────────────────┴──────────────────┴──────────────────┴──────────────────╯
