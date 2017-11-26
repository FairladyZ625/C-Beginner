# include<stdio.h>
int main()
{
	double sum=0;
	int cnt=0;
	int number[100];
	int i;
	double average;
	i=0;
	while (i!= -1){	
		number[cnt]=i;
		cnt ++;
		sum+=i;
		scanf("%d",&i);
	}
	average=sum/cnt;
	if (cnt>0){
		for (i=0;i<cnt;i++){
			if (number [i] > average){
				printf("%d\n",number[i]);
							}
		}
	}
	return 0;
 } 
