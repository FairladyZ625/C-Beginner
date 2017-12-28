#include<stdio.h>
int main()
{
	int N,U,D;
	scanf("%d %d %d",&N,&U,&D);
	int ways,times=0;
	while(ways<N)
	{
		times++;
		ways=ways+U;
		if(ways>=N)
		{
			break;
		}
		times++;
		ways=ways-D;
	}
	printf("%d",times);
 } 
