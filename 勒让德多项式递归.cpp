# include<stdio.h>

float ff(float n,float x)
{
	float f;
	if(n==0) return 1;
	else if(n==1) return x;
	f=((2*n-1)*x-ff(n-1,x)-(n-1)*ff(n-2,x))/n;
	return f;
 } 
 
 int main()
{
	float a,b;
	float num;
	scanf("%f %f",&a,&b);
	num=ff(a,b);
	printf("%f",num);
	return 0;
}
