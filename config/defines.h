/* layer IDs */ 

#define GAL 0 // default = gallium
#define CMK 1 // colemak
#define NUM 2 // number 
#define GAM 3 // qwerty 
#define NAV 4 // navigation
#define PTR 5 // pointer
#define SYS 6 // system
#define REC 7 // rectangle WM
#define FUN 8 // function keys 
#define MOD 9 // sticky mods

#undef COMBO_TERM 
#define COMBO_TERM 15
#define QUICK_TAP_MS 175
#define TAPPING_TERM_MS 220
#define PRIOR_IDLE_MS 150

#undef COMBO_HOOK
#define COMBO_HOOK require-prior-idle-ms = <20>;
