// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t playhover_data[4700] = {
 162,29,  // width,height
 0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,
 0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x53,0x56,0xA8,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x98,0xA8,0xA8,0x98,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x48,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0xF4,0xF4,0xF4,0x7A,0x9C,0xF9,0xF9,0x31,0x19,0x48,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x57,0x3B,0x56,0x19,0xF4,0x31,0xF9,0x31,0x19,0x48,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0x53,0x19,0x33,0xF9,0x31,0x19,0x48,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0x69,0x7A,0x33,0x98,0x31,0x19,0x48,0xF9,0x69,0x82,0x33,0xF4,0xF4,0x33,0x3B,0xF9,0x3B,0x7A,0x9C,0xF9,0xF9,0xF9,0xF9,0x95,0x57,0x57,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0xF6,0x19,0x33,0x98,0x31,0x19,0x48,0xF9,0xF9,0x19,0x7A,0x82,0x82,0x19,0xF4,0x9C,0x93,0x19,0x7A,0x69,0xF9,0xF9,0xF9,0x31,0xF4,0x56,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0x93,0x7A,0xF4,0x56,0xF9,0x31,0x19,0x48,0xF9,0xF9,0xA8,0xF9,0xF9,0xF9,0x53,0x19,0x56,0xF9,0x56,0xF4,0x9C,0xF9,0xF9,0xF9,0x7A,0x19,0x53,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0xF4,0xF4,0xF4,0xF4,0xFB,0xF6,0xF9,0x31,0x19,0x48,0xF9,0xF9,0xF9,0x8F,0x56,0x57,0xFB,0xF4,0x57,0xF9,0x53,0x19,0x7A,0xF9,0xF9,0x48,0x19,0x9B,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x57,0x82,0x82,0x9C,0xF9,0xF9,0xF9,0x31,0x19,0x48,0xF9,0xF9,0xFB,0xF4,0x19,0x7A,0x57,0x19,0x57,0xF9,0xF9,0x56,0xF4,0x8F,0xF9,0x56,0x19,0x48,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0x19,0x48,0xF9,0x82,0xF4,0x82,0xF9,0xF9,0xF9,0x33,0x57,0xF9,0xF9,0x53,0x19,0x57,0xF6,0x19,0x57,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0x19,0x48,0xF9,0x9B,0x19,0xA8,0xF9,0xF9,0x3B,0xF4,0x57,0xF9,0xF9,0xF9,0x56,0x19,0x9B,0xF4,0x9C,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0x19,0x48,0xF9,0x56,0xF4,0x82,0x93,0x56,0xF4,0xF4,0x57,0xF9,0xF9,0xF9,0xA8,0x19,0xF4,0x7A,0x69,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0xF4,0x3B,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x31,0x19,0x48,0xF9,0xA8,0x33,0xF4,0xF4,0x19,0x31,0x7A,0x9B,0xF9,0xF9,0xF9,0xF9,0x9B,0xF4,0x31,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x48,0x48,0x69,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x95,0x33,0x33,0xF6,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x3B,0xF4,0x3B,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x9C,0x19,0x7A,0x69,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x53,0x19,0xF4,0x19,0x53,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0x95,0x56,0x56,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xF7,0xF7,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFB,0xFB,
 0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,
 0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,
};
