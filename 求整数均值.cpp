#include<stdio.h>
int main()
{
	float a,b,c,d;
	float average;
	int sum ;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	sum=a+b+c+d;
	average=(sum/4.0);
	printf("Sum = %d; Average = %.1f",sum,average);
	return 0 ;	
}
