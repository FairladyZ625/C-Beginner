# include<stdio.h>

int main()
{
	int n;
	float pi=2;
	scanf("%d",&n);
	for (int i=1;i<= n;i++){
		pi*=((2*i)*(2*i))*1.0 / ((2*i-1)*(2*i+1));
		if (i==10||i==100){
			printf("n=%d, ",i);
			printf("pi=%f\n",pi);
		}else if(i==1000){
			printf("n=%d, ",i);
			printf("pi=%f\n",pi);
		}
		
	}
	return 0;
}
