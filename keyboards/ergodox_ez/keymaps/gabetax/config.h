/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 175

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 60

#define FIRMWARE_VERSION u8"Qa34z/QmV4z"
#define RGB_MATRIX_STARTUP_SPD 60

// https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#permissive-hold
// Prevent "zc" when I try to ^C
#define PERMISSIVE_HOLD
