// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t stone_brick_2_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0xFC,0xFB,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x07,0x07,0x07,0x07,0x07,0xFB,0x3F,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x07,0xFB,0x07,0xFC,0x07,0x07,0x07,0xFB,0xFB,0xFB,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x07,0x07,0xFB,0x04,0x04,0xFC,0xFB,0x07,0xFB,0xFB,0xAD,0x07,0xFB,0xFB,0xFB,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0x07,0xFB,0xFC,0xFC,0x07,0xFB,0x07,0x04,0x04,0xFB,0x07,0x07,0xFB,0xFB,0x07,0x07,0xFC,0xFB,0xFB,0x04,0x04,0x00,0x00,
 0x00,0x04,0x07,0x07,0xFB,0xFC,0x07,0xFC,0x07,0x07,0xFC,0xFC,0xFB,0x04,0x04,0x07,0x07,0x07,0x07,0xFC,0xFC,0xFC,0xFC,0xFB,0x3F,0x04,0x00,
 0x00,0x04,0x04,0x04,0x07,0x07,0x07,0x07,0xFC,0xFC,0x07,0x07,0xAD,0x07,0x07,0x04,0x04,0x07,0xFB,0x07,0x07,0x07,0x07,0x04,0x04,0x04,0x00,
 0x00,0x04,0x0C,0x0C,0x04,0x04,0x07,0xFC,0x07,0x07,0xFB,0x07,0x07,0x0B,0xFC,0x07,0x07,0x04,0x04,0xFC,0xFC,0x04,0x04,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x08,0x08,0x0C,0x0C,0x04,0x04,0xFB,0xAD,0x07,0x07,0xFB,0x07,0x07,0xFB,0x07,0xFC,0xFC,0x04,0x04,0x0A,0x17,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x08,0x0B,0x08,0x08,0x08,0x08,0x04,0x04,0xFB,0x07,0x07,0x07,0xFB,0x07,0x07,0x04,0x04,0x04,0x0A,0x17,0xFA,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x08,0x08,0x0C,0x0B,0x08,0x08,0x08,0x0B,0x04,0x04,0xFC,0xFC,0x07,0x04,0x04,0xFA,0xFA,0x04,0xFA,0xFA,0xFA,0x0A,0x13,0x04,0x00,
 0x00,0x04,0x0C,0x08,0x08,0x08,0x0C,0x08,0x08,0x08,0x08,0x0C,0x04,0x04,0x04,0xFA,0xFA,0x0A,0x0A,0x04,0x0A,0xFA,0x0A,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x0B,0x08,0x08,0x08,0x08,0x08,0x0B,0x08,0x08,0x08,0x0B,0x04,0xFA,0x0A,0x0A,0x17,0xFA,0x04,0xFA,0xFA,0xFA,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x04,0x04,0x0C,0x0C,0x08,0x08,0x08,0x0C,0x0C,0x08,0xDF,0x04,0x0A,0xFA,0xFA,0xFA,0xFA,0x04,0xFA,0x0A,0xFA,0x04,0x04,0x04,0x00,
 0x00,0x04,0x0C,0x0C,0x04,0x04,0x0B,0x08,0x08,0x08,0x08,0x0B,0x0B,0x04,0xFA,0x0A,0x17,0xFA,0x0A,0x04,0xFA,0x04,0x04,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x0B,0x08,0x08,0x0B,0x04,0x04,0x0C,0x0C,0x08,0x08,0x0B,0x04,0x0A,0x0A,0xFA,0xFA,0xFA,0x04,0x04,0x0A,0xFA,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x0C,0x0B,0x08,0x08,0x08,0x04,0x04,0x04,0x0C,0x0C,0xDF,0x04,0xFA,0xFA,0x17,0x04,0x04,0xFA,0xFA,0xFA,0xFA,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x08,0x08,0x0C,0x0B,0x0B,0x04,0x08,0x0C,0x04,0x04,0xDF,0x04,0xFA,0x04,0x04,0xFA,0x0A,0xFA,0x17,0xFA,0x0A,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x08,0x0C,0x0C,0x08,0x08,0x04,0x08,0x08,0x0C,0x08,0x04,0x04,0x04,0xFA,0xFA,0x0A,0xFA,0xFA,0xFA,0x0A,0xFA,0xFA,0x13,0x04,0x00,
 0x00,0x04,0x0B,0x0B,0x08,0x08,0x08,0x04,0x0C,0x0C,0x0B,0x08,0x0B,0x04,0x0A,0xFA,0x0A,0xFA,0x0A,0xFA,0xFA,0xFA,0xFA,0x0A,0x13,0x04,0x00,
 0x00,0x00,0x04,0x04,0x0C,0x0C,0x08,0x04,0x08,0x08,0x08,0x0B,0xDF,0x04,0xFA,0x0A,0x17,0xFA,0xFA,0xFA,0xFA,0x0A,0xFA,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x08,0x04,0x08,0x0B,0x08,0x0C,0xDF,0x04,0xFA,0x0A,0xFA,0xFA,0x0A,0xFA,0xFA,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x08,0x08,0x0C,0x0C,0x0B,0x04,0x17,0xFA,0xFA,0x0A,0x17,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x0C,0x08,0x0B,0x04,0x0A,0xFA,0xFA,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xDF,0x04,0x0A,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
