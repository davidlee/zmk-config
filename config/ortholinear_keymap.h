#define TRANS ___ TRAN_5 TRAN_5 ___ 

// default layer - Colemak-DH

#define L_DEF_U &kp Q  &kp W  &kp F   &kp P   &kp B   
#define L_DEF_H HML4_A HML3_R HML2_S  HML1_T  &kp G   
#define L_DEF_D &kp Z  &kp X  &kp C   &kp D   &kp V   

#define R_DEF_U &kp J   &kp L   &kp U     &kp Y   &kp SQT
#define R_DEF_H &kp M   HMR1_N  HMR2_E    HMR3_I  HMR4_O     
#define R_DEF_D &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH 

#define DEF_TOP L_DEF_U NONE NONE R_DEF_U
#define DEF_MID L_DEF_H NONE NONE R_DEF_H
#define DEF_LOW L_DEF_D NONE NONE R_DEF_D
#define DEF_BOT EXIT TO_GAL  CMD_TAB SPC_NUM ESC_PTR  NONE NONE  NAV_KEY SFT_BSP &kp ENTER  TO_GAL TO_GAL

/* GALLIUM 

B L D C V   Z Y O U ,
N R T S G   P H A E I
Q X M W J   K F ' ; .

*/

#define L_GAL_U &kp B  &kp L  &kp D   &kp C   &kp V 
#define L_GAL_H HML4_N HML3_R HML2_T  HML1_S  &kp G 
#define L_GAL_D &kp Q  &kp X  &kp M   &kp W   &kp J 

#define R_GAL_U &kp Z &kp Y  &kp O   &kp U    &kp COMMA
#define R_GAL_H &kp P HMR1_H HMR2_A  HMR3_E   HMR4_I   
#define R_GAL_D &kp K &kp F  &kp SQT &kp SEMI &kp DOT

#define GAL_TOP L_GAL_U NONE NONE R_GAL_U
#define GAL_MID L_GAL_H NONE NONE R_GAL_H
#define GAL_LOW L_GAL_D NONE NONE R_GAL_D

/* NUM */

#define L_NUM_U &kp EXCL  &kp AT   &kp HASH  &kp UNDER &kp TILDE 
#define L_NUM_H &kp GRAVE &kp AMPS &kp STAR  &kp MINUS &kp EQUAL 
#define L_NUM_D &kp BSLH  &kp DLLR &kp PRCNT &kp CARET &kp LBKT  

#define R_NUM_U &kp PIPE &kp N7 &kp N8  &kp N9  &kp COLON 
#define R_NUM_H &kp GT   &kp N4 &kp N5  &kp N6  &kp N0    
#define R_NUM_D &kp RBKT &kp N1 &kp N2  &kp N3  &kp SLASH 

#define NUM_TOP L_NUM_U NONE NONE R_NUM_U
#define NUM_MID L_NUM_H NONE NONE R_NUM_H
#define NUM_LOW L_NUM_D NONE NONE R_NUM_D
#define NUM_BOT ___ ___ &kp DOT ___ ___  ___ ___  &kp DOT ___ ___  ___ ___     

/* NAV */

#define L_NAV_U &kp F1    &kp F2   &kp F3    &kp F4    &kp F5  
#define L_NAV_H &kp LCTRL &kp LALT &kp LCMD  &kp LSHFT NONE    
#define L_NAV_D &kp F7    &kp F8   &kp F9    &kp F10   &kp F11 

#define R_NAV_U &kp F6    &kp HOME &kp PG_DN &kp PG_UP &kp END  
#define R_NAV_H NONE      &kp LEFT &kp DOWN  &kp UP    &kp RIGHT
#define R_NAV_D &kp F12   BACK     ZOOM_OUT  ZOOM_IN   FORWARD  

#define NAV_TOP L_NAV_U NONE NONE R_NAV_U
#define NAV_MID L_NAV_H NONE NONE R_NAV_H
#define NAV_LOW L_NAV_D NONE NONE R_NAV_D
#define NAV_BOT ___ ___  &kp TAB &kp SPACE ___  NONE NONE  ___ APPLE_FN DICTATION  ___ ___      

/* PTR */

#define L_PTR_U EXIT      EXIT     EXIT     EXIT      EXIT    
#define L_PTR_H &kp LCTRL &kp LALT &kp LCMD &kp LSHFT &kp F12 
#define L_PTR_D EXIT      EXIT     EXIT     EXIT      EXIT    

#define R_PTR_U EXIT    U_WH_L  U_WH_D  U_WH_U  U_WH_R 
#define R_PTR_H U_MS_B1 U_MS_L  U_MS_D  U_MS_U  U_MS_R 
#define R_PTR_D EXIT    U_MS_B1 U_MS_B2 U_MS_B3 EXIT   

#define PTR_TOP L_PTR_U NONE NONE R_PTR_U
#define PTR_MID L_PTR_H NONE NONE R_PTR_H
#define PTR_LOW L_PTR_D NONE NONE R_PTR_D
#define PTR_BOT ___ ___  EXIT EXIT EXIT  U_MS_B1 NONE  NONE U_MS_B2 U_MS_B3  ___ ___    
