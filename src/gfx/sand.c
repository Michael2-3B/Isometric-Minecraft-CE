// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t sand_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x54,0x54,0x54,0x4E,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x4E,0x5E,0x64,0x54,0x5E,0x54,0x7B,0x64,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x64,0x54,0x54,0x54,0x9A,0x54,0x64,0x54,0x54,0x54,0x7B,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x54,0x54,0x64,0x5E,0x54,0x7C,0x54,0x64,0x54,0x5E,0x54,0x64,0x54,0x7B,0x54,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0x54,0x54,0x64,0x64,0x5E,0x64,0x64,0x64,0x64,0x64,0x7C,0x64,0x64,0x54,0x5E,0x54,0x64,0x54,0x54,0x04,0x04,0x00,0x00,
 0x00,0x4E,0x7B,0x64,0x54,0x64,0x9A,0x64,0x54,0x5E,0x54,0x9A,0x5E,0x64,0x5E,0x7C,0x9A,0x54,0x64,0x7C,0x5E,0x7C,0x64,0x54,0x7C,0x04,0x00,
 0x00,0x04,0x4E,0x04,0x5E,0x54,0x54,0x64,0x64,0x64,0x64,0x54,0x64,0x9A,0x64,0x7B,0x7C,0x9A,0x7C,0x64,0x64,0x54,0x7B,0x04,0x4E,0x04,0x00,
 0x00,0x04,0x9A,0xC7,0x04,0x04,0x54,0x7B,0x54,0x9A,0x5E,0x64,0x54,0x64,0x5E,0x64,0x5E,0x5E,0x54,0x5E,0x54,0x04,0x04,0xAF,0xDC,0x04,0x00,
 0x00,0x04,0x7C,0x5E,0x7C,0x7C,0x04,0x04,0x64,0x7C,0x64,0x7C,0x64,0x54,0x7C,0x64,0x64,0x54,0x54,0x4E,0x04,0xAF,0xBB,0xBB,0xBA,0x04,0x00,
 0x00,0x04,0x64,0x7C,0x5E,0x5E,0x5E,0x5E,0x4E,0x04,0x54,0x5E,0x64,0x64,0x54,0x54,0x7B,0x04,0x04,0xAF,0xAF,0xBA,0xBA,0xAF,0xD7,0x04,0x00,
 0x00,0x04,0x64,0x64,0xC7,0x7C,0x7C,0x64,0x5E,0x7C,0x04,0x04,0x64,0x64,0x54,0x4E,0x04,0xD7,0xAF,0xBB,0xAF,0xBA,0xBB,0xBA,0xD7,0x04,0x00,
 0x00,0x04,0x64,0x5E,0xC7,0xC7,0x5E,0xC7,0x7C,0xC7,0x7C,0x7C,0x04,0x04,0x04,0xBB,0xAF,0xBA,0xBA,0xBA,0xBB,0xAF,0xAF,0xAF,0xDC,0x04,0x00,
 0x00,0x04,0x7C,0xC7,0x5E,0x7B,0x7C,0x5E,0x5E,0x5E,0xC7,0x7C,0x7B,0x04,0xBB,0xAF,0xBA,0xAF,0xAF,0xBB,0xAF,0xBB,0xBA,0xBA,0xD7,0x04,0x00,
 0x00,0x04,0x9A,0x7C,0x5E,0x7C,0x7C,0x64,0x7C,0x5E,0xC7,0x5E,0xE1,0x4E,0xBA,0xBB,0xAF,0xBB,0xBB,0xBA,0xBA,0xBA,0xBA,0xBB,0xDC,0x4E,0x00,
 0x00,0x04,0x64,0xC7,0xC7,0x5E,0xC7,0x7C,0xC7,0x64,0x5E,0xC7,0xC7,0x04,0xAF,0xAF,0xBA,0xAF,0xBB,0xBB,0xBA,0xBA,0xBA,0xBA,0xD7,0x04,0x00,
 0x00,0x04,0x5E,0xC7,0x9A,0x64,0xC7,0xC7,0x5E,0x7C,0xC7,0x5E,0x7B,0x04,0xBB,0xAF,0xBA,0xAF,0xBB,0xBB,0xAF,0xAF,0xBB,0xAF,0xDC,0x04,0x00,
 0x00,0x04,0x5E,0xC7,0xC7,0x7C,0x7C,0xC7,0x7C,0xC7,0x5E,0xAA,0xC7,0x04,0xAF,0xAF,0xBA,0xAF,0xBA,0xAF,0xBB,0xAF,0xAF,0xBA,0xDC,0x04,0x00,
 0x00,0x04,0x5E,0x7C,0xC7,0x5E,0xC7,0xC7,0xC7,0x7C,0xC7,0x9A,0xE1,0x04,0xBB,0xBB,0xAF,0xBA,0xAF,0xAF,0xBA,0xBA,0xAF,0xBA,0xDC,0x04,0x00,
 0x00,0x04,0x7C,0x7C,0xC7,0xC7,0x5E,0x9A,0xC7,0x5E,0x7C,0x5E,0xC7,0x04,0xBA,0xBA,0xBA,0xBB,0xAF,0xBA,0xD7,0xBA,0xBB,0xBB,0xAF,0x04,0x00,
 0x00,0x04,0x5E,0x5E,0x5E,0x8C,0x64,0x7C,0xC7,0x9A,0x7C,0xC7,0x7C,0x04,0xAF,0xBB,0xBB,0xD7,0xBA,0xBB,0xAF,0xD7,0xBA,0xBB,0xAF,0x04,0x00,
 0x00,0x00,0x4E,0x77,0x7C,0x5E,0x5E,0x7C,0x5E,0xC7,0x7C,0x7C,0xC7,0x04,0xAF,0xBA,0xBB,0xAF,0xBA,0xAF,0xBA,0xBA,0xAF,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x7C,0x7C,0x7C,0x5E,0x64,0x7C,0xC7,0x4E,0xAF,0xBB,0xBB,0xAF,0xAF,0xBB,0xAF,0x4E,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x7C,0x7C,0x7C,0xE1,0xE1,0x4E,0xAF,0xBA,0xAF,0xAF,0xAF,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x7C,0x5E,0xE1,0x04,0xBB,0xBA,0xAF,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xC7,0x04,0xBA,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
