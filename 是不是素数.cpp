# include<stdio.h>

int main()
{
	int inp;
	int flag=1;
	scanf("%d",&inp);
	for(int i=2;i<=inp-1;i++){
		if(inp%i==0){
			printf("不是素数");
			flag=0;
			break; 
		}
	}
	if(flag==1){
		printf("是素数");
	} 
	return 0;
}
