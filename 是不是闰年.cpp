# include<stdio.h>

int main()
{
	int i=2000;
	for(i;i<=2500;i++){
		if(i%4!=0){
			printf("%d,��������\n",i);
			continue;
		}
		if((i%4==0)&&(i%100!=0)){
			printf("%d,������\n",i);
			continue;
		}
		if((i%100==0)&&(i%400==0)){
			printf("%d,������\n",i);
			continue;
		}
		printf("%d,��������\n",i);
	}
	return 0;	
}
