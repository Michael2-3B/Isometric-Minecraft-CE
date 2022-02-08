// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t oak_log_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x60,0x60,0x5C,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x60,0x60,0xA3,0xA3,0x60,0x60,0xA2,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x31,0x43,0xB7,0xB7,0x60,0x60,0x43,0x3F,0x60,0x43,0xB7,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x81,0x43,0xB7,0xA6,0x43,0x43,0x43,0x43,0x43,0x60,0x5C,0xA6,0x60,0x43,0x5C,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0xDB,0x43,0xB7,0x3F,0x60,0x60,0x43,0x5C,0xA3,0xA6,0x5C,0x5C,0x43,0x43,0xB7,0x43,0x60,0x43,0x5C,0x04,0x04,0x00,0x00,
 0x00,0x04,0x44,0xB7,0x60,0xA6,0x43,0x60,0x43,0x3F,0x5C,0x43,0xB7,0xA6,0xA6,0x43,0x5C,0x5C,0x60,0x60,0x5C,0x60,0x43,0x43,0x5C,0x04,0x00,
 0x00,0x04,0x04,0x04,0x60,0x5C,0x43,0x60,0x43,0x5C,0x5C,0x43,0x5C,0x5C,0x5C,0x43,0x5C,0x5C,0x60,0x60,0x5C,0x60,0x60,0x04,0x04,0x04,0x00,
 0x00,0x04,0x81,0x81,0x04,0x04,0x43,0x5C,0x60,0x60,0x43,0x5C,0xB7,0xB7,0x5C,0x5C,0x43,0x43,0x5C,0xB7,0x43,0x04,0x04,0x7C,0x3C,0x04,0x00,
 0x00,0x04,0x81,0x81,0xDB,0x81,0x04,0x04,0x5C,0x5C,0x60,0x43,0x43,0x43,0x43,0x43,0x5C,0xA6,0x43,0x04,0x04,0x7C,0x8E,0x24,0x3C,0x04,0x00,
 0x00,0x04,0xB9,0x41,0x95,0xA5,0x95,0x81,0x04,0x04,0x5C,0x3F,0x60,0x60,0xB7,0xA6,0x43,0x04,0x04,0x24,0x8E,0x7C,0x8E,0x24,0x3C,0x04,0x00,
 0x00,0x04,0xC9,0x81,0x95,0xA5,0x81,0x95,0x7E,0x95,0x04,0x04,0x5C,0x5C,0x43,0x04,0x04,0x74,0x24,0x24,0x3C,0x8E,0x8E,0x24,0x24,0x04,0x00,
 0x00,0x04,0x97,0x81,0x95,0xC9,0x81,0x10,0xB9,0xA2,0x7C,0x95,0x04,0x04,0x04,0x24,0x24,0x3C,0x3C,0x24,0x3C,0xCE,0x24,0x3C,0x24,0x04,0x00,
 0x00,0x04,0x97,0x95,0xA2,0xB9,0x81,0x95,0xC9,0xD2,0x7C,0xA3,0x81,0x04,0x3C,0x3C,0x24,0x3C,0x3C,0x24,0x3C,0x8E,0x24,0x3C,0x24,0x04,0x00,
 0x00,0x04,0x93,0x95,0xA2,0xA5,0xC9,0xD2,0x41,0xB9,0x7C,0x10,0x81,0x04,0x3C,0x3C,0x24,0x3C,0x3C,0xD9,0x24,0x24,0x24,0x24,0x24,0x04,0x00,
 0x00,0x04,0xB9,0xD2,0xA2,0x81,0x97,0xD2,0x41,0xC9,0x7C,0x10,0x81,0x04,0xCE,0x3C,0x24,0x8E,0x8E,0x7C,0xB9,0x3C,0x7C,0x24,0x24,0x04,0x00,
 0x00,0x04,0x93,0xD2,0x97,0x97,0xA2,0xA2,0x5B,0xB9,0x97,0x97,0xC9,0x04,0x8E,0x3C,0x7C,0x3C,0x24,0x24,0xB9,0x3C,0x7C,0x8E,0x24,0x04,0x00,
 0x00,0x04,0xA5,0xA2,0x97,0x93,0xA2,0x97,0x95,0x97,0x97,0x81,0x93,0x04,0x3C,0x24,0x7C,0x3C,0x7C,0x24,0x24,0x8E,0x7C,0x3C,0x24,0x04,0x00,
 0x00,0x04,0xA5,0xA2,0x97,0x81,0x97,0x97,0x41,0xA5,0x97,0xC9,0x93,0x04,0x3C,0x24,0x7C,0x24,0xD9,0x24,0x3C,0x8E,0xD9,0x24,0x24,0x04,0x00,
 0x00,0x04,0xDA,0x93,0xDB,0x81,0x74,0x97,0x41,0xA5,0xDB,0xDA,0x93,0x04,0x3C,0x7C,0x24,0x24,0x8E,0x24,0x24,0xCE,0x24,0x24,0x24,0x04,0x00,
 0x00,0x04,0xDA,0x97,0xA2,0x81,0x74,0xA2,0x81,0xB9,0xA2,0x41,0x93,0x04,0x8E,0xD9,0x24,0x3C,0xCE,0xD9,0x3C,0x8E,0x24,0x24,0x3C,0x04,0x00,
 0x00,0x00,0x04,0x04,0x93,0x93,0x24,0xA2,0x93,0x24,0xDB,0xC9,0x93,0x04,0x3C,0x7C,0x24,0x3C,0xCE,0xD9,0x3C,0x8E,0x8E,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x74,0xDB,0xC9,0x74,0xA2,0xC9,0x93,0x04,0x24,0x7C,0x7C,0x24,0x8E,0x24,0x3C,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xC9,0xB9,0x93,0xDA,0x93,0x04,0x3C,0x24,0x7C,0x24,0xCE,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x93,0xDA,0x93,0x04,0x3C,0x24,0x24,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xDA,0x04,0x3C,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
