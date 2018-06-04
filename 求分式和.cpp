# include<stdio.h>

int main()
{
	float sum=1.0;
	float sign=1.0;
	int deno=2;
	float term=1.0;
	for(deno=2;deno<=100;deno++){
		sign=(-1)*sign;
		term=sign*(1.0/deno);
		sum=sum+term;
	}
	printf("%f",sum);
	return 0;
}
