# include<stdio.h>
int main()
{
	int a,counta,countb;
	scanf("%d",&a);
	counta=0;
	countb=0;
	while(a != -1){
		if (a%2==0){
			countb ++;
			
		}
		else if(a%2 != 0){
			counta ++;
			
		}
		scanf("%d",&a);
	}
	printf("%d %d",counta,countb);
	return 0;
}
