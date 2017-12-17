# include"acllib.h"
# include<stdio.h>

void mouseListener(int x,int y,int button,int event)
{
	static int ox =0;
	static int oy =0;
	printf("x=%d,y=%d,button=%d,event=%d\n",x,y,button,event);
	static int cntb=0;
	static int cnte=0;
	beginPaint();
	if(button-cntb==1 && event-cnte ==0){
		line(ox,oy,x,y);
		cntb=4;
		cnte=5;
	}else{
		cntb=0;
		cnte=0;
	}
	endPaint();
	ox=x;
	oy=y;
}

void keyListener(int key,int event)
{
	printf("key=%d,event=%d\n",key,event);
}

void timerListener(int id)
{
	static int cnt=0;
	printf("Id=%d\n",id);
	if (id==0)
	{
		cnt++;
		if(cnt==5)
			cancelTimer(0);
	 } 
}
int Setup()
{
	initWindow("test",DEFAULT,DEFAULT,800,600);
	initConsole();
	printf("hello\n");
	int x;
	registerTimerEvent(timerListener);
	registerMouseEvent(mouseListener);
	registerKeyboardEvent(keyListener);
	startTimer(0,500);
	startTimer(1,500);
	
	beginPaint();
	line(10,10,100,100);
	
	endPaint();
	
	return 0;
}


