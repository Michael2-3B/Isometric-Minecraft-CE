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

/* Put all your globals here */
kb_key_t key;
int a, b, c, i, s, t, x, y;

int size = 8;

int scale = 2;
int scale1;
int scale2;

int map[64];
int height, height2, temp, temp2;

void main(void) {
    /* Fill in the body of the main function here */
    srand(rtc_Time(NULL));

    scale1 = 3*scale;
	scale2 = 6*scale;

	/*
    height = 5;
    for(a=0; a<size; a++){
    	height2 = height;
    	temp = height;
    	for(b=0; b<size; b++){
    		map[size*a+b] = height2;
    		height2 += (1-rand()%4);
    		if(a>0){
    			temp2 = map[(size*a+b)-size];
    			if(abs(height2-temp2)>1){
    				if(height2>temp2)
    					height2 = temp2+1;
    				if(height2<temp2)
    					height2 = temp2-1;
    			}
    		}
    	}
    	height = temp + (1-rand()%4);
    }
    */

    for(a=0; a<size; a++){
    	for(b=0; b<size; b++){
    		map[size*a+b] = 5;
    	}
    }

    gfx_Begin();
    gfx_SetPalette(logo_gfx_pal, sizeof_logo_gfx_pal, 0);


    for(a=size; a>0; a--){
    	s = 200-(a*scale1);
    	t = 160-(a*scale2);
    	for(b=size; b>0; b--){

    		i = rand()%10;
    		
    		for(c=20; c>=0; c--){
	    		x = t+(b*scale2)-scale2;
	    		y = s-(b*scale1)-(scale2*map[size*(size-a)+(size-b)])+(scale2*c)-scale2;

	    		if(c==3 && a>2 && a<6){
	    			gfx_TransparentSprite(water, x, y);
	    		} else {
		    		if(c>5) gfx_TransparentSprite(stone, x, y);
		    		if(c<6 && c>3) gfx_TransparentSprite(dirt, x, y);
		    		if(c==3) gfx_TransparentSprite(grass_block, x, y);
		    		if(a<3 || a>5){
		    			if(c==2){
			    			if(i!=0) gfx_TransparentSprite(grass, x, y);
			    			if(i==0) gfx_TransparentSprite(log, x, y);
			    			if(i==1) gfx_TransparentSprite(pebbles, x, y);
		    			}
		    		}
		    	}

	    	}

    		/*
	    	x = t+(b*scale2)-scale2;
	    	y = s-(b*scale1)-(scale2*map[size*(size-a)+(size-b)])-scale2;

	    	gfx_TransparentSprite(grass_block,x,y);
	    	*/

    	}
    }

	while (!os_GetCSC());
    gfx_End();
}

/* Put other functions here */
