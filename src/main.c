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
#include <debug.h>

/* Include the sprite data */
#include "gfx/logo_gfx.h"

/* Put your function prototypes here */
void drawMainMenu();
bool checkTag(int blockID, int tagID);

void changeBrightness();
void drawMapToScreen(int startX, int startY, int startZ);
void generateMap(int mapNum);

void generateLightMap();
int max(int n1, int n2);
int min(int n1, int n2);
int calculateBlockLight(int blockX, int blockY, int blockZ);

void drawMap(int startX, int startY, int startZ, int angle);
void mapRotationChange();
void changeDrawPosition();
void drawCoordinates();
void drawBlockSelection();
void playerMovement();
void selectionMovement();
void blockSelectionChange();
void blockPlacement();
int gridToScreenX(int gridX, int gridZ);
int gridToScreenY(int gridX, int gridZ, int gridY);
void blockPhysics();
void addFallingBlock(int blockX, int blockZ, int blockY, int velocity);
void removeFallingBlock(int index);
void updateSurroundingBlocks(int blockX, int blockZ, int blockY);
void print_string_centered(char *str, int y, int offset, uint8_t c);

/* Put all your globals here */

kb_key_t key;
gfx_TempSprite(behind_character, 27, 43);
gfx_TempSprite(behind_selection_box, 27, 29);
gfx_TempSprite(behind_selection_tile, 27, 29);

gfx_TempSprite(behind_fire_0, 27, 29);


int fallingBlocksSize = 60;
int fallingBlocks[60][6] = {
    // {block ID, velocity, x, y, z, total fall height}
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0},
    {-1, -1, -1, -1, -1, 0}
};

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
    /* 009 */ pink_flower,
    /* 010 */ torch,
    /* 011 */ oak_door_south_bottom,
    /* 012 */ oak_door_south_top,
    /* 013 */ oak_door_east_2_bottom,
    /* 014 */ oak_door_east_2_top,
    /* 015 */ fire_1,
    /* 016 */ chest_1,
    /* 017 */ ladder_north,
    /* 018 */ stone_25p,
    /* 019 */ NULL,
    /* 020 */ NULL,
    /* 021 */ NULL,
    /* 022 */ NULL,
    /* 023 */ NULL,
    /* 024 */ NULL,
    /* 025 */ NULL,
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
    /* 043 */ NULL,
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
    /* 106 */ NULL,
    /* 107 */ oak_log,
    /* 108 */ oak_planks,
    /* 109 */ sand,
    /* 110 */ gravel,
    /* 111 */ cobblestone
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
#define PINK_FLOWER 9
#define TORCH 10
#define OAK_DOOR_SOUTH_BOTTOM 11
#define OAK_DOOR_SOUTH_TOP 12
#define OAK_DOOR_EAST_2_BOTTOM 13
#define OAK_DOOR_EAST_2_TOP 14
#define FIRE 15
#define CHEST 16
#define LADDER 17
#define STONE_25P 18

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

#define OAK_LOG 107
#define OAK_PLANKS 108
#define SAND 109
#define GRAVEL 110
#define COBBLESTONE 111

//blockTags is parallel to blocks array

/*
bool blockTags[][] = {
    //Gravity, Rotatable, Flammable, Non-Full, etc
    {0, 0, 0, 1},
    {0, 0, 0, 1},
    //etc
};
*/

#define GRAVITY 0
#define ROTATABLE 1
#define FLAMMABLE 2
#define NON_FULL 3

