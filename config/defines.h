
/* layer IDs */ 

#define DEF 0  
#define NUM 1
#define NAV 2
#define PTR 3

/* 
    key aliases 
*/

#define ___ &trans
#define NONE &none
   
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

// home row mods
#define HML_A &hml LCTRL A
#define HML_R &hml LALT  R
#define HML_S &hml LCMD  S
#define HML_T &hml LSHFT T

#define HMR_N &hmr LSHFT N
#define HMR_E &hmr LCMD  E
#define HMR_I &hmr LALT  I
#define HMR_O &hmr LCTRL O

/* karabiner tokens */
#define DICTATION &kp F21
#define APPLE_FN  &kp F24


#undef COMBO_TERM 
#define COMBO_TERM 15

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5 
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5 
#define THUMBS LH3 LH2 LH1 RH1 RH2 RH3      

#define EXIT &to DEF

// combos
#define EMDASH &kp LS(LA(MINUS)) 
#define BSWORD &kp LA(BSPC)
#define ENT_MEH &mt MEH ENTER
