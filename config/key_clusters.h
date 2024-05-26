// blanks
//
#define TRAN_5 ___ ___ ___ ___ ___ 
#define TRAN_4 ___ ___ ___ ___ 
#define TRAN_3 ___ ___ ___  
#define NONE_5 NONE NONE NONE NONE NONE 
#define NONE_4 NONE NONE NONE NONE 
#define NONE_3 NONE NONE NONE 
#define TRAN_12 ___ TRAN_5 TRAN_5 ___ 

#define NONE_10 NONE_5 NONE_5
#define NONE_12 NONE NONE_5 NONE_5 NONE
#define NONE_18 NONE NONE_5 NONE_3 NONE_3 NONE_5 NONE
#define NONE_16 NONE_5 NONE_3 NONE_3 NONE_5


#define L_MODS  &kp LCTRL &kp LALT &kp LCMD  &kp LSHFT  
#define R_MODS  &kp LSHFT &kp LCMD &kp LALT  &kp LCTRL 

#define L_NUM &kp N1 &kp N2 &kp N3 &kp N4 &kp N5 
#define R_NUM &kp N6 &kp N7 &kp N8 &kp N9 &kp N0

#define L_FUN &kp F1 &kp F2 &kp F3 &kp F4 &kp F5 
#define R_FUN &kp F6 &kp F7 &kp F8 &kp F9 &kp F10 

// default layer - Colemak-DH

#define L_DEF_U &kp Q  &kp W  &kp F   &kp P   &kp B   
#define L_DEF_H HML4_A HML3_R HML2_S  HML1_T  &kp G   
#define L_DEF_D &kp Z  &kp X  &kp C   &kp D   &kp V   

#define R_DEF_U &kp J   &kp L   &kp U     &kp Y   &kp SCLN
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

//  `    -    =    <    (       )    >         +    ,
//  1    2    3    4    5       6    7    8    9    0
//  ~    _    \    {    [       ]    }    /    :    .   

#define L_NUM_U &kp GRAVE &kp UNDER &kp EQUAL &kp LT &kp LPAR 
#define L_NUM_H L_NUM 
#define L_NUM_D &kp TILDE &kp MINUS &kp BSLH &kp LBRC &kp LBKT

#define R_NUM_U &kp RPAR &kp GT &kp PIPE &kp PLUS &kp COMMA 
#define R_NUM_H R_NUM
#define R_NUM_D &kp RBKT &kp RBRC &kp SLASH &kp COLON &kp DOT 

/* FUN */

#define L_FUN_U NONE_5 
#define L_FUN_H &kp F1  &kp F2  &kp F3  &kp F4  &kp F5 
#define L_FUN_D &kp F11 &kp F12 &kp F13 &kp F14 &kp F15


#define R_FUN_U NONE_5 
#define R_FUN_H &kp F6  &kp F7  &kp F8  &kp F9  &kp F10 
#define R_FUN_D &kp F16 &kp F17 &kp F18 &kp F19 &kp F20 

/* NAV */

// #define L_NAV_U &kp F1    &kp F2   &kp F3    &kp F4    &kp F5  
// #define L_NAV_H &kp LCTRL &kp LALT &kp LCMD  &kp LSHFT NONE    
// #define L_NAV_D &kp F6    &kp F7    &kp F8   &kp F9    &kp F10   

// #define R_NAV_U NONE      &kp HOME &kp PG_DN &kp PG_UP &kp END  
// #define R_NAV_H NONE      &kp LEFT &kp DOWN  &kp UP    &kp RIGHT
// #define R_NAV_D NONE      BACK     ZOOM_OUT  ZOOM_IN   FORWARD  


#define L_NAV_U NONE_5 
#define L_NAV_H L_MODS NONE 
#define L_NAV_D NONE_5

#define R_NAV_U NONE &kp HOME &kp PG_DN &kp PG_UP &kp END  
#define R_NAV_H NONE &kp LEFT &kp DOWN  &kp UP    &kp RIGHT
#define R_NAV_D NONE BACK     ZOOM_OUT  ZOOM_IN   FORWARD  

/* PTR */


// #define L_PTR_U &kp F11   &kp F12  &kp F13   &kp F14   &kp F15  
// #define L_PTR_H &kp LCTRL &kp LALT &kp LCMD  &kp LSHFT &kp F12 
// #define L_PTR_D &kp F16   &kp F17  &kp F18   &kp F19   &kp F20  

// #define R_PTR_U PTR_ZERO U_WH_L  U_WH_D  U_WH_U  U_WH_R 
// #define R_PTR_H U_MS_B1  U_MS_L  U_MS_D  U_MS_U  U_MS_R 
// #define R_PTR_D PTR_CNTR U_MS_B1 U_MS_B2 U_MS_B3 PTR_CNTR


#define L_PTR_U NONE_5 
#define L_PTR_H L_MODS NONE 
#define L_PTR_D NONE_5

#define R_PTR_U PTR_ZERO U_WH_L  U_WH_D  U_WH_U  U_WH_R 
#define R_PTR_H U_MS_B1  U_MS_L  U_MS_D  U_MS_U  U_MS_R 
#define R_PTR_D PTR_CNTR U_MS_B1 U_MS_B2 U_MS_B3 PTR_CNTR

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



/* Glove80 SYS layer */

#define L_SYS_U &rgb_ug RGB_SPI  &rgb_ug RGB_SAI  &rgb_ug RGB_HUI  &rgb_ug RGB_BRI  &rgb_ug RGB_TOG 
#define L_SYS_H &rgb_ug RGB_SPD  &rgb_ug RGB_SAD  &rgb_ug RGB_HUD  &rgb_ug RGB_BRD  &rgb_ug RGB_EFF 
#define L_SYS_D NONE_5

#define R_SYS_U NONE_5
#define R_SYS_H NONE_5
#define R_SYS_D NONE_5

#define SYS_U L_SYS_U R_SYS_U
#define SYS_H L_SYS_H R_SYS_H
#define SYS_D L_SYS_D R_SYS_D

/* REC - window management */ 
// #define L_REC_U ___ ___ ___ ___ ___ 
// #define L_REC_H ___ ___ ___ ___ ___ 
// #define L_REC_D ___ ___ ___ ___ ___ 

// #define R_REC_U ___ ___ ___ ___ ___ 
// #define R_REC_H ___ ___ ___ ___ ___ 
// #define R_REC_D ___ ___ ___ ___ ___ 

#define L_REC_U &hyper F1  &hyper F2  &hyper F3  &hyper F4  &hyper F5  
#define L_REC_H &hyper F6  &hyper F7  &hyper F8  &hyper F9  &hyper F10 
#define L_REC_D &hyper F11 &hyper F12 &hyper F13 &hyper F14 &hyper F15

#define R_REC_U ___ &hyper F16 &hyper F17 &hyper F18 ___  
#define R_REC_H ___ &hyper F19 &hyper F20 &hyper F21 ___
#define R_REC_D ___ &hyper F22 &hyper F23 &hyper F24 ___ 

#define REC_U L_REC_U R_REC_U
#define REC_H L_REC_H R_REC_H
#define REC_D L_REC_D R_REC_D

