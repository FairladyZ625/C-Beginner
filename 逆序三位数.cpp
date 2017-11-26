# include<stdio.h>
int main () 
{
	int a,b,c,t,d ;
	scanf("%d",&a) ;
	b=a/100;
	c=(a%100)/10;
	t=a-b*100-c*10 ;
	d=t*100+c*10+b;
	printf("%d",d); 
	return 0;
}
