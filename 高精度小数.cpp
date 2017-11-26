# include<stdio.h>
int main()
{
	int count=0;
	int a,b,divnum;
	scanf("%d/%d",&a,&b);
	printf("0.");
	do {
		divnum=a*10;		
		count++;
		printf("%d",divnum/b);		
		if(a%b==0){
			break;
		}
		a=(divnum%b);
		if(a%b==0){
			break;
		}		
	}while (count<=200);
	return 0;

 } 
