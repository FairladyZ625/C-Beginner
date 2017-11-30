# include<stdio.h>

int f(void);

int gAll;

int main()
{
	printf("in %s gAll=%d\n",__func__,gAll);
	f();
	printf("agn in %s gAll=%d\n",__func__,gAll);
	return 0;
	

}

int f(void)
{
	printf("in %s gAll=%d\n",__func__,gAll);
	gAll+=2;
	printf("agn in %d gAll=%d\n",__func__,gAll);
	return gAll;
}