const gfx_sprite_t *shadowLeft[] = {
    shadow_left_100p,
    shadow_left_88p,
    shadow_left_75p,
    shadow_left_63p,
    shadow_left_50p,
    shadow_left_37p,
    shadow_left_25p,
    shadow_left_12p,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const gfx_sprite_t *shadowRight[] = {
    shadow_right_100p,
    shadow_right_88p,
    shadow_right_75p,
    shadow_right_63p,
    shadow_right_50p,
    shadow_right_37p,
    shadow_right_25p,
    shadow_right_12p,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const gfx_sprite_t *shadowFloor[] = {
    shadow_floor_100p,
    shadow_floor_88p,
    shadow_floor_75p,
    shadow_floor_63p,
    shadow_floor_50p,
    shadow_floor_37p,
    shadow_floor_25p,
    shadow_floor_12p,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

#define LIGHT_LEVEL_0 0
#define LIGHT_LEVEL_50 4

#define TORCH_LIGHT 8
#define LAVA_LIGHT 8
#define FIRE_LIGHT 8
#define MAX_LIGHT 8

const gfx_sprite_t *fires[] = {
    fire_1,
    fire_2,
    fire_3,
    fire_4,
    fire_5,
    fire_6,
    fire_7,
    fire_8,
    fire_9,
    fire_10,
    fire_11,
    fire_12,
    fire_13,
    fire_14,
    fire_15,
    fire_16
};

int fireNum = 0;

const gfx_sprite_t *chests[] = {
    chest_1,
    chest_2,
    chest_3,
    chest_4,
    chest_5,
    chest_6,
    chest_7,
    chest_8,
    chest_9,
    chest_10,
    chest_11,
    chest_12,
    chest_13,
    chest_14,
    chest_15,
    chest_16
};

int chestOpening[8][8][10][2];

//int chestNum = 0;
//int chestOpening = 0;

const gfx_sprite_t *character_sprites[4] = {
    /* 0 */ steven_north_1,
    /* 1 */ steven_east_1,
    /* 2 */ steven_south_1,
    /* 3 */ steven_west_1
};

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

int character = 1;
int playerDirection = 1;
float walkInterval = .1;

int a, b, c, i, j, x, y;
int direction;
int alternate = 0;

int midX = 146;
//const int midY = -30; //for 36x36map
int midY = 120; //for 8x8 map

int playerX, playerY;

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

int skyLightMap[8][8][10];
int blockLightMap[8][8][10];

int blockSelection = BRICK;
int frameCount = 0;
int frameCount2 = 0;

int selectionA = 7;
int selectionB = 7;
int selectionC = 0;

int selectionX, selectionY;
int selectionY_tile;

int drawAngle = 0;

int skyColor;
int worldTime;
int worldTimeChange;
int brightness = 0;

bool fireInWorld = false;

bool exitGame = false;

void main(void) {
    /* Fill in the body of the main function here */
    srand(rtc_Time(NULL));

    worldTime = 0; //0 is day, 8 is night
    if(worldTime == 0){
        skyColor = 5;
    } else {
        skyColor = 13;
    }

    dbg_sprintf(dbgout, "Beginning...\n");

    gfx_Begin();
    gfx_SetDrawBuffer();

    gfx_BlitScreen();

    gfx_SetTextScale(1,1);
    gfx_SetPalette(logo_gfx_pal, sizeof_logo_gfx_pal, 0);

    drawMainMenu();

    if(exitGame == false){

        dbg_sprintf(dbgout, "Generating map...\n");

        generateMap(1);
        //map 0 - dynamic terrain
        //map 1 - flat grass world
        //map 2 - void world
        //map 3 - floating sand world
        //map 4 - underground room with transparent stone corner

        //DO NOT LOAD MAP 3. IT IS A FLOATING SAND WORLD AND IF YOU MESS WITH THE SAND YOU WILL (CURRENTLY) GET A RAM CLEAR

        dbg_sprintf(dbgout, "Calculating world light...\n");

        generateLightMap();

        playerX = gridToScreenX(playerGridA, playerGridB);
        playerY = gridToScreenY(playerGridA, playerGridB, playerGridC);

        selectionX = gridToScreenX(selectionA, selectionB);
        selectionY = gridToScreenY(selectionA, selectionB, selectionC);



        //gfx_GetSprite(behind_character, playerX, playerY);
        //gfx_TransparentSprite(character_sprites[character], playerX, playerY);

        //draw player coordinates?

        dbg_sprintf(dbgout, "Drawing map to screen...\n");

        drawMapToScreen(0,0,0);

        do{
            kb_Scan();

            if(fireInWorld)
                drawMapToScreen(0,0,0);

            if(kb_Data[1]){
                key = kb_Data[1];
                if(key == kb_Zoom && map[selectionA][selectionB][selectionC] == CHEST && chestOpening[selectionA][selectionB][selectionC][0] == 0){
                    if(chestOpening[selectionA][selectionB][selectionC][1] == 0){
                        chestOpening[selectionA][selectionB][selectionC][1] = 1;
                        chestOpening[selectionA][selectionB][selectionC][0] = 1;
                    }
                    if(chestOpening[selectionA][selectionB][selectionC][1] == 15){
                        chestOpening[selectionA][selectionB][selectionC][1] = 14;
                        chestOpening[selectionA][selectionB][selectionC][0] = -1;
                    }
                }
            }

            if(kb_Data[2]){
                worldTimeChange = worldTime;
                key = kb_Data[2];
                if(key == kb_Store){
                    worldTime = min(8, worldTime+1);
                    skyColor = min(13, skyColor+1);
                } else if(key == kb_Ln){
                    worldTime = max(0, worldTime-1);
                    skyColor = max(5, skyColor-1);
                }

                if(worldTime != worldTimeChange)
                    drawMapToScreen(0,0,0);
            }

            changeBrightness();

            if(chestOpening[selectionA][selectionB][selectionC][0] != 0){
                drawMapToScreen(0,0,0);
                chestOpening[selectionA][selectionB][selectionC][1] += chestOpening[selectionA][selectionB][selectionC][0];
                if(chestOpening[selectionA][selectionB][selectionC][1] > 15){
                    chestOpening[selectionA][selectionB][selectionC][1] = 15;
                    chestOpening[selectionA][selectionB][selectionC][0] = 0;
                }
                if(chestOpening[selectionA][selectionB][selectionC][1] < 0){
                    chestOpening[selectionA][selectionB][selectionC][1] = 0;
                    chestOpening[selectionA][selectionB][selectionC][0] = 0;
                }
            }

            mapRotationChange();

            changeDrawPosition();

            blockSelectionChange();

            selectionMovement();

            blockPlacement();

            blockPhysics();

            //playerMovement();

        } while (kb_Data[6] != kb_Enter);

    }

    gfx_End();
}

/* Put other functions here */

void drawMainMenu(){

    int startX = -12;
    int button = 0;

    do{

        int alternate = 0;
        for(y=240; y>-30; y-=20){
            for(x=startX+alternate; x<320; x+=24){
                gfx_TransparentSprite(grass_block, x, y);
            }
            if(alternate == 0){
                alternate = 12;
            } else {
                alternate = 0;
            }
        }

        startX -= 2;
        if(startX == -36)
            startX = -12;

        print_string_centered("Isometric Minecraft", 40, 0, 0);

        if(button == 0){
            gfx_TransparentSprite(playhover, 79, 100);
        } else {
            gfx_TransparentSprite(play, 79, 100);
        }

        if(button == 1){
            gfx_TransparentSprite(optionshover, 79, 140);
        } else {
            gfx_TransparentSprite(options, 79, 140);
        }

        if(button == 2){
            gfx_TransparentSprite(quitgamehover, 79, 180);
        } else {
            gfx_TransparentSprite(quitgame, 79, 180);
        }

        gfx_BlitBuffer();

        kb_Scan();

        if(kb_Data[7]){
            key = kb_Data[7];

            if(key == kb_Up && button>0){
                button--;
            } else if(key == kb_Down && button<2){
                button++;
            }
        }


    } while (kb_Data[6] != kb_Enter);

    if(button == 2)
        exitGame = true;
}

bool checkTag(int blockID, int tagID){
    //return blockTags[blockID][tagID];
    return false;
}

void changeBrightness(){
    if(kb_Data[6]){
        key = kb_Data[6];
        if(key == kb_Mul || key == kb_Div){
            if(key == kb_Mul){
                brightness = min(MAX_LIGHT, brightness+1);
            } else if(key == kb_Div){
                brightness = max(0, brightness-1);
            }

            drawMapToScreen(0,0,0);
        }
    }
}

void drawMapToScreen(int startX, int startY, int startZ){
    int iter = selectionC;

    if(startX == 0 && startY == 0 && startZ == 0){
        gfx_FillScreen(skyColor);
        drawBlockSelection();
    }

    drawMap(startX,startY,startZ,drawAngle);
    
    selectionX = gridToScreenX(selectionA, selectionB);
    selectionY = gridToScreenY(selectionA, selectionB, selectionC);

    while(map[selectionA][selectionB][iter] != AIR && iter<sizeY-1){
        iter++;
    }

    selectionY_tile = gridToScreenY(selectionA, selectionB, iter);

    gfx_GetSprite(behind_selection_box, selectionX, selectionY);
    gfx_GetSprite(behind_selection_tile, selectionX, selectionY_tile);

    gfx_TransparentSprite(selection_box, selectionX, selectionY);
    gfx_TransparentSprite(selection_tile, selectionX, selectionY_tile);

    gfx_BlitBuffer();
}

void generateMap(int mapNum){
    if(mapNum == 0){ //dynamic terrain
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
                i = randInt(0,15);
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
                        if(c<3){
                            if(i>10 && i<=15){
                                map[a][b][c] = GRAVEL;
                            } else {
                                map[a][b][c] = DIRT;
                            }
                        }
                        if(c==3) map[a][b][c] = SAND;
                    } else {
                        map[a][b][c] = AIR;
                        if(c<3){
                            map[a][b][c] = WATER_FULL;
                        } else if(c==3){
                            map[a][b][c] = WATER_SURFACE;
                        }
                    }
                }
                if(i==1){
                    if(heightMap[a][b]<sizeY-1 && map[a][b][heightMap[a][b]]==GRASS_BLOCK){
                        map[a][b][1+heightMap[a][b]] = PINK_FLOWER;
                    }
                }
            }

        }
    } else if(mapNum == 1){ //flat grass world
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                for(c=0; c<sizeY; c++){
                    if(c<2){
                        if(randInt(0,7)==0){
                            map[a][b][c] = COAL_ORE;
                        } else {
                            map[a][b][c] = STONE;
                        }
                    } else if(c==2){
                        map[a][b][c] = DIRT;
                    } else if(c==3){
                        map[a][b][c] = GRASS_BLOCK;
                    } else {
                        map[a][b][c] = AIR;
                    }
                }
            }
        }
    } else if(mapNum == 2){ //empty world
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                for(c=0; c<sizeY; c++){
                    map[a][b][c] = AIR;
                }
            }
        }
    } else if(mapNum == 3){ //floating sand world
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                for(c=0; c<sizeY; c++){
                    if(c==0){
                        map[a][b][c] = STONE;
                    } else if(c==7 && a>3 && b>3){
                        map[a][b][c] = SAND;
                    } else {
                        map[a][b][c] = AIR;
                    }
                }
            }
        }
    } else if(mapNum == 4){ //underground room
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                for(c=0; c<sizeY; c++){
                    if(((a==0 || b==0) && c<sizeY-1) || c==0 || c==sizeY-2){
                        if(randInt(0,7)==0){
                            map[a][b][c] = COAL_ORE;
                        } else {
                            map[a][b][c] = STONE;
                        }
                    } else if(c>0 && c<sizeY-2 && ((a==sizeX-1 && b>0) || (b==sizeZ-1 && a>0))){
                        map[a][b][c] = STONE_25P;
                    }
                }
            }
        }
    }
}

