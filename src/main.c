/*
 *--------------------------------------
 * Program Name: ISO
 * Author: Michael2_3B
 * License: MIT
 * Description: Rendering isometric terrain in the C language on the TI-84+ CE.
 *--------------------------------------
*/

/* Keep these headers */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>

/* Standard headers (recommended) */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <graphx.h>
#include <keypadc.h>
#include <fileioc.h>

/* Include the sprite data */
#include "gfx/logo_gfx.h"

/* Put your function prototypes here */
void generateMap(int mapNum);
void drawMap(int startX, int startY, int startZ);

/* Put all your globals here */

kb_key_t key;
gfx_TempSprite(behind_sprite, 29, 43);

const gfx_sprite_t *blocks[] = {
    /* 000 */ NULL,
    /* 001 */ water_full,
    /* 002 */ water_surface,
    /* 003 */ lava_full,
    /* 004 */ lava_surface,
    /* 005 */ glass_block,
    /* 006 */ glass_pane_west_to_east,
    /* 007 */ glass_pane_south_to_north,
    /* 008 */ oak_leaves,
    /* 009 */ NULL,
    /* 010 */ NULL,
    /* 011 */ NULL,
    /* 012 */ NULL,
    /* 013 */ NULL,
    /* 014 */ NULL,
    /* 015 */ NULL,
    /* 016 */ NULL,
    /* 017 */ NULL,
    /* 018 */ NULL,
    /* 019 */ NULL,
    /* 020 */ NULL,
    /* 021 */ NULL,
    /* 022 */ NULL,
    /* 023 */ NULL,
    /* 024 */ stone_brick_stairs_east,
    /* 025 */ stone_brick_stairs_east_2,
    /* 026 */ stone_stairs_east,
    /* 027 */ brick_stairs_east,
    /* 028 */ NULL,
    /* 029 */ NULL,
    /* 030 */ NULL,
    /* 031 */ NULL,
    /* 032 */ NULL,
    /* 033 */ NULL,
    /* 034 */ NULL,
    /* 035 */ NULL,
    /* 036 */ NULL,
    /* 037 */ NULL,
    /* 038 */ NULL,
    /* 039 */ NULL,
    /* 040 */ NULL,
    /* 041 */ NULL,
    /* 042 */ NULL,
    /* 043 */ stone_brick_stairs_south_2,
    /* 044 */ NULL,
    /* 045 */ NULL,
    /* 046 */ NULL,
    /* 047 */ NULL,
    /* 048 */ NULL,
    /* 049 */ NULL,
    /* 050 */ NULL,
    /* 051 */ NULL,
    /* 052 */ NULL,
    /* 053 */ NULL,
    /* 054 */ NULL,
    /* 055 */ NULL,
    /* 056 */ NULL,
    /* 057 */ NULL,
    /* 058 */ NULL,
    /* 059 */ NULL,
    /* 060 */ NULL,
    /* 061 */ NULL,
    /* 062 */ NULL,
    /* 063 */ NULL,
    /* 064 */ NULL,
    /* 065 */ NULL,
    /* 066 */ NULL,
    /* 067 */ NULL,
    /* 068 */ NULL,
    /* 069 */ NULL, //nice
    /* 070 */ NULL,
    /* 071 */ NULL,
    /* 072 */ NULL,
    /* 073 */ NULL,
    /* 074 */ NULL,
    /* 075 */ NULL,
    /* 076 */ NULL,
    /* 077 */ NULL,
    /* 078 */ NULL,
    /* 079 */ NULL,
    /* 080 */ NULL,
    /* 081 */ NULL,
    /* 082 */ NULL,
    /* 083 */ NULL,
    /* 084 */ NULL,
    /* 085 */ NULL,
    /* 086 */ NULL,
    /* 087 */ NULL,
    /* 088 */ NULL,
    /* 089 */ NULL,
    /* 090 */ NULL,
    /* 091 */ NULL,
    /* 092 */ NULL,
    /* 093 */ NULL,
    /* 094 */ NULL,
    /* 095 */ NULL,
    /* 096 */ NULL,
    /* 097 */ NULL,
    /* 098 */ NULL,
    /* 099 */ NULL,
    /* 100 */ brick,
    /* 101 */ coal_ore,
    /* 102 */ stone,
    /* 103 */ dirt,
    /* 104 */ grass_block,
    /* 105 */ stone_brick,
    /* 106 */ stone_brick_2,
    /* 107 */ oak_log,
    /* 108 */ oak_planks
};

