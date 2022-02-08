// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t steven_south_1_data[1163] = {
 27,43,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x06,0x06,0x50,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x06,0x06,0xFF,0x06,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xFF,0x35,0x06,0xFF,0x06,0xFF,0x06,0xFF,0xFF,0x06,0x50,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xFF,0x06,0xFF,0xFF,0x06,0xFF,0x06,0xFF,0x06,0xFF,0xFF,0x06,0xFF,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x06,0xFF,0x06,0xFF,0xFF,0xFF,0x06,0x35,0xFF,0x06,0x06,0xFF,0x50,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFF,0xFF,0x06,0x06,0xFF,0xFF,0x06,0xFF,0x06,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xB9,0x35,0xFF,0x06,0xFF,0x06,0x06,0xFF,0x06,0xFF,0x06,0x06,0xFF,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x98,0x98,0x98,0x35,0x06,0xFF,0x06,0xFF,0x06,0xFF,0x06,0xFF,0x06,0x06,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x56,0x56,0x52,0xAC,0xCF,0x98,0x52,0x06,0x06,0x06,0xFF,0xFF,0x06,0xFF,0xFF,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x56,0x2F,0x52,0xAC,0xCF,0x52,0xCF,0x98,0xFF,0xFF,0x06,0x06,0xFF,0x06,0x06,0x35,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x56,0xFE,0x1C,0x52,0x98,0x52,0xCF,0xAC,0x98,0x06,0xFF,0x74,0xFF,0xFF,0xFF,0x06,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFE,0xFE,0x52,0x52,0xA5,0x98,0x98,0xAC,0x52,0x06,0x10,0x5B,0x74,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x56,0xFE,0xFE,0x1C,0x52,0xA5,0xA5,0x52,0x52,0x5B,0x10,0x10,0x10,0x10,0x5B,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFD,0x56,0x56,0xFE,0x6C,0x52,0x1C,0x52,0x52,0xF2,0x10,0x5B,0x5B,0x5B,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFD,0xFD,0xFD,0x56,0x6C,0x6C,0xFE,0x52,0x1C,0x5B,0x5B,0x10,0xFE,0xFE,0x2F,0x2F,0x2F,0xFE,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x1C,0xFD,0x1C,0xFD,0x30,0x6C,0xFE,0xFE,0xF1,0x5B,0xFE,0xFE,0x2F,0x2F,0x2F,0x2F,0x2F,0xFE,0x3B,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x1C,0xFD,0x1C,0xFD,0x30,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x30,0xFE,0xFE,0x2F,0x2F,0x3B,0x3B,0x62,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x1C,0xFD,0xFD,0xFD,0x30,0xFE,0x30,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0x30,0x3B,0x62,0x62,0x3B,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFD,0xFD,0xFD,0x1C,0x30,0xFE,0xFE,0xFE,0xFE,0x27,0xFE,0x30,0xFE,0xFE,0xFE,0x3B,0x62,0x62,0x3B,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0xFD,0xFD,0xFD,0x1C,0x30,0xFE,0xFE,0x27,0xFE,0x27,0x27,0xFD,0xFE,0xFE,0xFE,0x3B,0x62,0x62,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x1C,0x1C,0xFD,0x1C,0x30,0xFE,0xFE,0x27,0xFE,0xFE,0x27,0xFD,0xFD,0xFD,0x30,0x3B,0x10,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x1C,0xFD,0xFD,0x30,0xFE,0xFE,0x27,0xFE,0xFE,0x27,0x1C,0xFD,0x1C,0xFD,0x41,0x10,0x10,0x41,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x27,0x27,0xFE,0xFE,0xFE,0xFE,0x27,0x1C,0xFD,0x1C,0xFD,0x41,0x10,0x10,0x41,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x27,0x27,0xFE,0xFE,0x27,0x1C,0xFD,0xFD,0xFD,0x41,0x10,0x10,0x41,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x09,0x27,0x27,0xFE,0xFD,0xFD,0xFD,0xFD,0x10,0x41,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x09,0x27,0xFD,0xFD,0xFD,0xFD,0x10,0x41,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x09,0x09,0x1C,0x1C,0xFD,0xFD,0x10,0x41,0x10,0x10,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x09,0x09,0x12,0x1C,0xFD,0xFD,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x09,0x09,0x12,0x72,0x72,0x1C,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x8C,0x09,0x36,0x09,0x09,0x09,0x12,0x12,0x72,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x09,0x09,0x12,0x12,0x72,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x8C,0x8C,0x09,0x12,0x12,0x72,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x8C,0x09,0x12,0x12,0x72,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x09,0x36,0x09,0x09,0x09,0x12,0x12,0x12,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x09,0x09,0x36,0x09,0x09,0x09,0x12,0x12,0x12,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x21,0x21,0x09,0x09,0x09,0x09,0x12,0x12,0x12,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x21,0x21,0x21,0x09,0x09,0x12,0x12,0x4B,0x4B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x21,0x21,0x21,0x4B,0x4B,0x4B,0x4B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x21,0x4B,0x4B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
