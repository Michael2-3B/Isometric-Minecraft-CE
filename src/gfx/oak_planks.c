// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t oak_planks_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x34,0x34,0x8A,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x34,0x68,0x4A,0x5C,0x34,0x5C,0x96,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x35,0x35,0x8A,0x8A,0x8A,0x68,0x4A,0x4A,0x34,0x34,0x34,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x34,0x34,0x34,0x8A,0x35,0x4A,0x34,0x8A,0x96,0x5C,0x35,0x4A,0x8A,0x34,0x8A,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0x8A,0x96,0x35,0x35,0x68,0x34,0x34,0x8A,0xB3,0x4A,0x5C,0x96,0x8A,0x34,0x35,0x4A,0x68,0x34,0x34,0x04,0x04,0x00,0x00,
 0x00,0x04,0x35,0x35,0x34,0x34,0x34,0x34,0x4A,0x4A,0x68,0x96,0x96,0x34,0x5C,0x5C,0x34,0x34,0x34,0x8A,0x35,0x35,0x68,0x96,0x96,0x04,0x00,
 0x00,0x04,0x04,0x04,0x35,0x4A,0x34,0x96,0x8A,0x95,0x4A,0x4A,0x34,0x8A,0x8A,0x34,0x4A,0x4A,0x96,0x34,0x34,0x8A,0x35,0x04,0x04,0x04,0x00,
 0x00,0x04,0x3D,0x5C,0x04,0x04,0x5C,0x5C,0x96,0x96,0x34,0x68,0x5C,0x5C,0x34,0x8A,0x96,0x34,0x5C,0x4A,0x34,0x04,0x04,0x21,0x35,0x04,0x00,
 0x00,0x04,0x4A,0x3D,0xA7,0x90,0x04,0x04,0x4A,0x4A,0x34,0x34,0x34,0x8A,0x4A,0x4A,0x34,0x5C,0x5C,0x04,0x04,0x53,0x53,0x21,0x7E,0x04,0x00,
 0x00,0x04,0x93,0x35,0x4A,0x3D,0x95,0x3D,0x04,0x04,0x4A,0x35,0x34,0x96,0x96,0x34,0x35,0x04,0x04,0x21,0x21,0x21,0x7C,0xBD,0x35,0x04,0x00,
 0x00,0x04,0x3D,0x90,0x93,0x35,0x7C,0x5C,0x95,0x5C,0x04,0x04,0x35,0x35,0x34,0x04,0x04,0x35,0x53,0x53,0x7E,0xBD,0x53,0x53,0x21,0x04,0x00,
 0x00,0x04,0x95,0x95,0xA7,0x93,0x93,0x7C,0x53,0x93,0x95,0x3D,0x04,0x04,0x04,0x53,0x53,0x21,0x7E,0xBD,0x53,0x21,0x21,0x21,0x21,0x04,0x00,
 0x00,0x04,0x7E,0x5C,0x3D,0x5C,0x90,0x90,0x3D,0x7E,0x53,0x93,0xA7,0x04,0x21,0x21,0x7C,0x7E,0x21,0x7C,0x53,0x53,0x53,0x35,0x7C,0x04,0x00,
 0x00,0x04,0x90,0x35,0x7C,0x3D,0x3D,0x4A,0x5C,0x3D,0x3D,0x7E,0x7C,0x04,0x7C,0x7E,0x21,0x21,0x35,0x7C,0x21,0x21,0x7E,0x7C,0x21,0x04,0x00,
 0x00,0x04,0x3D,0xA7,0x5C,0x35,0x35,0x90,0x95,0x5C,0x95,0x5C,0x90,0x04,0x21,0x35,0x53,0x53,0x21,0x7C,0x7C,0x7C,0x21,0x53,0x35,0x04,0x00,
 0x00,0x04,0x3D,0x93,0x3D,0x95,0x93,0x53,0x4A,0x3D,0x5C,0x3D,0x3D,0x04,0x21,0x21,0x21,0x21,0x7E,0x7E,0x21,0x21,0x35,0x53,0x21,0x04,0x00,
 0x00,0x04,0x7E,0x7E,0x93,0x93,0x5C,0xA7,0x3D,0x4A,0x35,0x90,0x3D,0x04,0x21,0x53,0x73,0x7E,0x21,0x21,0x53,0x53,0x21,0x7E,0xBD,0x04,0x00,
 0x00,0x04,0x90,0x95,0x7E,0x35,0x93,0x3D,0x5C,0x95,0x3D,0x4A,0x4A,0x04,0xBD,0x7E,0x53,0x53,0x53,0x53,0x21,0x7C,0x7C,0x21,0x21,0x04,0x00,
 0x00,0x04,0x5C,0x3D,0x3D,0x3D,0x7E,0x35,0x95,0x95,0x90,0xA7,0x95,0x04,0x35,0x35,0x21,0x21,0x21,0x7E,0x7C,0x53,0x7C,0x35,0x35,0x04,0x00,
 0x00,0x04,0x90,0x3D,0xA7,0x90,0x3D,0xA7,0x4A,0x4A,0x3D,0x3D,0x90,0x04,0x21,0x21,0x21,0x7E,0xBD,0x7C,0x21,0x21,0x21,0x21,0x21,0x04,0x00,
 0x00,0x00,0x04,0x04,0x90,0x3D,0x5C,0x4A,0x93,0x5C,0x4A,0x35,0x3D,0x04,0x21,0xBD,0xBD,0x21,0x21,0x7C,0x21,0x21,0x21,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0xA7,0x3D,0x3D,0x95,0x4A,0x3D,0x7E,0x04,0xBD,0x21,0x21,0x35,0x53,0x35,0x21,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x3D,0x3D,0x3D,0x90,0x3D,0x04,0x35,0x21,0x53,0x21,0x21,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xA7,0x3D,0x90,0x04,0x53,0x21,0x21,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xA7,0x04,0x21,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
