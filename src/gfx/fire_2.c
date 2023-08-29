// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t fire_2_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFE,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x0F,0x1F,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x1F,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFE,0xFE,0xFE,0x00,0xFE,0x3C,0x3C,0x47,0xFC,0x26,0x4A,0x1F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x1F,0x50,0x0F,0x4A,0x3C,0x47,0x38,0x65,0x26,0x1F,0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFC,0x1F,0x00,0x1F,0xFC,0x32,0x4A,0x38,0x26,0x0F,0x72,0x2E,0x3C,0x27,0x1F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x13,0xFC,0x00,0xFE,0x0F,0x30,0x38,0x32,0x72,0x4A,0x3C,0x32,0xFE,0x32,0x28,0xFE,0x0F,0x1F,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x13,0x3C,0x27,0x47,0x3C,0x27,0x47,0x65,0x42,0x26,0x28,0x0F,0x1F,0x28,0x1F,0x73,0x4A,0x27,0x0F,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFE,0x4A,0x3C,0x42,0x26,0x4A,0x3C,0x4A,0x65,0xFE,0x30,0x38,0x26,0xFC,0x2E,0x0F,0x42,0x65,0x47,0x3C,0x2E,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFE,0xFC,0x50,0x6F,0x1F,0x8B,0x26,0x2E,0x47,0x27,0x32,0x73,0x72,0x32,0xFE,0xFE,0x26,0x65,0x30,0x0F,0x28,0x13,0x00,0x00,
 0x00,0x00,0x00,0xFE,0x4A,0x3C,0x26,0x30,0x83,0x7F,0x26,0x26,0x4A,0x38,0x6F,0x2E,0x32,0x32,0x1F,0xC3,0x0F,0x27,0x3C,0x2E,0x4A,0x00,0x00,
 0x00,0x00,0x00,0x65,0x47,0x3C,0x27,0x32,0x30,0x27,0x6F,0x72,0x26,0x73,0x4A,0x4A,0x32,0x50,0x50,0x28,0x4A,0x3C,0x8B,0x7B,0x32,0x00,0x00,
 0x00,0x00,0x59,0x65,0x32,0x50,0x42,0x2E,0x73,0x1F,0x1F,0x13,0x5E,0x8B,0x19,0x0F,0x50,0x1F,0x4A,0x61,0x65,0x59,0x54,0x19,0x47,0x00,0x00,
 0x00,0x00,0x59,0x61,0x26,0x27,0x59,0x72,0x42,0x50,0x3C,0xFC,0x83,0x74,0x5E,0x27,0x3C,0x3C,0x7F,0x42,0x65,0x59,0x7B,0x61,0x3C,0x00,0x00,
 0x00,0x00,0xFC,0x42,0xAA,0xF4,0x74,0x61,0x28,0x72,0x59,0x3C,0x2E,0x6F,0xFE,0x30,0x50,0x4A,0x6F,0x26,0x42,0x4A,0x83,0x54,0x6F,0x00,0x00,
 0x00,0x00,0x00,0x9A,0x5E,0xF4,0x7B,0xF4,0x7F,0x42,0x59,0x6F,0x7B,0x1F,0x38,0x50,0x3C,0x42,0x83,0xF4,0x32,0x47,0x54,0x8C,0xF4,0x00,0x00,
 0x00,0x00,0x00,0xF4,0x7F,0x7C,0x5E,0x5E,0x8C,0x3C,0x61,0x8C,0x19,0xC1,0x65,0x26,0x28,0x59,0xAA,0x6F,0x30,0x8C,0xAA,0xF4,0x47,0x00,0x00,
 0x00,0x00,0x00,0x50,0x8C,0x7B,0xF4,0x64,0x61,0x50,0x4A,0x7B,0x8C,0xDD,0x72,0x64,0xF4,0x7B,0x9A,0x28,0xDD,0xF4,0x59,0x72,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x73,0x54,0x7C,0x4A,0x8C,0x47,0x8C,0x61,0x38,0x61,0x7B,0xF4,0xAA,0x5E,0x4A,0xF4,0xF4,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xC1,0xF4,0xF4,0x5E,0x54,0x38,0x42,0x7F,0x7B,0xC4,0xD7,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF4,0xF4,0x54,0xF4,0x00,0xF4,0x73,0x73,0x61,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x72,0x00,0x50,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};