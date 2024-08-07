/* KEY CLUSTERS FOR COLUMN STAGGER / ORTHOLINEAR LAYOUTS */

// FIXME !! 
// make these work for Glove80
//

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5 
#define THUMBS LH3 LH2 LH1 LH0 RH0 RH1 RH2 RH3      

#define GAL_TOP &kp MINUS L_GAL_U  R_GAL_U BSL_HYP
#define GAL_MID ESC_MEH   L_GAL_H  R_GAL_H SLS_MEH
#define GAL_LOW GRIFT     L_GAL_D  R_GAL_D &kp EQUAL
#define GAL_BOT EXIT TO_CMK NONE   CMD_TAB SPC_NUM OPT_ESC     NAV_KEY SFT_BSP PTR_ENT   NONE TO_GAM EXIT

#define CMK_TOP &kp MINUS L_CMK_U  R_CMK_U NONE
#define CMK_MID ESC_MEH   L_CMK_H  R_CMK_H SQT_MEH
#define CMK_LOW GRIFT     L_CMK_D  R_CMK_D NONE
#define CMK_BOT GAL_BOT 

#define GAM_TOP NONE L_GAM_U  R_GAM_U NONE
#define GAM_MID NONE L_GAM_H  R_GAM_H NONE
#define GAM_LOW NONE L_GAM_D  R_GAM_D NONE
#define GAM_BOT GAL_BOT

#define NUM_TOP NONE L_NUM_U  R_NUM_U NONE
#define NUM_MID NONE L_NUM_H  R_NUM_H NONE
#define NUM_LOW NONE L_NUM_D  R_NUM_D NONE
#define NUM_BOT ___ ___ ___ &kp DOT ___ ___    &kp DOT ___ ___  ___ ___ ___    

#define NAV_TOP NONE L_NAV_U  R_NAV_U NONE
#define NAV_MID NONE L_NAV_H  R_NAV_H NONE
#define NAV_LOW NONE L_NAV_D  R_NAV_D NONE
#define NAV_BOT ___ ___ ___  &kp TAB &kp SPACE APPLE_FN     DICTATION ___ ___      ___ ___ ___      

#define PTR_TOP NONE L_PTR_U  R_PTR_U NONE
#define PTR_MID NONE L_PTR_H  R_PTR_H NONE
#define PTR_LOW NONE L_PTR_D  R_PTR_D NONE
#define PTR_BOT ___ ___ ___ EXIT EXIT EXIT  U_MS_B1  U_MS_B2 U_MS_B3  ___ ___ ___
