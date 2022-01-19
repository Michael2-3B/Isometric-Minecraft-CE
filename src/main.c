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

/* Put your function prototypes here */

/* Put all your globals here */
kb_key_t key;
int a, b, c, i, s, t, x, y;

int points[12];

int pause = 0;
int size = 16;
int scale = 1;

//8, 140
//16, 160
//32, 212

int c1,c2,c3;
int s1,s2,s3,s4,s5,s6;

int map[256];
int height, height2, temp, temp2;

void main(void) {
    /* Fill in the body of the main function here */

    height = rand()%5-rand()%10;
    for(a=0; a<size; a++){
    	height2 = height;
    	temp = height;
    	for(b=0; b<size; b++){
    		map[size*a+b] = height2;
    		height2 += -1+rand()%2;
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
    	height = temp + (-1+rand()%2);
    }

    c1 = 127;
	c2 = 0;
	c3 = 127;

    gfx_Begin();
    gfx_SetDefaultPalette(0);

    gfx_SetColor(0);

    for(a=size; a>0; a--){
    	s = 140-(a*3);
    	t = 160-(a*6);
    	for(b=size; b>0; b--){
    		for(c=20; c>=0; c--){
	    		x = t+(b*6);
	    		y = s-(b*3)-(6*map[size*(size-a)+(size-b)])+(6*c);

	    		c1 = 35;
	    		c2 = 35;
	    		c3 = 0;

	    		s1 = 30;
	    		s2 = 30;
	    		s3 = 0;

	    		s4 = 40;
	    		s5 = 40;
	    		s6 = 0;

	    		if(c<3){
	    			c1 = 50;
	    			c2 = 100;
	    			c3 = 50;

	    			s1 = 40;
	    			s2 = 90;
	    			s3 = 40;

	    			s4 = 60;
	    			s5 = 110;
	    			s6 = 60;
	    		}

	    		/*
	    		c1 = rand()%255;
	    		c2 = rand()%255;
	    		c3 = rand()%255;
	    		*/

	    		//bottom front vertex
	    		points[0] = x;
	    		points[1] = y+6;

	    		//bottom left vertex
	    		points[2] = x-6;
	    		points[3] = y+3;

	    		//top left vertex
	    		points[4] = x-6;
	    		points[5] = y-3;

	    		//top back vertex
	    		points[6] = x;
	    		points[7] = y-6;

	    		//top right vertex
	    		points[8] = x+6;
	    		points[9] = y-3;

	    		//bottom right vertex
	    		points[10] = x+6;
	    		points[11] = y+3;

	    		gfx_SetColor(gfx_RGBTo1555(c1,c2,c3));
	    		gfx_FillRectangle(x-2,y-5,6,11);
	    		gfx_FillRectangle(x-5,y-3,11,7);

	    		if(pause==1) while (!os_GetCSC());

	    		gfx_SetColor(0);
	    		gfx_Polygon(points,6);

	    		if(pause==1) while (!os_GetCSC());

	    		gfx_Line(x,y+6,x,y);
	    		gfx_Line(x-6,y-3,x,y);
	    		gfx_Line(x+6,y-3,x,y);

	    		if(pause==1) while (!os_GetCSC());

	    		if(y+2<239){
	    			gfx_FloodFill(x-3,y+2,gfx_RGBTo1555(s1,s2,s3));
	    			gfx_FloodFill(x+3,y+2,gfx_RGBTo1555(s4,s5,s6));
	    		}

	    	}

    	}
    }

	while (!os_GetCSC());
    gfx_End();
}

/* Put other functions here */
