#include<stdio.h>
int main()
{
	int total,bjt,time;
	int a,b,c,d;
	int hour,min;
	int out;
	scanf("%d %d",&bjt,&time);
	a=bjt/1000;
	b=(bjt%1000)/100;
	c=(bjt-a*1000-b*100)/10;
	d=(bjt-a*1000-b*100-c*10);
	hour=a*10+b;
	min=c*10+d;
	total=hour*60+min;
	out=total+time;
	hour=out/60;
	min=out%60;

	printf("%d%d",hour,min);
	return 0; 
	
}
