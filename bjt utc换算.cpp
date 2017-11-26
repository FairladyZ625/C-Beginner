# include<stdio.h>
int main()
{
	int bjt,utc;
	int a,b,c,d; //Ç§°ÙÊ®¸ö
	int hour,min,hour1,min1;
	int total; 
	scanf("%d",&bjt);
	a=bjt/1000;
	b=(bjt%1000)/100;
	c=(bjt-a*1000-b*100)/10;
	d=(bjt-a*1000-b*100-c*10);
	hour=a*10+b;
	min=c*10+d;
	total=hour*60+min;
	if (hour>=8)
		{
	
	
		total=total-480;
		hour1=total/60;
		min1=total % 60;
		if (hour1==0){
			printf("%d",min1);
		}
		else{
			if(min1<10)
			{
				printf("%d0%d",hour1,min1);
			}
			else{
			printf("%d%d",hour1,min1);
		}
		}
		
		
		}
	if (hour<8)
	{
		total=total+1440-480;
		hour1=total/60;
		min1=total%60;
		if(min<10)
		{
			printf("%d0%d",hour1,min1);
		}
		else
		{
			printf("%d%d",hour1,min1);
		}
		
	}
	
return 0;	
}
