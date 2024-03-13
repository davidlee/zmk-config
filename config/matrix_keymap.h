#define __BLANK_ROW__  NONE NONE NONE NONE NONE NONE NONE NONE NONE NONE NONE NONE

#define LR_DEF_TOP &kp GRAVE  &kp Q &kp W   &kp F   &kp P   &kp B   &kp J   &kp L   &kp U     &kp Y   &kp SEMI  NONE
#define LR_DEF_MID ESC_MEH    HML_A HML_R   HML_S   HML_T   &kp G   &kp M   HMR_N   HMR_E     HMR_I   HMR_O     &kp SQT
#define LR_DEF_LOW &magic_sft &kp Z &kp X   &kp C   &kp D   &kp V   &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH SFT_ENT
#define LR_DEF_BOT NONE       NONE  NONE    CMD_TAB SPC_NUM ESC_SYM NAV_KEY SFT_BSP &kp ENTER NONE    NONE      NONE

#define LR_NUM_TOP ___       &kp F1  &kp F2  &kp F3  &kp F4  &kp  F5  &kp F6  &kp N7 &kp N8 &kp N9  &kp COLON ___
#define LR_NUM_MID ___       &kp F7  &kp F8  &kp F9  &kp F10 &kp F11  &kp F12 &kp N4 &kp N5 &kp N6  &kp N0    &kp PLUS
#define LR_NUM_LOW &num_word ___     ___     ___     ___      ___     ___     &kp N1 &kp N2 &kp N3  &kp SLASH &kp ENTER
#define LR_NUM_BOT ___       ___     ___     ___     ___     ___      ___     &kp N0 ___    &kp DOT ___       ___


#define LR_SYM_TOP ___ &kp EXCL &kp AT    &kp HASH  &kp STAR  &kp GRAVE  NONE &kp DQT &kp LPAR &kp RPAR ___       ___
#define LR_SYM_MID ___ &kp AMPS &kp UNDER &kp MINUS &kp MINUS &kp EQUAL  NONE &kp LT  &kp LBKT &kp RBKT &kp GT    ___
#define LR_SYM_LOW ___ &kp BSLH &kp DLLR  &kp PRCNT &kp CARET &caps_word NONE &kp SQT &kp LBRC &kp RBRC &kp SLASH ___  
#define LR_SYM_BOT ___ ___      ___       &kp TAB   &kp SPACE ___        ___  ___     ___      ___      ___       ___     


#define LR_NAV_TOP ___ &kp F1     &kp F2         &kp F3       &kp F4     &kp F5    &kp F6   &kp HOME  &kp PG_DN &kp PG_UP &kp END   ___ 
#define LR_NAV_MID ___ &kp LCTRL  &kp LALT       &kp LCMD     &kp LSHFT  NONE      NONE     &kp LEFT  &kp DOWN  &kp UP    &kp RIGHT ___
#define LR_NAV_LOW ___ &kp C_PREV &kp C_VOL_DN   &kp C_VOL_UP &kp C_NEXT &kp C_PP  NONE     BACK      ZOOM_OUT  ZOOM_IN   FORWARD   ___
#define LR_NAV_BOT ___ ___        ___            &kp TAB      &kp SPACE  ___       ___      APPLE_FN  DICTATION ___       ___       ___


#define LR_PTR_TOP ___ EXIT      EXIT     EXIT     EXIT      EXIT         EXIT    U_WH_L  U_WH_D  U_WH_U  U_WH_R EXIT
#define LR_PTR_MID ___ &kp LCTRL &kp LALT &kp LCMD &kp LSHFT &kp F12      U_MS_B1 U_MS_L  U_MS_D  U_MS_U  U_MS_R EXIT
#define LR_PTR_LOW ___ EXIT      EXIT     EXIT     EXIT      EXIT         EXIT    U_MS_B1 U_MS_B2 EXIT    EXIT   EXIT
#define LR_PTR_BOT ___ ___       ___      EXIT     EXIT      EXIT U_MS_B1 U_MS_B2 U_MS_B3 ___     ___    ___        
