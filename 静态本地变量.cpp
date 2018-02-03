# include<stdio.h>

int f(void);

int gall;

int main()
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	static int All =1;
	printf("in %s All=%d\n",__func__,All);
	All += 2;
	printf("agn in %s All =%d \n",__func__,All);
	
	return All; 
}
