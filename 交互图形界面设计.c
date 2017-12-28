# include "acllib.h"
# include <stdio.h>

int setup()
{
	iniWindow("Test",DEFAULT,DEFAULT,800,600);
	initConsle();
	printf("hello\n");
	int x;
	
	beginPaint();
	line(10,10,100,100);
	endPaint();
	
	return 0;
		
 } 
