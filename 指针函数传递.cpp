# include<Stdio.h>

tran(int *b)
{
	b[1]=3;
	b[2]=4;
 } 

int main()
{
	int a[5];
	tran(a);
	printf("%d %d",a[1],a[2]);
	return 0;
}