#define AIR 0
#define WATER_FULL 1
#define WATER_SURFACE 2
#define LAVA_FULL 3
#define LAVA_SURFACE 4
#define GLASS_BLOCK 5
#define GLASS_PANE_WEST_TO_EAST 6
#define GLASS_PANE_SOUTH_TO_NORTH 7
#define OAK_LEAVES 8

#define STONE_BRICK_STAIRS_EAST 24
#define STONE_BRICK_STAIRS_EAST_2 25
#define STONE_STAIRS_EAST 26
#define BRICK_STAIRS_EAST 27

#define STONE_BRICK_STAIRS_SOUTH_2 43

#define BRICK 100
#define COAL_ORE 101
#define STONE 102
#define DIRT 103
#define GRASS_BLOCK 104
#define STONE_BRICK 105
#define STONE_BRICK_2 106
#define OAK_LOG 107
#define OAK_PLANKS 108

const gfx_sprite_t *character_sprites[4] = {
    /* 0 */ steven_north_1,
    /* 1 */ steven_east_1,
    /* 2 */ steven_south_1,
    /* 3 */ steven_west_1
};

#define NORTH 0;
#define EAST 1;
#define SOUTH 2;
#define WEST 3;

int character = 1;
int playerDirection = 1;
float walkInterval = .1;

int a, b, c, i, x, y;
int direction;
int alternate = 0;

const int midX = 146;
//const int midY = -30; //for 36x36map
const int midY = 120; //for 8x8 map

int playerX;
int playerY;

//for 36x36 map
/*
float playerGridA = 19;
float playerGridB = 19;
float playerGridC = 6;
*/


//for 8x8 map
float playerGridA = 6.5;
float playerGridB = 6.5;
float playerGridC = 9;


const int sizeX = 8;
const int sizeZ = 8;
const int sizeY = 10;

int map[8][8][10];

void main(void) {
    /* Fill in the body of the main function here */
    srand(rtc_Time(NULL));

    generateMap(0);

    gfx_Begin();
    gfx_SetDrawBuffer();

    gfx_BlitScreen();

    gfx_SetTextScale(1,1);
    gfx_SetPalette(logo_gfx_pal, sizeof_logo_gfx_pal, 0);
    gfx_SetColor(1);

    gfx_FillScreen(5);
    gfx_PrintStringXY("Loading...", 130, 120);
    gfx_BlitBuffer();
    drawMap(0,0,0);

    playerX = midX-(playerGridA*12)+(playerGridB*12);
    playerY = midY+(playerGridB*6)+(playerGridA*6)-(playerGridC*15)+playerGridC;

    gfx_GetSprite(behind_sprite, playerX, playerY);
    gfx_TransparentSprite(character_sprites[character], playerX, playerY);

    gfx_BlitBuffer();

    do{
        kb_Scan();

        direction = 0;
        if (kb_Data[3]) {
            key = kb_Data[3];
            if(key == kb_1) direction = 1;
            if(key == kb_4) direction = 2;
            if(key == kb_7) direction = 3;
        }
        if (kb_Data[4]){
            key = kb_Data[4];
            if(key == kb_2) direction = 8;
            if(key == kb_8) direction = 4;
        }
        if (kb_Data[5]) {
            key = kb_Data[5];
            if(key == kb_3) direction = 7;
            if(key == kb_6) direction = 6;
            if(key == kb_9) direction = 5;
        }

        if(direction > 0){

            gfx_BlitScreen();

            /*
            if(alternate == 0){
                alternate = 1;
            } else {
                alternate = 0;
            }
            */

            gfx_Sprite(behind_sprite, playerX, playerY);

            if(direction == 1 && (int)playerGridA<sizeX-1){
                playerGridA += walkInterval;
                playerDirection = SOUTH;
            }
            if(direction == 3 && (int)playerGridB>0){
                playerGridB -= walkInterval;
                playerDirection = WEST;
            }
            if(direction == 5 && (int)playerGridA>0){
                playerGridA -= walkInterval;
                playerDirection = NORTH;
            }
            if(direction == 7 && (int)playerGridB<sizeZ-1){
                playerGridB += walkInterval;
                playerDirection = EAST;
            }

            //allow player to move character up and down (however, this is mostly useless unless I disable the gravity/snapping to the ground)
            if(direction == 2 && (int)playerGridC > 0){
                playerGridC -= walkInterval;
            }
            if(direction == 6 && (int)playerGridC < sizeY){
                playerGridC += walkInterval;
            }

            
            //gravity, walking up blocks
            if(map[(int)playerGridA+1][(int)playerGridB+1][(int)playerGridC-1] <= 4){
                if(playerGridC>0){
                    playerGridC -= 1;
                }
            }
            if(map[(int)playerGridA+1][(int)playerGridB+1][(int)playerGridC] >= 5){
                if(playerGridC<10){
                    playerGridC += 1;
                }
            }


            playerX = midX-(playerGridA*12)+(playerGridB*12);
            playerY = midY+(playerGridB*6)+(playerGridA*6)-(playerGridC*15)+playerGridC;

            gfx_GetSprite(behind_sprite, playerX, playerY);

            character = playerDirection;
            //+ alternate;

            gfx_FillRectangle_NoClip(0,0,30,30);

            gfx_SetTextXY(1,1);
            gfx_PrintInt((int)playerGridA, 3);
            gfx_SetTextXY(1,11);
            gfx_PrintInt((int)playerGridB, 3);
            gfx_SetTextXY(1,21);
            gfx_PrintInt((int)playerGridC, 3);
            gfx_TransparentSprite(character_sprites[character], playerX, playerY);

            drawMap((int)playerGridA+1, (int)playerGridB+1, (int)playerGridC);

            gfx_BlitBuffer();

            //delay(50);

        }

    } while (kb_Data[6] != kb_Enter);


    gfx_End();
}

