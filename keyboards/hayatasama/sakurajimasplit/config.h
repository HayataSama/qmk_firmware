#pragma once

#define MASTER_LEFT // Left half is always master

/* Setup USART for split communication */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_TX_PIN A2
#define SERIAL_USART_RX_PIN A3
#define SERIAL_USART_TX_PAL_MODE 1
#define SERIAL_USART_RX_PAL_MODE 1

/* Split data sync options */
#define FORCED_SYNC_THROTTLE_MS 100
#define SPLIT_MAX_CONNECTION_ERRORS 10
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

/* OLED display */
#define OLED_DISPLAY_CUSTOM
// Display is 128*33 pixels high but because memory is byte oriented,
// 5 bytes (40 pixels) are needed to represent it
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 40
#define OLED_MATRIX_SIZE (OLED_DISPLAY_HEIGHT / 8 * OLED_DISPLAY_WIDTH)
#define OLED_COM_PINS COM_PINS_SEQ
#define OLED_COM_PIN_OFFSET 0
#define OLED_COM_PIN_COUNT 64
#define OLED_SOURCE_MAP \
    {}
#define OLED_TARGET_MAP \
    {}

#define OLED_BLOCK_TYPE uint8_t
#define OLED_BLOCK_COUNT 5

// High brightness with an still image will cause OLED burn-in, be careful!
#define OLED_BRIGHTNESS 64
#define OLED_TIMEOUT 30000
#define OLED_COLUMN_OFFSET 0
#define OLED_DISPLAY_CLOCK 0x70
#define OLED_UPDATE_INTERVAL 50
#define OLED_UPDATE_PROCESS_LIMIT 1
