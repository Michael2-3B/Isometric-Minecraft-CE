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
void generateMap();
void drawMap();

/* Put all your globals here */

gfx_sprite_t *blocks[15] = {
    /* 000 */ brick_stairs_east,
    /* 001 */ brick,
    /* 002 */ coal_ore,
    /* 003 */ dirt,
    /* 004 */ grass_block,
    /* 005 */ stone_brick_stairs_east,
    /* 006 */ stone_brick,
    /* 007 */ stone,
    /* 008 */ glass_pane,
    /* 009 */ glass_block,
    /* 010 */ water_surface,
    /* 011 */ water_full,
    /* 012 */ stone_brick_2,
    /* 013 */ stone_brick_stairs_east_2,
    /* 014 */ stone_stairs_east
    /* 015 */ 
    /* 016 */ 
    /* 017 */ 
    /* 018 */ 
    /* 019 */ 
    /* 020 */ 
    /* 021 */ 
    /* 022 */ 
    /* 023 */ 
    /* 024 */ 
    /* 025 */ 
    /* 026 */ 
    /* 027 */ 
    /* 028 */ 
    /* 029 */ 
    /* 030 */ 
    /* 031 */ 
};

int a, b, c, i, x, y;

int midX = 160;
int midY = 120;

int sizeX = 8;
int sizeZ = 8;
int sizeY = 10;

int scale1 = 13;
int scale2 = 15;

int map[8][8][10];

void main(void) {
    /* Fill in the body of the main function here */
    srand(rtc_Time(NULL));

    generateMap();

    gfx_Begin();
    gfx_SetPalette(logo_gfx_pal, sizeof_logo_gfx_pal, 0);
    
    drawMap();

	while (!os_GetCSC());

    gfx_End();
}

/* Put other functions here */

void generateMap(){
    //does not generate dynamic terrain yet

    for(a=0; a<sizeX; a++){
        for(b=0; b<sizeZ; b++){
            for(c=0; c<sizeY; c++){
                if(c<3){
                    i = rand()%8;
                    if(i==0){
                        map[a][b][c] = 2;
                    } else {
                        map[a][b][c] = 7;
                    }
                } else if(c==3){
                    map[a][b][c] = 3;
                } else if(c==4){
                    map[a][b][c] = 3;
                    if(!(a>0 && a<6 && b>0 && b<6)){
                        map[a][b][c] = 4;
                    }
                } else {
                    map[a][b][c] = -1;
                }
            }
        }
    }

    //0 brick stairs east
    //1 brick
    //2 coal ore
    //3 dirt
    //4 grass
    //5 stone brick stairs east
    //6 stone brick
    //7 stone
    //8 glass pane
    //9 glass block
    //10 water surface
    //11 water full
    //12 stone brick (alternating block)
    //13 stone brick stairs east (alternating block)
    //14 stone stairs east

    //air blocks
    map[1][7][4] = -1;
    map[4][7][4] = -1;

    //water
    for(a=6; a<=7; a++){
        for(b=1; b<=7; b++){
            for(c=1; c<=4; c++){
                map[a][b][c] = 11;
                if(c==4)
                    map[a][b][c] = 10;
            }
        }
    }

    //floating water
    map[0][7][8] = 10;

    //floating glass block, glass pane
    map[7][0][7] = 9;
    map[7][0][8] = 8;


    //structure design

    //floor
    for(b=1; b<=5; b++){
        for(a=1; a<=5; a++){
            if((a+b+5)%2==0){
                map[a][b][5] = 12;
            } else {
                map[a][b][5] = 6;
            }
        }
    }

    //stairs
    map[2][6][5] = 5;
    map[3][6][5] = 13;
    map[4][6][5] = 5;

    map[2][7][4] = 5;
    map[3][7][4] = 13;
    map[4][7][4] = 5;

    //pillars
    for(c=6; c<=9; c++){
        map[1][1][c] = 6;
        map[5][1][c] = 6;
        map[1][5][c] = 6;
    }

    //crossbeams
    map[4][1][9] = 12;
    map[3][1][9] = 6;
    map[2][1][9] = 12;
    map[1][2][9] = 12;
    map[1][3][9] = 6;
    map[1][4][9] = 12;

    //windows
    for(c=6; c<9; c++){
        map[4][1][c] = 9;
        map[3][1][c] = 9;
        map[2][1][c] = 9;

        map[1][2][c] = 8;
        map[1][3][c] = 8;
        map[1][4][c] = 8;
    }

    //stair on top of structure
    map[1][5][9] = 5;
}


void drawMap(){
    for(c=0; c<sizeY; c++){
        for(a=0; a<sizeX; a++){
            for(b=0; b<sizeZ; b++){
                x = midX-(a*12)+(b*12);
                y = midY+(b*6)+(a*6)-(c*15)+c;
                if(map[a][b][c] >= 0) gfx_TransparentSprite(blocks[map[a][b][c]], x, y);
                //while (!os_GetCSC());
            }

        }
    }
}
