# include<Stdio.h>
int swap(int *av,int *bv)
{
	int t= *av;
	*av=*bv;
	*bv=t;
	
 } 
 
 int main()
 {
 	int a=5,b=6;
 	swap(&a,&b);
 	printf("%d,%d",a,b);
 } 
