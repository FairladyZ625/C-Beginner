# include<stdio.h>

void printn(int n)
{
	if (n){
		printn(n-1);
		printf("%d\n",n);
	}
	return;
}

int main()
{
	printn(1000000);
	return 0; 
}
