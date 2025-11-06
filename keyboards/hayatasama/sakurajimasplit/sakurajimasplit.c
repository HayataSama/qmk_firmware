#include "sakurajimasplit.h"
#include "keyboard.h"
#include "quantum.h"

void keyboard_pre_init_kb() {
    // Disable pull-down resistors on UCPDx_CCn pins
    SYSCFG->CFGR1 |= SYSCFG_CFGR1_UCPD1_STROBE | SYSCFG_CFGR1_UCPD2_STROBE;

    keyboard_pre_init_user();
}