void generateLightMap(){
    bool covered;
    int blockLight, skyLight, currentBlock;

    int scanIter;
    int sky1, sky2, sky3, sky4;
    int block1, block2, block3, block4;

    // Step 1 of Lighting - Assigning light source values
    for(a=0; a<sizeX; a++){
        for(b=0; b<sizeZ; b++){
            covered = false;
            for(c=sizeY-1; c>=0; c--){
                currentBlock = map[a][b][c];

                if(currentBlock >= 100){
                    skyLight = -1;
                    blockLight = -1;

                    covered = true;
                } else {
                    blockLight = 0;

                    if(covered == true){
                        skyLight = 0;
                    } else {
                        skyLight = MAX_LIGHT;
                    }

                    //change this so it uses tags instead or something, instead of checking for different blocks

                    if(currentBlock == TORCH){
                        blockLight = TORCH_LIGHT;
                    } else if(currentBlock == LAVA_FULL || currentBlock == LAVA_SURFACE){
                        blockLight = LAVA_LIGHT;
                    } else if(currentBlock == FIRE){
                        blockLight = FIRE_LIGHT;
                    }

                }

                skyLightMap[a][b][c] = skyLight;
                blockLightMap[a][b][c] = blockLight;
            }
        }
    }

    //Step 2 and 3 of lighting, repeated - scan light map and assign node values based on what's next to them
    //Repeating these steps makes sure light reaches to all areas, such as a winding tunnel
    for(scanIter=0; scanIter<MAX_LIGHT/2; scanIter++){

        //Step 2 - scan through map
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                for(c=0; c<sizeY; c++){
                    if(skyLightMap[a][b][c] == -1 || (skyLightMap[a][b][c] == MAX_LIGHT && blockLightMap[a][b][c] == MAX_LIGHT)) continue;

                    sky1 = skyLightMap[a][b][c];
                    sky2 = 0;
                    sky3 = 0;
                    sky4 = 0;

                    block1 = blockLightMap[a][b][c];
                    block2 = 0;
                    block3 = 0;
                    block4 = 0;

                    if(a>0){
                        sky2 = skyLightMap[a-1][b][c]-1;
                        block2 = blockLightMap[a-1][b][c]-1;
                    }
                    if(b>0){
                        sky3 = skyLightMap[a][b-1][c]-1;
                        block3 = blockLightMap[a][b-1][c]-1;
                    }
                    if(c>0){
                        sky4 = skyLightMap[a][b][c-1]-1;
                        block4 = blockLightMap[a][b][c-1]-1;
                    }

                    skyLightMap[a][b][c] = max(max(sky1, sky2), max(sky3, sky4));
                    blockLightMap[a][b][c] = max(max(block1, block2), max(block3, block4));
                }
            }
        }

        //Step 3 - scan in opposite direction
        for(a=sizeX-1; a>=0; a--){
            for(b=sizeZ-1; b>=0; b--){
                for(c=sizeY-1; c>=0; c--){
                    if(skyLightMap[a][b][c] == -1 || (skyLightMap[a][b][c] == MAX_LIGHT && blockLightMap[a][b][c] == MAX_LIGHT)) continue;

                    sky1 = skyLightMap[a][b][c];
                    sky2 = 0;
                    sky3 = 0;
                    sky4 = 0;

                    block1 = blockLightMap[a][b][c];
                    block2 = 0;
                    block3 = 0;
                    block4 = 0;

                    if(a<sizeX-1){
                        sky2 = skyLightMap[a+1][b][c]-1;
                        block2 = blockLightMap[a+1][b][c]-1;
                    }
                    if(b<sizeZ-1){
                        sky3 = skyLightMap[a][b+1][c]-1;
                        block3 = blockLightMap[a][b+1][c]-1;
                    }
                    if(c<sizeY-1){
                        sky4 = skyLightMap[a][b][c+1]-1;
                        block4 = blockLightMap[a][b][c+1]-1;
                    }

                    skyLightMap[a][b][c] = max(max(sky1, sky2), max(sky3, sky4));
                    blockLightMap[a][b][c] = max(max(block1, block2), max(block3, block4));
                }
            }
        }

    }


}

