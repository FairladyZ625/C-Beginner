# include<stdio.h>

int day(int y,int m, int d);

bool isleap(int y);

int main()
{
	int mm,dd,yy,days;
	scanf("%d %d %d",&yy,&mm,&dd);
	days=day(yy,mm,dd);
	printf("%d",days);
	return 0;
}

bool isleap(int y)
{
	bool leap=false;
	if ( (y %4 == 0 && y %100 != 0) || y%400 == 0 )
		leap = true;
	return leap;
}

int day(int y, int m,int d)
{
	int days;
	int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if (m==2 && isleap(y)){
		dayspermonth[1]=29;
	}
	if(m==1) return d;
	for(int i=1;i<m;i++){
		days=days+dayspermonth[i-1];
	}
	days=days+d;
	return days;
}


