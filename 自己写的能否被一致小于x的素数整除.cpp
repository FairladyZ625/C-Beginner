# include<stdio.h>
int isprime(int x,int knownofprimes[],int numberofknownprimes)
{
	int ret=1;
	for(int i=0;i<numberofknownprimes;i++)
	{
		if(x%knownofprimes[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main()
{
	int count=0;
	int number=100;
	int prime[number]={2};
	int i=3;
	while(count<number){
		if (isprime(i,prime,count))
		{
			prime[count++]=i;
		}
		i++;		
	}
	for(i=0;i<100;i++){
		printf("%d",prime[i]);
		if((i+1)%5) printf("\t");
		else printf("\n");
	}
	return 0;
}
