/* layer IDs */ 

#define GAL 0 // default = gallium
#define CMK 1 // colemak
#define GAM 2 // qwerty 
#define NUM 3 // number 
#define NAV 4 // navigation
#define PTR 5 // pointer
#define SYS 6 // system

#undef COMBO_TERM 
#define COMBO_TERM 25
#define QUICK_TAP_MS 200
#define TAPPING_TERM_MS 220
#define PRIOR_IDLE_MS 175

#undef COMBO_HOOK
#define COMBO_HOOK require-prior-idle-ms = <20>;
