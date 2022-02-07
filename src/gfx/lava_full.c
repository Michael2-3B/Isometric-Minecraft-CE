// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t lava_full_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x33,0x37,0x33,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x31,0x46,0x78,0xC2,0xD5,0x64,0x37,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x46,0x64,0x31,0xD5,0xA2,0xA4,0x5B,0x5B,0x46,0x31,0x31,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x33,0x33,0x37,0x33,0x33,0x33,0x37,0x46,0x33,0x46,0x64,0x78,0xA4,0xA2,0xA4,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0xA4,0xA2,0xD5,0x78,0x78,0x37,0x31,0x64,0x31,0x31,0x5B,0x5B,0x31,0x64,0x5B,0x46,0xA2,0x31,0x31,0x04,0x04,0x00,0x00,
 0x00,0x04,0x37,0x64,0x5B,0x5B,0x31,0x46,0x31,0x31,0x5B,0x64,0x64,0x5B,0x64,0x46,0x33,0x33,0x33,0x33,0x37,0x33,0x46,0xA4,0xC9,0x04,0x00,
 0x00,0x04,0x04,0x04,0xC9,0x78,0x37,0x31,0x37,0x78,0xC2,0x78,0x33,0x37,0x37,0x46,0x33,0x37,0x46,0x31,0xA4,0x64,0x37,0x04,0x04,0x04,0x00,
 0x00,0x04,0x79,0xE8,0x04,0x04,0x33,0x37,0x33,0x5B,0xC9,0xC2,0x64,0x46,0x33,0xA2,0xC2,0x78,0x64,0x33,0x37,0x04,0x04,0x59,0x57,0x04,0x00,
 0x00,0x04,0x2E,0x45,0x9A,0x82,0x04,0x04,0x31,0x31,0x5B,0x31,0x31,0x37,0x46,0x64,0xA2,0x78,0x78,0x04,0x04,0x20,0x57,0x4E,0xB3,0x04,0x00,
 0x00,0x04,0x45,0x45,0x6B,0x94,0x89,0x79,0x04,0x04,0x5B,0x31,0x33,0x37,0x37,0x5B,0x64,0x04,0x04,0x4E,0x7B,0x57,0x7F,0xAA,0x7F,0x04,0x00,
 0x00,0x04,0x71,0x79,0x6B,0x45,0x82,0xE5,0x71,0x2E,0x04,0x04,0x46,0x37,0x37,0x04,0x04,0x7F,0x86,0x86,0x57,0x59,0x4E,0x86,0x7F,0x04,0x00,
 0x00,0x04,0x2E,0x89,0x82,0x6B,0x2E,0x91,0x45,0x89,0xA0,0x6B,0x04,0x04,0x04,0x86,0x20,0x4E,0x7F,0x86,0x57,0x59,0x57,0x4E,0x4D,0x04,0x00,
 0x00,0x04,0xA0,0x89,0xC7,0x89,0xA0,0xA0,0x89,0xB6,0x89,0xA0,0x6B,0x04,0x59,0x59,0x4E,0x59,0x86,0x59,0x59,0x4E,0x4E,0x59,0x4E,0x04,0x00,
 0x00,0x04,0x6B,0x82,0xC7,0x82,0x94,0x6B,0xA0,0x89,0x79,0x6B,0xA0,0x04,0x4E,0x59,0x4E,0x59,0x59,0x4E,0x59,0x7B,0x86,0x4E,0x59,0x04,0x00,
 0x00,0x04,0x6B,0x45,0x82,0x2E,0x89,0x45,0x2E,0xA0,0xC7,0x94,0x45,0x04,0x4D,0x57,0x20,0x57,0xAA,0x7B,0x7B,0x20,0x4E,0x20,0x20,0x04,0x00,
 0x00,0x04,0x71,0x94,0x89,0x82,0x2E,0x79,0x71,0x9A,0x89,0xB6,0x91,0x04,0x20,0x57,0x59,0x20,0x57,0x7B,0x7F,0x7B,0x59,0x20,0x20,0x04,0x00,
 0x00,0x04,0x91,0xC7,0xE5,0x45,0x2E,0x82,0x79,0x2E,0x79,0x89,0x82,0x04,0x57,0x7F,0x4D,0x20,0x20,0x57,0x4D,0xB3,0x4D,0x20,0x59,0x04,0x00,
 0x00,0x04,0x91,0x94,0x94,0x45,0x2E,0x71,0x71,0xA0,0x6B,0x82,0x79,0x04,0x4D,0x86,0x4D,0x20,0x20,0x59,0x4D,0x7F,0x4D,0x4A,0xB3,0x04,0x00,
 0x00,0x04,0x45,0x2E,0x71,0x2E,0x2E,0x45,0x71,0x91,0x6B,0x6B,0x71,0x04,0x20,0x4D,0x4D,0x57,0x20,0x20,0x7B,0x7F,0x4D,0xE1,0x4E,0x04,0x00,
 0x00,0x04,0x82,0x2E,0x9A,0x6B,0x6B,0x45,0x45,0x82,0x2E,0x2E,0x2E,0x04,0x20,0x4E,0x86,0x57,0x20,0x20,0x4E,0x4E,0x7B,0x20,0x7B,0x04,0x00,
 0x00,0x00,0x04,0x04,0x9A,0x45,0x9A,0x91,0x94,0x82,0x2E,0x2E,0x2E,0x04,0x4D,0xAA,0xAA,0x20,0x20,0x14,0xAA,0x4D,0x4D,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x89,0xE8,0xC7,0x94,0x71,0xE7,0x9A,0x04,0xB3,0x4E,0x86,0x20,0x20,0xAA,0x4E,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x79,0x79,0x71,0xE7,0x91,0x04,0xB3,0x20,0x7B,0x57,0xE1,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x45,0x2E,0x91,0x04,0x57,0x20,0x59,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xA0,0x04,0x7F,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
