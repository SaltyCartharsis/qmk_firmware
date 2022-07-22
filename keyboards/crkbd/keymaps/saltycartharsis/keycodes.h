//Custom keycodes for use with saltycartharsis crkbd keymap

//keycode enum
enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    LWENT,
    RSPC
};

//layers enum
enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

//layer controls
#define LWENT LT(LOWER, KC_ENT)
#define RSPC LT(RAISE, KC_SPC)

//media controls
#define MUTE KC_KB_MUTE
#define V_UP KC_KB_VOLUME_UP
#define V_DN KC_KB_VOLUME_DOWN