int max(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}

int min(int n1, int n2){
    return n1 < n2 ? n1 : n2;
}

int calculateBlockLight(int blockX, int blockZ, int blockY){
    return max(0, min(8, blockLightMap[blockX][blockZ][blockY] + skyLightMap[blockX][blockZ][blockY] - worldTime + brightness));
}

void drawMap(int startX, int startZ, int startY, int angle){
    int x1 = 0;
    int x2 = 0;
    int xChange = 0;

    int z1 = 0;
    int z2 = 0;
    int zChange = 0;

    int currentBlock = 0;
    int lightLevel;
    bool flag;
    int edgeLight = max(0, min(8, MAX_LIGHT - worldTime + brightness));

    if(angle == 0){ //from +x, +z (southeast/front corner)

        x1 = startX;
        x2 = sizeX-1;
        xChange = 1;

        z1 = startZ;
        z2 = sizeZ-1;
        zChange = 1;

    } else if(angle == 1){ //from +x, -z (southwest/left corner)

        x1 = startX;
        x2 = sizeX-1;
        xChange = 1;

        z1 = sizeZ-1;
        z2 = startZ;
        zChange = -1;

    } else if(angle == 2){ //from -x, -z (northwest/back corner)

        x1 = sizeX-1;
        x2 = startX;
        xChange = -1;

        z1 = sizeZ-1;
        z2 = startZ;
        zChange = -1;

    } else if(angle == 3){ //from -x, +z (northeast/right corner)

        x1 = sizeX-1;
        x2 = startX;
        xChange = -1;

        z1 = startZ;
        z2 = sizeZ-1;
        zChange = 1;

    }

    for(c=startY; c<sizeY; c++){
        for(a=x1; a!=x2+xChange; a+=xChange){
            for(b=z1; b!=z2+zChange; b+=zChange){
                currentBlock = map[a][b][c];

                if(currentBlock == AIR) continue;
                if(a!=x2 && b!=z2 && c<sizeY-1) if(map[a+xChange][b][c]>=100 && map[a][b+zChange][c]>=100 && map[a][b][c+1]>=100) continue;

                x = gridToScreenX(a,b);
                y = gridToScreenY(a,b,c);

                if(currentBlock == FIRE){
                    /*
                    gfx_GetSprite(behind_fire_0, x, y);
                    */
                    fireInWorld = true;
                    
                    gfx_TransparentSprite(fires[fireNum], x, y);
                } else if(currentBlock == CHEST){
                    gfx_TransparentSprite(chests[chestOpening[a][b][c][1]], x, gridToScreenY(a,b,c+1));
                } else if(currentBlock == STONE_25P){
                    if(a+xChange<0 || a+xChange>sizeX-1){
                        gfx_TransparentSprite(stone_25p_left, x, y);
                    } else if(a+xChange>=0 && a+xChange<sizeX){
                        if(map[a+xChange][b][c] < STONE_25P)
                            gfx_TransparentSprite(stone_25p_left, x, y);
                    }

                    if(b+zChange<0 || b+zChange>sizeZ-1){
                        gfx_TransparentSprite(stone_25p_right, x, y);
                    } else if(b+zChange>=0 && b+zChange<sizeZ){
                        if(map[a][b+zChange][c] < STONE_25P)
                            gfx_TransparentSprite(stone_25p_right, x, y);
                    }

                    if(c+1>sizeY-1){
                        gfx_TransparentSprite(stone_25p_top, x, y);
                    } else if(map[a][b][c+1] < STONE_25P) {
                        gfx_TransparentSprite(stone_25p_top, x, y);
                    }

                } else {
                    gfx_TransparentSprite(blocks[currentBlock], x, y);
                }

                //Draw Shadows
                if(map[a][b][c]>=100){

                    flag = true;

                    if(a+xChange>=0 && a+xChange<sizeX){ //next block is within world range
                        lightLevel = calculateBlockLight(a+xChange, b, c);
                        if(map[a+xChange][b][c]>=STONE_25P)
                            flag = false;
                    } else { //next block is outside world range
                        lightLevel = edgeLight;
                    }

                    if(lightLevel<8 && flag==true){
                        if(drawAngle == 1 || drawAngle == 3){
                            gfx_TransparentSprite(shadowLeft[lightLevel], gridToScreenX(a+xChange, b), gridToScreenY(a+xChange, b, c));
                        } else {
                            gfx_TransparentSprite(shadowRight[lightLevel], gridToScreenX(a+xChange, b), gridToScreenY(a+xChange, b, c));
                        }
                    }

                    flag = true;

                    if(b+zChange>=0 && b+zChange<sizeZ){
                        lightLevel = calculateBlockLight(a, b+zChange, c);
                        if(map[a][b+zChange][c]>=STONE_25P)
                            flag = false;
                    } else {
                        lightLevel = edgeLight;
                    }

                    if(lightLevel<8 && flag==true){
                        if(drawAngle == 1 || drawAngle == 3){
                            gfx_TransparentSprite(shadowRight[lightLevel], gridToScreenX(a, b+zChange), gridToScreenY(a, b+zChange, c));
                        } else {
                            gfx_TransparentSprite(shadowLeft[lightLevel], gridToScreenX(a, b+zChange), gridToScreenY(a, b+zChange, c));
                        }
                    }

                    flag = true;

                    if(c<sizeY-1){
                        lightLevel = calculateBlockLight(a, b, c+1);
                        if(map[a][b][c+1]>=STONE_25P)
                            flag = false;
                    } else {
                        lightLevel = edgeLight;
                    }

                    if(lightLevel<8 && flag==true){
                        gfx_TransparentSprite(shadowFloor[lightLevel], x, gridToScreenY(a, b, c+1));
                    }

                }

                //gfx_BlitBuffer();
                //delay(100);
            }

        }
    }

    fireNum++;
    if(fireNum > 15)
        fireNum = 0;
}

