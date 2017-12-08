# include<stdio.h>

void f(void)
{
	
 } 
 
 
int main(void)
{
	int i =0;
	int a[]={1,2};
	printf("%p\n",main);
	printf("%p\n",a);
	void(*pf)(void) = f;
	return 0;
	
 } 
