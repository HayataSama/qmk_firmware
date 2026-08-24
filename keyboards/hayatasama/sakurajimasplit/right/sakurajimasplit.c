#include "keyboard.h"
#include "quantum.h"
#include "oled_driver.h"

#define OLED_EN_PIN A4

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    // Enable boost regulator on OLED module to generate +12V VCC voltage
    gpio_set_pin_output(OLED_EN_PIN);
    gpio_write_pin_high(OLED_EN_PIN);

    return rotation;
}
