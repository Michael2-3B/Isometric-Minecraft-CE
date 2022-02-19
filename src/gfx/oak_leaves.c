// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t oak_leaves_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xA7,0xAB,0xA7,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xA7,0xA7,0x00,0xA7,0x00,0xEC,0xAB,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xA7,0xA7,0x00,0x00,0x00,0x00,0xA7,0xA7,0xA7,0x00,0x00,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x00,0xAB,0x00,0xD5,0xA7,0xA7,0x00,0x5C,0xAB,0x00,0x00,0xA7,0xA7,0x7D,0x00,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0xA7,0x00,0xA7,0xA7,0x00,0x5C,0x00,0xAB,0xA7,0x5C,0xA7,0xAB,0x5C,0x5C,0xAB,0xA7,0xA7,0xD5,0xAB,0x04,0x04,0x00,0x00,
 0x00,0x04,0xA7,0x00,0x00,0x5C,0xD5,0x00,0x00,0x00,0xAB,0x00,0x00,0x00,0xA7,0xA7,0xB3,0xB3,0xAB,0x5C,0x00,0x00,0xA7,0x7D,0xAB,0x04,0x00,
 0x00,0x04,0x04,0x04,0xA7,0x00,0x5C,0xA7,0x5C,0x00,0x00,0xA7,0xA7,0x00,0x5C,0x00,0xED,0x00,0xAB,0xAB,0x00,0x5C,0xD5,0x04,0x04,0x04,0x00,
 0x00,0x04,0x00,0xD5,0x04,0x04,0x00,0xAB,0x00,0x00,0xAB,0x5C,0x00,0xA7,0x00,0xAB,0xA7,0xA7,0x00,0xAB,0xAB,0x04,0x04,0xC2,0x00,0x04,0x00,
 0x00,0x04,0x00,0x7D,0xEB,0xC2,0x04,0x04,0xA7,0xA7,0xAB,0x5C,0x5C,0x5C,0x00,0x00,0x00,0xA7,0x00,0x04,0x04,0x00,0xB3,0x00,0xB3,0x04,0x00,
 0x00,0x04,0x5C,0x00,0x00,0x5C,0xEC,0xE8,0x04,0x04,0x00,0x00,0xA7,0xA7,0xA7,0xA7,0xA7,0x04,0x04,0x00,0xC2,0xC2,0xB3,0x00,0xAB,0x04,0x00,
 0x00,0x04,0x5C,0x5C,0x00,0x5C,0x7D,0xEA,0xB3,0x00,0x04,0x04,0xAB,0xA7,0xAB,0x04,0x04,0xC2,0xEC,0x00,0xAB,0xC2,0x00,0x00,0x00,0x04,0x00,
 0x00,0x04,0x7D,0xB3,0xC2,0x7D,0xC2,0xEA,0x7D,0xAB,0x5C,0xC2,0x04,0x04,0x04,0xB3,0xEC,0xB3,0xAB,0xAB,0xAB,0x00,0xC2,0xC2,0xC2,0x04,0x00,
 0x00,0x04,0x5C,0x00,0xC2,0x7D,0xAB,0xEA,0x7D,0xC2,0x7D,0x00,0xEB,0x04,0x00,0xAB,0x00,0xB3,0xC2,0x00,0xAB,0x00,0x00,0xC2,0x00,0x04,0x00,
 0x00,0x04,0x7D,0x00,0x5C,0x00,0x5C,0xE8,0x7D,0x00,0xE8,0x00,0x5C,0x04,0x00,0x00,0x00,0xB3,0xC2,0xC2,0x00,0xC2,0xC2,0xC2,0xAB,0x04,0x00,
 0x00,0x04,0xC2,0x00,0x7D,0xC2,0x5C,0x5C,0x00,0x00,0xEB,0x00,0x7D,0x04,0xB3,0xB3,0x00,0xAB,0xB3,0xB3,0xB3,0xB3,0x00,0xB3,0xAB,0x04,0x00,
 0x00,0x04,0x00,0x00,0xB3,0x00,0x7D,0x00,0x5C,0xAB,0x5C,0xAB,0x56,0x04,0xB3,0xAB,0xC2,0x56,0xB3,0xAB,0xAB,0xAB,0x00,0xAB,0x00,0x04,0x00,
 0x00,0x04,0x00,0x5C,0x00,0xC2,0x7D,0xE8,0x7D,0x5C,0x00,0xC2,0xAB,0x04,0xAB,0x00,0xB3,0xC2,0xAB,0xEB,0x00,0x00,0x00,0x00,0xC2,0x04,0x00,
 0x00,0x04,0x5C,0x5C,0x00,0x00,0xAB,0xEA,0x00,0x7D,0x00,0xAB,0x56,0x04,0xB3,0x00,0xAB,0x3A,0xAB,0x00,0xB3,0x00,0xB3,0x00,0xC2,0x04,0x00,
 0x00,0x04,0x00,0xAB,0x00,0x5C,0x00,0xEA,0x5C,0x00,0xED,0x5C,0x7D,0x04,0xAB,0x00,0xC2,0xC2,0xC2,0x00,0xAB,0x00,0xAB,0xB3,0xB3,0x04,0x00,
 0x00,0x04,0xAB,0x00,0x00,0x5C,0x5C,0x00,0x7D,0x00,0xED,0x7D,0x7D,0x04,0xC2,0x00,0xAB,0x00,0x00,0x00,0xAB,0x00,0xAB,0xB3,0xAB,0x04,0x00,
 0x00,0x00,0x04,0x04,0xEB,0xB3,0xE8,0x00,0xB3,0x00,0x7D,0x00,0x00,0x04,0x00,0xB3,0xB3,0xB3,0xB3,0x00,0xC2,0xC2,0xE8,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,0xC2,0x00,0x7D,0x00,0xC2,0x04,0x00,0xB3,0xAB,0xB3,0xAB,0x00,0xC2,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x7D,0xC2,0xAB,0x5C,0xC2,0x04,0x00,0xC2,0xAB,0xAB,0x00,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x5C,0x5C,0x04,0x00,0x00,0xED,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xAB,0x04,0x00,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