void mapRotationChange(){
    bool flag = false;
    if(kb_Data[6]){
        key = kb_Data[6];
        if(key == kb_Add){
            drawAngle++;
            if(drawAngle > 3)
                drawAngle = 0;
            flag = true;
        } else if(key == kb_Sub){
            drawAngle--;
            if(drawAngle < 0)
                drawAngle = 3;
            flag = true;
        }
    }
    if(flag == true){
        drawMapToScreen(0,0,0);
    }
}

void changeDrawPosition(){
    bool flag = false;
    int change = 5;

    if(kb_Data[1]){
        key = kb_Data[1];
        if(key == kb_Mode){
            midY -= change;
            flag = true;
        }
    } else if(kb_Data[2]){
        key = kb_Data[2];
        if(key == kb_Alpha){
            midX -= change;
            flag = true;
        }
    } else if(kb_Data[3]){
        key = kb_Data[3];
        if(key == kb_GraphVar){
            midY += change;
            flag = true;
        }
    } else if(kb_Data[4]){
        key = kb_Data[4];
        if(key == kb_Stat){
            midX += change;
            flag = true;
        }
    }

    if(flag == true){
        drawMapToScreen(0,0,0);
    }
}

void drawCoordinates(){
    gfx_SetColor(1);
    gfx_FillRectangle_NoClip(0,0,30,30);

    gfx_SetTextXY(1,1);
    gfx_PrintInt((int)playerGridA, 3);
    gfx_SetTextXY(1,11);
    gfx_PrintInt((int)playerGridB, 3);
    gfx_SetTextXY(1,21);
    gfx_PrintInt((int)playerGridC, 3);
}

