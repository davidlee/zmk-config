#define __BLANK_ROW__  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___  ___ 

#define _DEF_TOP &kp Q  &kp W  &kp F   &kp P   &kp B   NONE  NONE &kp J   &kp L   &kp U     &kp Y   &kp SQT
#define _DEF_MID HML4_A HML3_R HML2_S  HML1_T  &kp G   NONE  NONE &kp M   HMR1_N  HMR2_E    HMR3_I  HMR4_O     
#define _DEF_LOW &kp Z  &kp X  &kp C   &kp D   &kp V   NONE  NONE &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH 
#define _DEF_BOT EXIT   TO_CAN CMD_TAB SPC_NUM ESC_PTR NONE  NONE NAV_KEY SFT_BSP &kp ENTER TO_STD  TO_STD

/* CANARY */
  
// w l y p b z f o u '
// c r s t g m n e i a
// q j v d k x h / , .


// home row mods
#define HML4_C &hml LCTRL C
#define HML3_R &hml LALT  R
#define HMR4_A &hmr LCTRL A

#define _CAN_TOP &kp W  &kp L  &kp Y   &kp P   &kp B   NONE  NONE &kp Z   &kp F   &kp O     &kp U     &kp SQT
#define _CAN_MID HML4_C HML3_R HML2_S  HML1_T  &kp G   NONE  NONE &kp M   HMR1_N  HMR2_E    HMR3_I    HMR4_A   
#define _CAN_LOW &kp Q  &kp J  &kp V   &kp D   &kp K   NONE  NONE &kp X   &kp H   &kp SLASH &kp COMMA &kp DOT


/* APTv3 */

// w g d f b  q l u o y
// r s t h k  j n e a i ;
// c m p v x  z , . ' /

// #define HML4_R &hml LCTRL R
// #define HML3_S &hml LALT  S
// #define HML2_T &hml LCMD  T
// #define HML1_H &hml LSHFT H

// #define HMR3_A &hmr LALT  A
// #define HMR4_I &hmr LCTRL I

// #define _APT_TOP &kp W  &kp G  &kp D   &kp F   &kp B   NONE  NONE &kp Q   &kp L     &kp U     &kp O   &kp Y
// #define _APT_MID HML4_R HML3_S HML2_T  HML1_H  &kp K   NONE  NONE &kp J   HMR1_N    HMR2_E    HMR3_A  HMR4_I
// #define _APT_LOW &kp C  &kp M  &kp P   &kp V   &kp X   NONE  NONE &kp Z   &kp COMMA &kp DOT   &kp SQT &kp SLASH  


/* NERPS

x l d p v  z k o u ;
n r t s g  y h e i a
j m c w q  b f ' , .
*/


// #define HML4_N &hml LCTRL N
// #define HML3_R &hml LALT  R 
// #define HML2_T &hml LCMD  T
// #define HML1_S &hml LSHFT S

// #define HMR1_H &hmr LSHFT H
// #define HMR2_E &hmr LCMD  E
// #define HMR3_I &hmr LALT  I
// #define HMR4_A &hmr LCTRL A

// #define _NRP_TOP &kp X  &kp L  &kp D   &kp P   &kp V   NONE  NONE &kp Z   &kp K   &kp O     &kp U     &kp SEMI    
// #define _NRP_MID HML4_N HML3_R HML2_T  HML1_S  &kp G   NONE  NONE &kp Y   HMR1_H  HMR2_E    HMR3_I    HMR4_A 
// #define _NRP_LOW &kp J  &kp M  &kp C   &kp W   &kp Q   NONE  NONE &kp B   &kp F   &kp SQT   &kp COMMA &kp DOT

/* STURDY 

v m l c p  x f o u j 
s t r d y  . n a e i 
z k q g w  b h ' ; ,

*/

#define HML4_S &hml LCTRL S
#define HML3_T &hml LALT  T 
#define HML2_R &hml LCMD  R
#define HML1_D &hml LSHFT D

// #define HML1_N &hmr LSHFT N
#define HMR2_A &hmr LCMD  A
#define HMR3_E &hmr LALT  E
#define HMR4_I &hmr LCTRL I

#define _STD_TOP &kp V   &kp M   &kp L   &kp C   &kp P  NONE NONE  &kp X   &kp F   &kp O   &kp U   &kp J
#define _STD_MID HML4_S  HML3_T  HML2_R  HML1_D  &kp Y  NONE NONE  &kp DOT HMR1_N  HMR2_A  HMR3_E  HMR4_I  
#define _STD_LOW &kp Z   &kp K   &kp Q   &kp G   &kp W  NONE NONE  &kp B   &kp H   &kp SQT &kp SEMI &kp COMMA

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

// #define _BLANK_TOP ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
// #define _BLANK_MID ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
// #define _BLANK_LOW ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
// #define _BLANK_BOT ___ ___ ___ ___ ___ ___  ___ ___ ___ ___ ___ ___ 
