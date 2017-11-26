# include<Stdio.h>
# include<string.h>
int main()
{
	char str[1024];
	int i =0 ;
	while ((str[i]=getchar())!='\n')
	{
		i++;
		getchar();
	}
	for (int b=0;b<i;b++)
	{
		printf("%c",str[b]);	
	}
	return 0;
}
