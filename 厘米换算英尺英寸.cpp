# include<stdio.h>
int main()
{
	float cm ;
	float all;
	int foot,inch;
	scanf("%f",&cm);
	all=(cm/100.0)/0.3048;
	foot=all/1;
	inch=(all-foot)*12/1;
	printf("%d %d",foot,inch);
	return 0;	
 } 
