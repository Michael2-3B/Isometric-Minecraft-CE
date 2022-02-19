// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t fire_12_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x27,0x13,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x0F,0x3C,0x3C,0xFE,0x00,0x00,0x00,0x00,0x13,0xFC,0x13,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x47,0xFE,0x13,0xFE,0x00,0x00,0x00,0xFE,0x13,0x13,0x27,0x27,0x27,0x13,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0xFE,0x0F,0x27,0x42,0x27,0xFC,0x13,0x00,0x00,0x00,0xFE,0xFE,0xFC,0x4A,0x47,0x32,0x0F,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x13,0x0F,0x2E,0x65,0x32,0xFE,0xFE,0x00,0x00,0x0F,0x13,0x13,0xFE,0x38,0x42,0x26,0x30,0x0F,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x13,0xFC,0x1F,0x7F,0x42,0x28,0xFC,0x13,0xFE,0xFE,0x30,0xFE,0x00,0x13,0x65,0xFE,0x2E,0xFC,0x27,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x30,0xFE,0xFE,0x13,0x1F,0x13,0x26,0x28,0x47,0xFE,0x13,0x73,0xFC,0x27,0x13,0x0F,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x13,0x13,0x0F,0x13,0x0F,0x1F,0xFC,0x32,0x0F,0x72,0x4A,0x2E,0xFE,0xFE,0x13,0x0F,0x32,0x30,0x27,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x13,0xFC,0x0F,0x27,0x47,0x27,0x13,0xFC,0x0F,0x1F,0xFE,0x30,0x28,0x3C,0x27,0x47,0x26,0x30,0x0F,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x0F,0x13,0x0F,0x2E,0x42,0x32,0x30,0x0F,0x1F,0x32,0x2E,0x0F,0x13,0xFC,0x4A,0x42,0x2E,0xFC,0xFE,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFC,0x4A,0x13,0x1F,0x7F,0x42,0x32,0x30,0x13,0xFE,0x13,0x32,0x7F,0xFC,0xFC,0x28,0x7F,0x2E,0x0F,0x4A,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFC,0x0F,0x47,0x27,0x59,0x72,0x32,0x1F,0x0F,0x26,0x1F,0x61,0xD7,0x4A,0xFE,0x42,0x8B,0x65,0x30,0x3C,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0xFC,0x4A,0x28,0x8E,0x7F,0x74,0x28,0xFC,0x47,0x26,0x42,0x74,0x65,0x26,0xFE,0x73,0x59,0x42,0x47,0x4A,0x27,0x00,0x00,0x00,
 0x00,0x00,0x00,0x28,0x47,0x13,0xDD,0x42,0x61,0x26,0x0F,0x47,0x27,0x42,0x38,0x42,0x26,0x65,0x42,0x7F,0x50,0x32,0x42,0x27,0x00,0x00,0x00,
 0x00,0x00,0x00,0x28,0x26,0x47,0x61,0x26,0x32,0x2E,0x47,0xFC,0x47,0x72,0x19,0x1F,0x59,0x65,0x2E,0x4A,0xFC,0x38,0x2E,0xFC,0x00,0x00,0x00,
 0x00,0x00,0x00,0x26,0x28,0x65,0x73,0x59,0x27,0x27,0x32,0x1F,0xF4,0x9A,0xF4,0x27,0x13,0x65,0x6F,0x50,0x73,0x26,0x47,0x47,0x00,0x00,0x00,
 0x00,0x00,0x64,0x61,0x73,0xF4,0x6F,0x38,0x38,0x0F,0x38,0x50,0x9A,0xC4,0xFC,0x2E,0x47,0x42,0x65,0x28,0x6F,0x42,0x61,0x47,0x00,0x00,0x00,
 0x00,0x00,0xF4,0x54,0x73,0x5E,0xF4,0xF4,0x61,0x61,0x26,0x2E,0x27,0x64,0xC4,0x30,0x42,0x73,0x73,0xF4,0x59,0x19,0x42,0x1F,0x00,0x00,0x00,
 0x00,0x00,0x64,0x64,0x8B,0x7B,0xF4,0xF4,0x8C,0x59,0x26,0x50,0x0F,0xF4,0x28,0x2E,0x61,0xF4,0xF4,0x83,0x61,0x7C,0x38,0x0F,0x00,0x00,0x00,
 0x00,0x00,0x00,0x74,0xF4,0x8B,0xF4,0x7B,0x83,0x7F,0x42,0x26,0x2E,0xF4,0x26,0x38,0xF4,0xF4,0xF4,0x7F,0x2E,0x83,0x2E,0x26,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0xF4,0x73,0x61,0x28,0x42,0xF4,0x2E,0xF4,0xF4,0x2E,0x28,0x5E,0xF4,0x7B,0x38,0x26,0x59,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x59,0xFC,0x38,0x7B,0x26,0x47,0x00,0x61,0x83,0x8B,0xC4,0x61,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x59,0x26,0x0F,0x00,0x64,0x7C,0xF4,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4A,0x26,0x00,0x74,0xF4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
