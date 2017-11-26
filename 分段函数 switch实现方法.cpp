# include<stdio.h>
int main()
{
	int f,x;
	scanf("%d",&x);
	switch(x){
		case 0:
			printf("0");
			break;
		default:
			switch(x<0){
				case 0 :
					f=2*x;
					printf("%d",f);
					break;
				case 1:
					printf("-1");
					break;
				
			break;}
	}	
	return 0;
}