void drawBlockSelection(){
    gfx_SetColor(0);
    gfx_FillRectangle_NoClip(0,193,36,51);

    gfx_SetColor(4);
    gfx_Line(0,193,36,193);
    gfx_Line(36,193,36,240);

    if(blockSelection == OAK_DOOR_SOUTH_BOTTOM || blockSelection == OAK_DOOR_SOUTH_TOP){
        gfx_TransparentSprite(oak_door_south, 4, 193);
    } else if(blockSelection == OAK_DOOR_EAST_2_BOTTOM || blockSelection == OAK_DOOR_EAST_2_TOP){
        gfx_TransparentSprite(oak_door_east_2, 4, 193);
    } else if(blockSelection == CHEST){
        gfx_TransparentSprite(chest_1, 4, 193);
    } else {
        gfx_TransparentSprite(blocks[blockSelection], 4, 208);
    }
}

void playerMovement(){
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

        gfx_Sprite(behind_character, playerX, playerY);

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


        playerX = gridToScreenX(playerGridA, playerGridB);
        playerY = gridToScreenY(playerGridA, playerGridB, playerGridC);

        gfx_GetSprite(behind_character, playerX, playerY);

        character = playerDirection;
        //+ alternate;

        drawCoordinates();

        gfx_TransparentSprite(character_sprites[character], playerX, playerY);

        drawMap((int)playerGridA+1, (int)playerGridB+1, (int)playerGridC, drawAngle);

        gfx_BlitBuffer();

        //delay(50);

    }
}

void selectionMovement(){
    int iter = selectionC;
    i = 0;
    if(kb_Data[7] && frameCount2 == 0){
        key = kb_Data[7];
        if(key == kb_Down && selectionA<sizeX-1){
            selectionA++;
            i = 1;
        }
        if(key == kb_Left && selectionB>0){
            selectionB--;
            i = 1;
        }
        if(key == kb_Right && selectionB<sizeZ-1){
            selectionB++;
            i = 1;
        }
        if(key == kb_Up && selectionA>0){
            selectionA--;
            i = 1;
        }
    } else if(kb_Data[1]){
        key = kb_Data[1];
        if(key == kb_Trace && selectionC>0 && frameCount2==0){
            selectionC--;
            i = 1;
        }
        if(key == kb_Graph && selectionC<sizeY-1 && frameCount2==0){
            selectionC++;
            i = 1;
        }
    };

    if(kb_Data[7] || (kb_Data[1] && (kb_Trace || kb_Graph))){
        frameCount2++;
        if(frameCount2 > 100) frameCount2 = 0;
    } else {
        frameCount2 = 0;
    }

    if(i==1){

        gfx_BlitScreen();

        gfx_Sprite(behind_selection_box, selectionX, selectionY);
        gfx_Sprite(behind_selection_tile, selectionX, selectionY_tile);

        selectionX = gridToScreenX(selectionA, selectionB);
        selectionY = gridToScreenY(selectionA, selectionB, selectionC);

        while(map[selectionA][selectionB][iter] != AIR && iter<sizeY-1){
            iter++;
        }

        selectionY_tile = gridToScreenY(selectionA, selectionB, iter);

        gfx_GetSprite(behind_selection_box, selectionX, selectionY);
        gfx_GetSprite(behind_selection_tile, selectionX, selectionY_tile);

        gfx_TransparentSprite(selection_box, selectionX, selectionY);
        gfx_TransparentSprite(selection_tile, selectionX, selectionY_tile);

        gfx_BlitBuffer();
    }
}

