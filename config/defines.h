/* layer IDs */ 

#define DEF 0 // default = colemak
#define GAL 1 // gallium
#define NUM 2 // number 
#define NAV 3 // navigation
#define PTR 4 // pointer
#define SYS 5 // system

/* 
    key aliases 
*/

#define ___ &trans
#define NONE &none
   
// layers
#define EXIT &to DEF
#define TO_GAL &to GAL

// for application shortcuts in Raycast
#define MEH LC(LA(LSHFT))

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

#define VOL_DN &kp C_VOL_DN
#define VOL_UP &kp C_VOL_UP
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

#undef COMBO_TERM 
#define COMBO_TERM 15

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 
#define THUMBS LH3 LH2 LH1 RH1 RH2 RH3      

// combos
#define EMDASH &kp LS(LA(MINUS)) 
#define BSWORD &kp LA(BSPC)
#define ENT_MEH &mt MEH ENTER

