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
void removeFallingBlock(int blockX, int blockZ, int blockY, int index);
void updateSurroundingBlocks(int blockX, int blockZ, int blockY);
void print_string_centered(char *str, int y, int offset, uint8_t c);

/* Put all your globals here */

kb_key_t key;
gfx_TempSprite(behind_character, 27, 43);
gfx_TempSprite(behind_selection, 27, 29);

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
    /* 098 */ shadow_25percent,
    /* 099 */ shadow_50percent,
    /* 100 */ brick,
    /* 101 */ coal_ore,
    /* 102 */ stone,
    /* 103 */ dirt,
    /* 104 */ grass_block,
    /* 105 */ stone_brick,
    /* 106 */ stone_brick_2,
    /* 107 */ oak_log,
    /* 108 */ oak_planks,
    /* 109 */ sand,
    /* 110 */ gravel,
    /* 111 */ cobblestone
};

#define SHADOW_25 98
#define SHADOW_50 99

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
#define SAND 109
#define GRAVEL 110
#define COBBLESTONE 111

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

int a, b, c, i, j, x, y;
int direction;
int alternate = 0;

const int midX = 146;
//const int midY = -30; //for 36x36map
const int midY = 120; //for 8x8 map

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

int blockSelection = BRICK;
int frameCount = 0;
int frameCount2 = 0;

int selectionA = 7;
int selectionB = 7;
int selectionC = 0;

int selectionX, selectionY;

void main(void) {
    /* Fill in the body of the main function here */
    srand(rtc_Time(NULL));

    gfx_Begin();
    gfx_SetDrawBuffer();

    gfx_BlitScreen();

    gfx_SetTextScale(1,1);
    gfx_SetPalette(logo_gfx_pal, sizeof_logo_gfx_pal, 0);

    gfx_FillScreen(5);

    generateMap(1); //world 1 is a flat grass world - 2 layers of stone/coal, 1 layer of dirt, 1 layer of grass
    //DO NOT LOAD MAP 3. IT IS A FLOATING SAND WORLD AND IF YOU MESS WITH THE SAND YOU WILL (CURRENTLY) GET A RAM CLEAR

    drawMap(0,0,0);

    playerX = gridToScreenX(playerGridA, playerGridB);
    playerY = gridToScreenY(playerGridA, playerGridB, playerGridC);

    selectionX = gridToScreenX(selectionA, selectionB);
    selectionY = gridToScreenY(selectionA, selectionB, selectionC);

    //gfx_GetSprite(behind_character, playerX, playerY);
    //gfx_TransparentSprite(character_sprites[character], playerX, playerY);

    gfx_GetSprite(behind_selection, selectionX, selectionY);
    gfx_TransparentSprite(selection_box, selectionX, selectionY);

    //drawCoordinates();
    drawBlockSelection();

    gfx_BlitBuffer();

    do{
        kb_Scan();

        blockSelectionChange();

        selectionMovement();

        blockPlacement();

        blockPhysics();

        //playerMovement();

    } while (kb_Data[6] != kb_Enter);


    gfx_End();
}

/* Put other functions here */

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
                    } else if(c==1 && a>3 && b>3){
                        map[a][b][c] = SHADOW_50;
                    } else if(c==7 && a>3 && b>3){
                        map[a][b][c] = SAND;
                    } else {
                        map[a][b][c] = AIR;
                    }
                }
            }
        }
    }
}


void drawMap(int startX, int startZ, int startY){
    for(c=startY; c<sizeY; c++){
        for(a=startX; a<sizeX; a++){
            for(b=startZ; b<sizeZ; b++){
                if(map[a][b][c] == NULL) continue;
                if(a<sizeX-1 && b<sizeZ-1 && c<sizeY-1) if(map[a+1][b][c]>=100 && map[a][b+1][c]>=100 && map[a][b][c+1]>=100) continue;

                x = gridToScreenX(a,b);
                y = gridToScreenY(a,b,c);
                gfx_TransparentSprite(blocks[map[a][b][c]], x, y);

                //gfx_BlitBuffer();
                //delay(100);
            }

        }
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
    gfx_FillRectangle_NoClip(0,204,36,36);


    gfx_SetColor(4);
    gfx_Line(0,204,36,204);
    gfx_Line(36,204,36,240);

    gfx_TransparentSprite(blocks[blockSelection], 4, 208);
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

        drawMap((int)playerGridA+1, (int)playerGridB+1, (int)playerGridC);

        gfx_BlitBuffer();

        //delay(50);

    }
}

void selectionMovement(){
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

        gfx_Sprite(behind_selection, selectionX, selectionY);

        selectionX = gridToScreenX(selectionA, selectionB);
        selectionY = gridToScreenY(selectionA, selectionB, selectionC);

        gfx_GetSprite(behind_selection, selectionX, selectionY);

        gfx_TransparentSprite(selection_box, selectionX, selectionY);

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
    if(kb_Data[1]){
        key = kb_Data[1];

        if(key == kb_2nd || key == kb_Del){
            i = blockSelection;
            if(key == kb_Del) i = AIR;

            if(map[selectionA][selectionB][selectionC] != i){
                map[selectionA][selectionB][selectionC] = i;

                if(selectionC>0){
                    if(map[selectionA][selectionB][selectionC-1] == AIR){
                        j=selectionC-1;
                        while(map[selectionA][selectionB][j] == AIR && j>-1) j--;

                        map[selectionA][selectionB][j+1] = SHADOW_50;
                    }
                    
                }

                gfx_FillScreen(5);
                drawMap(0,0,0);
                drawBlockSelection();
                
                selectionX = gridToScreenX(selectionA, selectionB);
                selectionY = gridToScreenY(selectionA, selectionB, selectionC);

                gfx_GetSprite(behind_selection, selectionX, selectionY);

                gfx_TransparentSprite(selection_box, selectionX, selectionY);

                gfx_BlitBuffer();

                updateSurroundingBlocks(selectionA, selectionB, selectionC);

                /*
                //falling blocks
                if(i==AIR && selectionC<sizeY-1){
                    if(map[selectionA][selectionB][selectionC+1] == SAND || map[selectionA][selectionB][selectionC+1] == GRAVEL){
                        //deleted a block, so now updating surrounding blocks

                        updateSurroundingBlocks(selectionA, selectionB, selectionC);
                    }
                } else if((i==SAND || i==GRAVEL) && selectionC>0){
                    if(map[selectionA][selectionB][selectionC-1] == AIR){
                        //placed a gravity block
                        addFallingBlock(selectionA, selectionB, selectionC, 1);

                        updateSurroundingBlocks()
                    }
                }
                */
            }
        }
    }
}

int gridToScreenX(int gridX, int gridZ){
    return midX-(gridX*12)+(gridZ*12);
}

int gridToScreenY(int gridX, int gridZ, int gridY){
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
                    removeFallingBlock(blockX, blockZ, blockY, j);
                    updateSurroundingBlocks(blockX, blockZ, blockY);
                }
            } else {
                removeFallingBlock(blockX, blockZ, blockY, j);
                updateSurroundingBlocks(blockX, blockZ, blockY);
            }

            gfx_FillScreen(5);
            drawMap(0,0,0);
            drawBlockSelection();

            selectionX = gridToScreenX(selectionA, selectionB);
            selectionY = gridToScreenY(selectionA, selectionB, selectionC);
            gfx_GetSprite(behind_selection, selectionX, selectionY);

            gfx_TransparentSprite(selection_box, selectionX, selectionY);
            gfx_BlitBuffer();
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

void removeFallingBlock(int blockX, int blockZ, int blockY, int index){

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