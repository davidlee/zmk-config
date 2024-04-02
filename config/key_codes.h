/* 
    key aliases 
*/

#define ___ &trans
#define NONE &none

   
// layers
#define EXIT   &to DEF
#define TO_DEF &to DEF
#define TO_GAL &to GAL
#define TO_GAM &to GAM

// for custom shortcuts 
#define MEH   LC(LA(LSHFT))
#define HYPER LC(LS(LG(LALT)))

// L thumb
#define CMD_TAB &mt LCMD TAB
#define SPC_NUM &lt NUM SPACE
#define ESC_PTR &lt PTR ESC
// R thumb
#define NAV_KEY &mo NAV 
#define SFT_BSP &th_ht LSHFT BSPC

// LHS
#define ESC_MEH &mt MEH ESC
// RHS
#define SQT_MEH &mt MEH SQT
#define SFT_ENT &mt LSHFT ENTER

 // NAV
#define ZOOM_IN  &kp LG(EQUAL)
#define ZOOM_OUT &kp LG(MINUS)
#define BACK     &kp LG(LBKT)
#define FORWARD  &kp LG(RBKT)

#define VOL_DN   &kp C_VOL_DN
#define VOL_UP   &kp C_VOL_UP
#define TRK_NEXT &kp C_NEXT
#define TRK_PREV &kp C_PREV

// home row mods - Colemak-DH
#define HML4_A &hml LCTRL A
#define HML3_R &hml LALT  R
#define HML2_S &hml LCMD  S
#define HML1_T &hml LSHFT T

#define HMR1_N &hmr LSHFT N
#define HMR2_E &hmr LCMD  E
#define HMR3_I &hmr LALT  I
#define HMR4_O &hmr LCTRL O

// home row mods - Gallium

#define HML4_N &hml LCTRL N
#define HML3_R &hml LALT  R 
#define HML2_T &hml LCMD  T
#define HML1_S &hml LSHFT S


#define HMR1_H &hmr LSHFT H
#define HMR2_A &hmr LCMD  A
#define HMR3_E &hmr LALT  E
#define HMR4_I &hmr LCTRL I

/* karabiner tokens */
#define DICTATION &kp F21
#define APPLE_FN  &kp F24

// combos
#define EMDASH &kp LS(LA(MINUS)) 
#define BSWORD &kp LA(BSPC)
#define ENT_MEH &mt MEH ENTER

/* keycodes for Glove80 side keys, etc */

#define MO_SYS &mo SYS
#define PTR_ENT &lt PTR ENTER
#define SQT_MEH &mt MEH SQT
#define SLS_MEH &mt MEH SLASH
#define BSL_HYP &mt HYPER BSLH
#define TAB_HYP &mt HYPER TAB
#define STATUS &rgb_ug_status_macro


// FIXME only the &magic bit works, not SYS
// #define SYS_STATUS &magic SYS 
// #define SYS_STATUS &lt SYS &rgb_ug_status_macro
