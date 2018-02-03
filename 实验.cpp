# include<stdio.h>

int gAll =10;
int main()
{
	int k=0;
	static int all=1;
	printf("&gAll=%p\n",&gAll);
	printf("&all =%p\n",&all);
	printf("&k =%p\n",&k);
	
	return 0;
	
}