void blockSelectionChange(){
    if (kb_Data[1]){
        key = kb_Data[1];
        if(key == kb_Yequ || key == kb_Window){
            if(key == kb_Yequ){
                i = -1;
            } else {
                i = 1;
            }

            if(frameCount == 0){
                do {
                    blockSelection += i;
                    if(blockSelection > 111) blockSelection = 0;
                    if(blockSelection < 0) blockSelection = 111;

                    if(blockSelection == OAK_DOOR_SOUTH_TOP)
                        blockSelection += i;
                    if(blockSelection == OAK_DOOR_EAST_2_TOP)
                        blockSelection += i;

                } while(blocks[blockSelection] == NULL);
                drawBlockSelection();
                gfx_BlitBuffer();
            }
            frameCount++;
            if(frameCount>250) frameCount = 0;
        }
    } else {
        frameCount = 0;
    }
}

void blockPlacement(){
    int prevBlock;

    if(kb_Data[1]){
        key = kb_Data[1];

        if(key == kb_2nd || key == kb_Del){
            i = blockSelection;
            if(key == kb_Del) i = AIR;

            if(map[selectionA][selectionB][selectionC] != i){
                prevBlock = map[selectionA][selectionB][selectionC];

                map[selectionA][selectionB][selectionC] = i;

                if(selectionC>0){
                    if(map[selectionA][selectionB][selectionC-1] == OAK_DOOR_SOUTH_BOTTOM || map[selectionA][selectionB][selectionC-1] == OAK_DOOR_EAST_2_BOTTOM)
                        map[selectionA][selectionB][selectionC-1] = AIR;
                }
                if(selectionC<sizeY-1){
                    if(map[selectionA][selectionB][selectionC+1] == OAK_DOOR_SOUTH_TOP || map[selectionA][selectionB][selectionC+1] == OAK_DOOR_EAST_2_TOP)
                        map[selectionA][selectionB][selectionC+1] = AIR;
                }

                if(selectionC<sizeY-2){
                    if(i == OAK_DOOR_SOUTH_BOTTOM || i == OAK_DOOR_EAST_2_BOTTOM){
                        if(map[selectionA][selectionB][selectionC+1] == OAK_DOOR_SOUTH_BOTTOM || map[selectionA][selectionB][selectionC+1] == OAK_DOOR_EAST_2_BOTTOM)
                            map[selectionA][selectionB][selectionC+2] = AIR;
                    }
                }

                if(i == OAK_DOOR_SOUTH_BOTTOM){
                    if(selectionC<sizeY-1)
                        map[selectionA][selectionB][selectionC+1] = OAK_DOOR_SOUTH_TOP;
                } else if(i == OAK_DOOR_EAST_2_BOTTOM){
                    if(selectionC<sizeY-1)
                        map[selectionA][selectionB][selectionC+1] = OAK_DOOR_EAST_2_TOP;
                }

                if(i == AIR){
                    if(selectionC < sizeY-1){
                        if(map[selectionA][selectionB][selectionC+1] == OAK_DOOR_SOUTH_TOP || map[selectionA][selectionB][selectionC+1] == OAK_DOOR_EAST_2_TOP)
                            map[selectionA][selectionB][selectionC+1] = AIR;
                    }
                    if(selectionC > 0) {
                        if(map[selectionA][selectionB][selectionC-1] == OAK_DOOR_SOUTH_BOTTOM || map[selectionA][selectionB][selectionC-1] == OAK_DOOR_EAST_2_BOTTOM)
                            map[selectionA][selectionB][selectionC-1] = AIR;
                    }
                }

                generateLightMap();

                drawMapToScreen(0,0,0);

                updateSurroundingBlocks(selectionA, selectionB, selectionC);
            }
        }
    }
}

int gridToScreenX(int gridX, int gridZ){
    int x = gridX;

    if(drawAngle == 1){
        gridX = 7-gridZ;
        gridZ = x;
    } else if(drawAngle == 2){
        gridX = 7-gridX;
        gridZ = 7-gridZ;
    } else if(drawAngle == 3){
        gridX = gridZ;
        gridZ = 7-x;
    }

    return midX-(gridX*12)+(gridZ*12);

}

int gridToScreenY(int gridX, int gridZ, int gridY){
    int x = gridX;

    if(drawAngle == 1){
        gridX = 7-gridZ;
        gridZ = x;
    } else if(drawAngle == 2){
        gridX = 7-gridX;
        gridZ = 7-gridZ;
    } else if(drawAngle == 3){
        gridX = gridZ;
        gridZ = 7-x;
    }

    return midY+(gridZ*6)+(gridX*6)-(gridY*15)+gridY;

}

