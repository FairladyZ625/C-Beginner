# include<stdio.h>
int main()
{
	int a,b,plus,min,mul;
	float div;
	scanf("%d %d",&a,&b);
	plus=a+b;
	min=a-b;
	mul=a*b;
	div=a*1.0/b;
	printf("%d + %d = %d\n",a,b,plus);
	printf("%d - %d = %d\n",a,b,min);
	printf("%d * %d = %d\n",a,b,mul);
	printf("%d / %d = %.2f\n",a,b,div);
	return 0;
	
}
