# include<stdio.h>
int main()
{
	int x=2;
	int i;
	int n=100;
	int plusnum;
	int count=0;
	int prime[n]={2};
	for (i=0;i<n;i++){
		prime[i]=1;
	}
	while(x<n){
		for(plusnum=2;plusnum*x<n;plusnum++){
			prime[plusnum*x]=0;
		}
		x++;
	}
	for(count;count<n;count++){
		if (prime[count]==1){	
			printf("%d\n",count);
		}
	}
	return 0;
}



