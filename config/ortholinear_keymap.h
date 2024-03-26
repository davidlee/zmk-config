#define _BLANK ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 

// default layer - Colemak-DH

#define _DEF_TOP &kp Q  &kp W  &kp F   &kp P   &kp B   NONE  NONE &kp J   &kp L   &kp U     &kp Y   &kp SQT
#define _DEF_MID HML4_A HML3_R HML2_S  HML1_T  &kp G   NONE  NONE &kp M   HMR1_N  HMR2_E    HMR3_I  HMR4_O     
#define _DEF_LOW &kp Z  &kp X  &kp C   &kp D   &kp V   NONE  NONE &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH 
#define _DEF_BOT EXIT   TO_GAL CMD_TAB SPC_NUM ESC_PTR NONE  NONE NAV_KEY SFT_BSP &kp ENTER TO_GAL  TO_GAL

/* GALLIUM 

B L D C V   Z Y O U ,
N R T S G   P H A E I
Q X M W J   K F ' ; .

*/

#define _GAL_TOP &kp B  &kp L  &kp D   &kp C   &kp V   NONE  NONE &kp Z   &kp Y  &kp O   &kp U    &kp COMMA
#define _GAL_MID HML4_N HML3_R HML2_T  HML1_S  &kp G   NONE  NONE &kp P   HMR1_H HMR2_A  HMR3_E   HMR4_I   
#define _GAL_LOW &kp Q  &kp X  &kp M   &kp W   &kp J   NONE  NONE &kp K   &kp F  &kp SQT &kp SEMI &kp DOT

/* NUM */

#define _NUM_TOP &kp EXCL  &kp AT   &kp HASH  &kp UNDER &kp TILDE NONE  NONE &kp TILDE  &kp N7 &kp N8  &kp N9  &kp COLON 
#define _NUM_MID &kp GRAVE &kp AMPS &kp STAR  &kp MINUS &kp EQUAL NONE  NONE &kp GT     &kp N4 &kp N5  &kp N6  &kp N0    
#define _NUM_LOW &kp BSLH  &kp DLLR &kp PRCNT &kp CARET &kp LBKT  NONE  NONE &kp RBKT   &kp N1 &kp N2  &kp N3  &kp SLASH 
#define _NUM_BOT ___      ___       &kp DOT   ___       ___       ___   ___  &kp DOT    ___    ___     ___     ___     

/* NAV */

#define _NAV_TOP &kp F1    &kp F2   &kp F3   &kp F4    &kp F5  NONE  NONE &kp F6   &kp HOME &kp PG_DN &kp PG_UP &kp END  
#define _NAV_MID &kp LCTRL &kp LALT &kp LCMD &kp LSHFT NONE    NONE  NONE NONE     &kp LEFT &kp DOWN  &kp UP    &kp RIGHT
#define _NAV_LOW &kp F7    &kp F8   &kp F9   &kp F10   &kp F11 NONE  NONE &kp F12  BACK      ZOOM_OUT ZOOM_IN   FORWARD  
#define _NAV_BOT ___       ___      &kp TAB  &kp SPACE ___     NONE  NONE ___      APPLE_FN DICTATION ___       ___      

/* PTR */

#define _PTR_TOP EXIT      EXIT     EXIT     EXIT      EXIT         NONE  NONE EXIT    U_WH_L  U_WH_D  U_WH_U  U_WH_R 
#define _PTR_MID &kp LCTRL &kp LALT &kp LCMD &kp LSHFT &kp F12      NONE  NONE U_MS_B1 U_MS_L  U_MS_D  U_MS_U  U_MS_R 
#define _PTR_LOW EXIT      EXIT     EXIT     EXIT      EXIT         NONE  NONE EXIT    U_MS_B1 U_MS_B2 U_MS_B3 EXIT   
#define _PTR_BOT ___       ___      EXIT     EXIT      EXIT U_MS_B1 NONE  NONE U_MS_B2 U_MS_B3 ___     ___    
