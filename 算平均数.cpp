# include<stdio.h>
int main()
{
	int sum,num,count;
	sum=0;
	num=0;
	count=0;
	while(num!=-1){
		sum=sum+num;
		count++;
		scanf("%d",&num);
		
		
	}
	printf("%f\n",sum*1.0/count);
	return 0;
	
 } 
