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
 int Setup()
 {
 initWindow("test",DEFAULT,DEFAULT,800,600);
 initConsole();
 printf("»­°®ÐÄ\n");
 int x;
 
 registerMouseEvent(mouseListener);
 beginPaint();
 
 
 endPaint();

return 0;
 }