/* Put other functions here */

void generateMap(int mapNum){
    if(mapNum == 0){
        //generate heightmap
        int lowVal = -1;
        int highVal = 1;
        int heightMap[sizeX][sizeZ];
        int cellHeight = randInt(2,5);
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                if(a>0){
                    if(abs(heightMap[a-1][b]-cellHeight)>1){
                        if(cellHeight > heightMap[a-1][b]){
                            cellHeight = heightMap[a-1][b]+1;
                        } else {
                            cellHeight = heightMap[a-1][b]-1;
                        }
                    }
                }
                heightMap[a][b] = cellHeight;
                cellHeight += randInt(lowVal,highVal);
                if(cellHeight >= sizeY) cellHeight = sizeY-1;
                if(cellHeight < 0) cellHeight = 0;
            }
            cellHeight = heightMap[a][0] + randInt(lowVal,highVal);
            if(cellHeight >= sizeY) cellHeight = sizeY-1;
            if(cellHeight < 0) cellHeight = 0;
        }

        //calculate player height
        playerGridC = heightMap[(int)playerGridA-1][(int)playerGridB-1]+2;

        //fill in 3d map with blocks
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                i = randInt(0,7);
                for(c=0; c<sizeY; c++){
                    if(c<heightMap[a][b]-1){
                        if(randInt(0,7)==0){
                            map[a][b][c] = COAL_ORE;
                        } else {
                            map[a][b][c] = STONE;
                        }
                    } else if(c==heightMap[a][b]-1){
                        map[a][b][c] = DIRT;
                    } else if(c==heightMap[a][b]){
                        map[a][b][c] = GRASS_BLOCK;
                        if(c<3) map[a][b][c] = DIRT;
                        if(i==2) map[a][b][c] = OAK_PLANKS;
                    } else {
                        map[a][b][c] = AIR;
                        if(c<3){
                            map[a][b][c] = LAVA_FULL;
                        } else if(c==3){
                            map[a][b][c] = LAVA_SURFACE;
                        } else if(i==0 && map[a][b][heightMap[a][b]]==GRASS_BLOCK){
                            if(c-heightMap[a][b]<3) map[a][b][c] = OAK_LOG;
                            if(c-heightMap[a][b]>2 && c-heightMap[a][b]<6) map[a][b][c] = OAK_LEAVES;
                        }
                    }
                }
                if(i==0)
                    map[a][b][heightMap[a][b]] = DIRT;
            }

        }
    }
}


void drawMap(int startX, int startZ, int startY){
    for(c=startY; c<sizeY; c++){
        for(a=startX; a<sizeX; a++){
            for(b=startZ; b<sizeZ; b++){
                if(a<sizeX-1 && b<sizeZ-1 && c<sizeY-1) if(map[a+1][b][c]>=100 && map[a][b+1][c]>=100 && map[a][b][c+1]>=100) continue;
                if(map[a][b][c] == NULL) continue;

                x = midX-(a*12)+(b*12);
                y = midY+(b*6)+(a*6)-(c*15)+c;
                gfx_TransparentSprite(blocks[map[a][b][c]], x, y);

                //gfx_BlitBuffer();
                //delay(100);
            }

        }
    }
}