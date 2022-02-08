// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t sand_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x46,0x46,0x46,0xAB,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xAB,0x47,0x59,0x46,0x47,0x46,0xAD,0x59,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x59,0x46,0x46,0x46,0x82,0x46,0x59,0x46,0x46,0x46,0xAD,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x46,0xAD,0x59,0x47,0x46,0x80,0x46,0x59,0xAD,0x47,0x46,0x59,0x46,0xAD,0x46,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0x46,0x46,0x59,0x59,0x47,0x59,0x59,0x59,0x59,0xAE,0x80,0x59,0x59,0x46,0x47,0x46,0x59,0x46,0x46,0x04,0x04,0x00,0x00,
 0x00,0xAB,0xAD,0x59,0x46,0x59,0x82,0x59,0x46,0x47,0x46,0x82,0x47,0x59,0x47,0x80,0x82,0x46,0xAE,0x80,0x47,0x80,0x59,0x46,0x80,0x04,0x00,
 0x00,0x04,0xAB,0x04,0x47,0x46,0x46,0x59,0x59,0x59,0x59,0x46,0xAE,0x82,0xAE,0xAD,0x80,0x82,0x80,0x59,0x59,0xAD,0xAD,0x04,0xAB,0x04,0x00,
 0x00,0x04,0x82,0x96,0x04,0x04,0x46,0xAD,0xAD,0x82,0x47,0xAE,0xAD,0xAE,0x47,0xAE,0x47,0x47,0x46,0x47,0x46,0x04,0x04,0x34,0xE3,0x04,0x00,
 0x00,0x04,0x4C,0x47,0x4C,0x4C,0x04,0x04,0x59,0x80,0x59,0x80,0x59,0xAD,0x80,0x59,0x59,0x46,0x46,0xAB,0x04,0x34,0xAE,0x71,0x44,0x04,0x00,
 0x00,0x04,0xCB,0x4C,0x47,0x47,0x47,0x47,0xAB,0x04,0x46,0x47,0x59,0x59,0x46,0x46,0xAD,0x04,0x04,0x34,0x34,0x44,0x44,0x34,0xD8,0x04,0x00,
 0x00,0x04,0xCB,0xCB,0x96,0x4C,0x4C,0xCB,0x47,0x4C,0x04,0x04,0x59,0xAE,0x46,0xAB,0x04,0xD8,0x34,0xAE,0x34,0x44,0x71,0x44,0xD8,0x04,0x00,
 0x00,0x04,0xCB,0x47,0x96,0x96,0x47,0x80,0x4C,0x80,0x4C,0x4C,0x04,0x04,0x04,0x71,0x34,0x44,0x44,0x44,0xAE,0x34,0x34,0x34,0xE3,0x04,0x00,
 0x00,0x04,0x4C,0xCC,0x82,0xCC,0x4C,0x82,0x82,0x47,0x80,0x4C,0xCC,0x04,0x71,0x34,0x44,0x34,0x34,0x71,0x34,0x71,0x44,0x44,0xD8,0x04,0x00,
 0x00,0x04,0x82,0x4C,0x47,0x4C,0x4C,0xCB,0x4C,0x47,0x80,0x47,0xC6,0xAB,0x44,0x71,0x34,0x71,0x71,0x44,0x44,0x44,0x44,0x71,0xE3,0xAB,0x00,
 0x00,0x04,0xCB,0x96,0x96,0x82,0x96,0x4C,0x80,0xCB,0x47,0x80,0x96,0x04,0x34,0x34,0x44,0x34,0x71,0x71,0x44,0x44,0x44,0x44,0xD8,0x04,0x00,
 0x00,0x04,0x47,0xCC,0x82,0xCB,0x96,0x96,0x47,0x4C,0xCC,0x82,0xCC,0x04,0x71,0x34,0x44,0x34,0x71,0x71,0x34,0x34,0x71,0x34,0xE3,0x04,0x00,
 0x00,0x04,0x47,0x96,0x96,0x4C,0x4C,0x96,0x4C,0x96,0x47,0xEC,0xCC,0x04,0x34,0x34,0x44,0x34,0x44,0x34,0x71,0x34,0x34,0x44,0xE3,0x04,0x00,
 0x00,0x04,0x82,0x4C,0x80,0x47,0x80,0x96,0x96,0x4C,0x80,0x82,0xC6,0x04,0xAE,0x71,0x34,0x44,0x34,0x34,0x44,0x44,0x34,0x44,0xE3,0x04,0x00,
 0x00,0x04,0x4C,0x4C,0x80,0x96,0x47,0x82,0x96,0x82,0x4C,0x47,0xCC,0x04,0x44,0x44,0x44,0x71,0x34,0x44,0xD8,0x44,0x71,0x71,0x34,0x04,0x00,
 0x00,0x04,0x47,0x47,0x82,0x82,0xCB,0x4C,0xCC,0x82,0x4C,0x80,0x4C,0x04,0x34,0x71,0xAE,0xD8,0x44,0x71,0x34,0xD8,0x44,0x71,0x34,0x04,0x00,
 0x00,0x00,0xAB,0x18,0x4C,0x47,0x47,0x4C,0x47,0x96,0x4C,0x4C,0x96,0x04,0x34,0x44,0x71,0x34,0x44,0x34,0x44,0x44,0x34,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x4C,0x4C,0x4C,0x82,0xCB,0x4C,0x80,0xAB,0x34,0x71,0xAE,0x34,0x34,0x71,0x34,0xAB,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x4C,0x4C,0x4C,0xC6,0xC6,0xAB,0x34,0x44,0x34,0x34,0x34,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x4C,0x47,0xC6,0x04,0x71,0x44,0x34,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xCC,0x04,0x44,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
