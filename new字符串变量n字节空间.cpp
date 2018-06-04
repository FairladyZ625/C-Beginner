# include<stdio.h>
# include<stdlib.h>

char newpin[1000];
char *newpined =newpin; 
char *newp(int i);

int main()
{
	int n;
	scanf("%d",&n);
	char* beginpin =newp(n);
	return 0;
 } 
 
char *newp(int i)
{
	char*p;
	p=(char*)malloc(sizeof(char)*i);
	return p;
}
