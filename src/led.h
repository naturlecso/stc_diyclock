// LED functions for 4-digit seven segment led

#include <stdint.h>

#define LED_BLANK   10

void filldisplay(uint8_t dbuf[4], uint8_t pos, uint8_t val, __bit dp);