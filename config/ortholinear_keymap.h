#define __BLANK_ROW__  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___ 

#define LR_DEF_TOP &kp Q &kp W   &kp F   &kp P   &kp B   NONE NONE &kp J   &kp L   &kp U     &kp Y   &kp SEMI
#define LR_DEF_MID HML_A HML_R   HML_S   HML_T   &kp G   NONE NONE &kp M   HMR_N   HMR_E     HMR_I   HMR_O     
#define LR_DEF_LOW &kp Z &kp X   &kp C   &kp D   &kp V   NONE NONE &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH 
#define LR_DEF_BOT NONE  NONE    CMD_TAB SPC_NUM ESC_PTR NONE NONE NAV_KEY SFT_BSP &kp ENTER NONE    NONE   

#define LR_NUM_TOP &kp EXCL &kp AT   &kp HASH  &kp UNDER NONE NONE &kp GRAVE  &kp TILDE  &kp N7 &kp N8  &kp N9  &kp COLON 
#define LR_NUM_MID &kp DOT  &kp AMPS &kp STAR  &kp MINUS NONE NONE &kp EQUAL  &kp GT     &kp N4 &kp N5  &kp N6  &kp N0    
#define LR_NUM_LOW &kp BSLH &kp DLLR &kp PRCNT &kp CARET NONE NONE &kp LBKT   &kp RBKT   &kp N1 &kp N2  &kp N3  &kp SLASH 
#define LR_NUM_BOT ___      ___      ___       ___       ___        &kp N0     ___    &kp DOT ___     ___       

#define LR_NAV_TOP &kp F1    &kp F2   &kp F3   &kp F4    &kp F5  NONE NONE &kp F6   &kp HOME &kp PG_DN &kp PG_UP &kp END  
#define LR_NAV_MID &kp LCTRL &kp LALT &kp LCMD &kp LSHFT NONE    NONE NONE NONE     &kp LEFT &kp DOWN  &kp UP    &kp RIGHT
#define LR_NAV_LOW &kp F7    &kp F8   &kp F9   &kp F10   &kp F11 NONE NONE &kp F12  BACK      ZOOM_OUT ZOOM_IN   FORWARD  
#define LR_NAV_BOT ___       ___      &kp TAB  &kp SPACE ___     NONE NONE ___      APPLE_FN DICTATION ___       ___      

#define LR_PTR_TOP EXIT      EXIT     EXIT     EXIT      EXIT         NONE NONE EXIT    U_WH_L  U_WH_D  U_WH_U  U_WH_R 
#define LR_PTR_MID &kp LCTRL &kp LALT &kp LCMD &kp LSHFT &kp F12      NONE NONE U_MS_B1 U_MS_L  U_MS_D  U_MS_U  U_MS_R 
#define LR_PTR_LOW EXIT      EXIT     EXIT     EXIT      EXIT         NONE NONE EXIT    U_MS_B1 U_MS_B2 U_MS_B3 EXIT   
#define LR_PTR_BOT ___       ___      EXIT     EXIT      EXIT U_MS_B1 NONE NONE U_MS_B2 U_MS_B3 ___     ___    

#define LR_BLANK_TOP ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
#define LR_BLANK_MID ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
#define LR_BLANK_LOW ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
#define LR_BLANK_BOT ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 

// #define LR_DEF_TOP &kp GRAVE  &kp Q &kp W   &kp F   &kp P   &kp B   &kp J   &kp L   &kp U     &kp Y   &kp SEMI  NONE
// #define LR_DEF_MID ESC_MEH    HML_A HML_R   HML_S   HML_T   &kp G   &kp M   HMR_N   HMR_E     HMR_I   HMR_O     &kp SQT
// #define LR_DEF_LOW &magic_sft &kp Z &kp X   &kp C   &kp D   &kp V   &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH SFT_ENT
// #define LR_DEF_BOT NONE       NONE  NONE    CMD_TAB SPC_NUM ESC_PTR NAV_KEY SFT_BSP &kp ENTER NONE    NONE      NONE

// #define LR_NUM_TOP ___        &kp EXCL &kp AT   &kp HASH  &kp UNDER &kp GRAVE  &kp TILDE  &kp N7 &kp N8  &kp N9  &kp COLON ___
// #define LR_NUM_MID &caps_word &kp DOT  &kp AMPS &kp STAR  &kp MINUS &kp EQUAL  &kp GT     &kp N4 &kp N5  &kp N6  &kp N0    &kp PLUS
// #define LR_NUM_LOW &num_word  &kp BSLH &kp DLLR &kp PRCNT &kp CARET &kp LBKT   &kp RBKT   &kp N1 &kp N2  &kp N3  &kp SLASH &kp ENTER
// #define LR_NUM_BOT ___        ___      ___      ___       ___       ___        &kp N0     ___    &kp DOT ___     ___       ___

// #define LR_NAV_TOP ___ &kp F1    &kp F2   &kp F3   &kp F4    &kp F5  &kp F6   &kp HOME &kp PG_DN &kp PG_UP &kp END   ___ 
// #define LR_NAV_MID ___ &kp LCTRL &kp LALT &kp LCMD &kp LSHFT NONE    NONE     &kp LEFT &kp DOWN  &kp UP    &kp RIGHT ___
// #define LR_NAV_LOW ___ &kp F7    &kp F8   &kp F9   &kp F10   &kp F11 &kp F12  BACK      ZOOM_OUT ZOOM_IN   FORWARD   ___
// #define LR_NAV_BOT ___ ___       ___      &kp TAB  &kp SPACE ___     ___      APPLE_FN DICTATION ___       ___       ___

// #define LR_PTR_TOP ___ EXIT      EXIT     EXIT     EXIT      EXIT         EXIT    U_WH_L  U_WH_D  U_WH_U  U_WH_R EXIT
// #define LR_PTR_MID ___ &kp LCTRL &kp LALT &kp LCMD &kp LSHFT &kp F12      U_MS_B1 U_MS_L  U_MS_D  U_MS_U  U_MS_R EXIT
// #define LR_PTR_LOW ___ EXIT      EXIT     EXIT     EXIT      EXIT         EXIT    U_MS_B1 U_MS_B2 U_MS_B3 EXIT   EXIT
// #define LR_PTR_BOT ___ ___       ___      EXIT     EXIT      EXIT U_MS_B1 U_MS_B2 U_MS_B3 ___     ___    ___        

// #define LR_BLANK_TOP ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
// #define LR_BLANK_MID ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
// #define LR_BLANK_LOW ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
// #define LR_BLANK_BOT ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