void blockPhysics(){
    int blockX, blockZ, blockY;

    for(j=0; j<fallingBlocksSize; j++){
        if(fallingBlocks[j][0] != -1){
            blockX = fallingBlocks[j][2];
            blockZ = fallingBlocks[j][3];
            blockY = fallingBlocks[j][4];


            if(blockY > 0){
                if(map[blockX][blockZ][blockY-1] == AIR){
                    map[blockX][blockZ][blockY] = AIR;
                    if(fallingBlocks[j][5] == 0)
                        updateSurroundingBlocks(blockX, blockZ, blockY);

                    if(blockY+1<sizeY){
                        if(map[blockX][blockZ][blockY+1] == SAND || map[blockX][blockZ][blockY+1] == GRAVEL)
                            addFallingBlock(blockX, blockZ, blockY+1, 1);
                    }

                    fallingBlocks[j][4] -= fallingBlocks[j][1];

                    fallingBlocks[j][5]++;

                    map[blockX][blockZ][blockY-1] = fallingBlocks[j][0];
                } else {
                    removeFallingBlock(j);
                    updateSurroundingBlocks(blockX, blockZ, blockY);
                }
            } else {
                removeFallingBlock(j);
                updateSurroundingBlocks(blockX, blockZ, blockY);
            }

           drawMapToScreen(0,0,0);

        }
    }
}

void addFallingBlock(int blockX, int blockZ, int blockY, int velocity){

    int index = 0;
    while(fallingBlocks[index][0] != -1) index++;

    fallingBlocks[index][0] = map[blockX][blockZ][blockY]; //block ID
    fallingBlocks[index][1] = velocity;
    fallingBlocks[index][2] = blockX;
    fallingBlocks[index][3] = blockZ;
    fallingBlocks[index][4] = blockY;

    fallingBlocks[index][5] = 0;
}

void removeFallingBlock(int index){

    fallingBlocks[index][0] = -1;
    fallingBlocks[index][1] = -1;
    fallingBlocks[index][2] = -1;
    fallingBlocks[index][3] = -1;
    fallingBlocks[index][4] = -1;

    fallingBlocks[index][5] = 0;

}

void updateSurroundingBlocks(int blockX, int blockZ, int blockY){

    if(blockY>1){
        if(map[blockX][blockZ][blockY-1] == SAND || map[blockX][blockZ][blockY-1] == GRAVEL){
            if(map[blockX][blockZ][blockY-2] == AIR)
                addFallingBlock(blockX, blockZ, blockY-1, 1);
        }
    }

    if(blockX>0){
        if(map[blockX-1][blockZ][blockY] == SAND || map[blockX-1][blockZ][blockY] == GRAVEL){
            if(blockY>0){
                if(map[blockX-1][blockZ][blockY-1] == AIR)
                    addFallingBlock(blockX-1, blockZ, blockY, 1);
            }
        }
    }

    if(blockZ>0){
        if(map[blockX][blockZ-1][blockY] == SAND || map[blockX][blockZ-1][blockY] == GRAVEL){
            if(blockY>0){
                if(map[blockX][blockZ-1][blockY-1] == AIR)
                    addFallingBlock(blockX, blockZ-1, blockY, 1);
            }
        }
    }

    if(map[blockX][blockZ][blockY] == SAND || map[blockX][blockZ][blockY] == GRAVEL){
        if(blockY>0){
            if(map[blockX][blockZ][blockY-1] == AIR){
                addFallingBlock(blockX, blockZ, blockY, 1);
            }
        }
    }

    if(blockZ<sizeZ-1){
        if(map[blockX][blockZ+1][blockY] == SAND || map[blockX][blockZ+1][blockY] == GRAVEL){
            if(blockY>0){
                if(map[blockX][blockZ+1][blockY-1] == AIR)
                    addFallingBlock(blockX, blockZ+1, blockY, 1);
            }
        }
    }

    if(blockX<sizeX-1){
        if(map[blockX+1][blockZ][blockY] == SAND || map[blockX+1][blockZ][blockY] == GRAVEL){
            if(blockY>0){
                if(map[blockX+1][blockZ][blockY-1] == AIR)
                    addFallingBlock(blockX+1, blockZ, blockY, 1);
            }
        }
    }

    if(blockY<sizeY-1){
        if(map[blockX][blockZ][blockY+1] == SAND || map[blockX][blockZ][blockY+1] == GRAVEL){
            if(blockY>0){
                if(map[blockX][blockZ][blockY] == AIR)
                    addFallingBlock(blockX, blockZ, blockY+1, 1);
            }
        }
    }
}

void print_string_centered(char *str, int y, int offset, uint8_t c) {
    gfx_SetTextFGColor(c);
    gfx_PrintStringXY(str, (LCD_WIDTH - gfx_GetStringWidth(str)) / 2 + offset, y);
}