// blanks
//
#define TRAN_5 ___ ___ ___ ___ ___ 
#define TRAN_3 ___ ___ ___  
#define NONE_5 NONE NONE NONE NONE NONE 
#define NONE_4 NONE NONE NONE NONE 
#define NONE_3 NONE NONE NONE 
#define TRAN_12 ___ TRAN_5 TRAN_5 ___ 

// default layer - Colemak-DH

#define L_DEF_U &kp Q  &kp W  &kp F   &kp P   &kp B   
#define L_DEF_H HML4_A HML3_R HML2_S  HML1_T  &kp G   
#define L_DEF_D &kp Z  &kp X  &kp C   &kp D   &kp V   

#define R_DEF_U &kp J   &kp L   &kp U     &kp Y   &kp SQT
#define R_DEF_H &kp M   HMR1_N  HMR2_E    HMR3_I  HMR4_O     
#define R_DEF_D &kp K   &kp H   &kp COMMA &kp DOT &kp SLASH 

/* GALLIUM (alt keyb discord cmini version)

B L D C V   J Y O U ,
N R T S G   P H A E I
X Q M W Z   K F ' ; .

*/

#define L_GAL_U &kp B  &kp L  &kp D   &kp C   &kp V 
#define L_GAL_H HML4_N HML3_R HML2_T  HML1_S  &kp G 
#define L_GAL_D &kp X  &kp Q  &kp M   &kp W   &kp Z 

#define R_GAL_U &kp J &kp Y  &kp O   &kp U    &kp COMMA
#define R_GAL_H &kp P HMR1_H HMR2_A  HMR3_E   HMR4_I   
#define R_GAL_D &kp K &kp F  &kp SQT &kp SEMI &kp DOT

/* NUM */

#define L_NUM_U &kp EXCL  &kp AT   &kp HASH  &kp UNDER &kp TILDE 
#define L_NUM_H &kp GRAVE &kp AMPS &kp STAR  &kp MINUS &kp EQUAL 
#define L_NUM_D &kp BSLH  &kp DLLR &kp PRCNT &kp CARET &kp LBKT  

#define R_NUM_U &kp PIPE &kp N7 &kp N8  &kp N9  &kp COLON 
#define R_NUM_H &kp GT   &kp N4 &kp N5  &kp N6  &kp N0    
#define R_NUM_D &kp RBKT &kp N1 &kp N2  &kp N3  &kp SLASH 

/* NAV */

#define L_NAV_U &kp F1    &kp F2   &kp F3    &kp F4    &kp F5  
#define L_NAV_H &kp LCTRL &kp LALT &kp LCMD  &kp LSHFT NONE    
#define L_NAV_D &kp F7    &kp F8   &kp F9    &kp F10   &kp F11 

#define R_NAV_U &kp F6    &kp HOME &kp PG_DN &kp PG_UP &kp END  
#define R_NAV_H NONE      &kp LEFT &kp DOWN  &kp UP    &kp RIGHT
#define R_NAV_D &kp F12   BACK     ZOOM_OUT  ZOOM_IN   FORWARD  

/* PTR */

#define L_PTR_U EXIT      EXIT     EXIT     EXIT      EXIT    
#define L_PTR_H &kp LCTRL &kp LALT &kp LCMD &kp LSHFT &kp F12 
#define L_PTR_D EXIT      EXIT     EXIT     EXIT      EXIT    

#define R_PTR_U EXIT    U_WH_L  U_WH_D  U_WH_U  U_WH_R 
#define R_PTR_H U_MS_B1 U_MS_L  U_MS_D  U_MS_U  U_MS_R 
#define R_PTR_D EXIT    U_MS_B1 U_MS_B2 U_MS_B3 EXIT   

/* GAME */ 

#define L_GAM_U &kp Q &kp W &kp E &kp R &kp T 
#define L_GAM_H &kp A &kp S &kp D &kp F &kp G 
#define L_GAM_D &kp Z &kp X &kp C &kp V &kp B

#define R_GAM_U &kp Y &kp U &kp I     &kp O   &kp P 
#define R_GAM_H &kp H &kp J &kp K     &kp L   &kp SEMI
#define R_GAM_D &kp N &kp M &kp COMMA &kp DOT &kp SLASH

/* Glove 80 */

// Bottom Row 
#define L_DEF_BOT &kp HOME  &kp LEFT &kp RIGHT &kp END
#define R_DEF_BOT &kp LBKT  &kp DOWN &kp UP    &kp RBKT

// Function Keys
#define L_FUN &kp F1 &kp F2 &kp F3 &kp F4 &kp F5 
#define R_FUN &kp F6 &kp F7 &kp F8 &kp F9 &kp F10 

// Number Row
#define L_NUM &kp N1 &kp N2 &kp N3 &kp N4 &kp N5 
#define R_NUM &kp N6 &kp N7 &kp N8 &kp N9 &kp N0

/* Glove80 SYS layer */

#define SYS_RGB_U &rgb_ug RGB_SPI  &rgb_ug RGB_SAI  &rgb_ug RGB_HUI  &rgb_ug RGB_BRI  &rgb_ug RGB_TOG 
#define SYS_RGB_D &rgb_ug RGB_SPD  &rgb_ug RGB_SAD  &rgb_ug RGB_HUD  &rgb_ug RGB_BRD  &rgb_ug RGB_EFF

#define SYS_BT_U &bt_2 &bt_3 ___          NONE_3
#define SYS_BT_D &bt_0 &bt_1 &out OUT_USB NONE_3
