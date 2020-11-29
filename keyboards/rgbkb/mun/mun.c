#include "mun.h"
#include "touch_encoder.h"

void keyboard_post_init_kb(void)
{
    touch_encoder_init();
    keyboard_post_init_user();
}

void matrix_scan_kb(void)
{
    touch_encoder_update();
    matrix_scan_user();
}
