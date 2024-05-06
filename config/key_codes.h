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
#define HYP HYPER 

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

/* karabiner tokens - use non-macos keycodes */
#define DICTATION &kp OPER
#define APPLE_FN  &kp SYSREQ
#define PTR_ZERO  &kp PRIOR
#define PTR_CNTR  &kp PRINTSCREEN

// combos
#define EMDASH &kp LS(LA(MINUS)) 
#define BSWORD &kp LA(BSPC)
#define ENT_MEH &mt MEH ENTER

/* keycodes for Glove80 side keys, etc */

#define MO_SYS &mo SYS
#define MO_REC &mo REC
#define PTR_ENT &lt PTR ENTER
#define SQT_MEH &mt MEH SQT
#define SLS_MEH &mt MEH SLASH
#define BSL_HYP &mt HYPER BSLH
#define TAB_HYP &mt HYPER TAB
#define STATUS &rgb_ug_status_macro
#define MAGIC &magic SYS 

/* Rectangle keybinds */

#define HYP_F1 &kp LC(LA(LG(LS(F1))))
#define HYP_F2 &kp LC(LA(LG(LS(F2))))
#define HYP_F3 &kp LC(LA(LG(LS(F3))))
#define HYP_F4 &kp LC(LA(LG(LS(F4))))
#define HYP_F5 &kp LC(LA(LG(LS(F5))))
#define HYP_F6 &kp LC(LA(LG(LS(F6))))
#define HYP_F7 &kp LC(LA(LG(LS(F7))))
#define HYP_F8 &kp LC(LA(LG(LS(F8))))
#define HYP_F9 &kp LC(LA(LG(LS(F9))))
#define HYP_F10 &kp LC(LA(LG(LS(F10))))
#define HYP_F11 &kp LC(LA(LG(LS(F11))))
#define HYP_F12 &kp LC(LA(LG(LS(F12))))
#define HYP_F13 &kp LC(LA(LG(LS(F13))))
#define HYP_F14 &kp LC(LA(LG(LS(F14))))
#define HYP_F15 &kp LC(LA(LG(LS(F15))))
#define HYP_F16 &kp LC(LA(LG(LS(F16))))
#define HYP_F17 &kp LC(LA(LG(LS(F17))))
#define HYP_F18 &kp LC(LA(LG(LS(F18))))
#define HYP_F19 &kp LC(LA(LG(LS(F19))))
#define HYP_F20 &kp LC(LA(LG(LS(F20))))
#define HYP_F21 &kp LC(LA(LG(LS(F21))))
#define HYP_F22 &kp LC(LA(LG(LS(F22))))
#define HYP_F23 &kp LC(LA(LG(LS(F23))))
#define HYP_F24 &kp LC(LA(LG(LS(F24))))

