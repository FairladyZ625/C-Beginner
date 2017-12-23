#include<stdio.h>


int main()
{
	int a,b,i;
	i=0;
	scanf("%d/%d",&a,&b);
	if(a==b){
		printf("1/1");
	}
	if (a>b && a%b==0){
		i=a/b;
		printf("%d/1",i);
	}else if (a>b){
		do{
			i=a/b;
			if ((a%i==0)&&(b%i==0)){
			a/=i;
			b/=i;
			}
			if (i==1){
				break;
			}
		}while (1);	
		printf("%d/%d",a,b);
	}
	if (a<b){
		int t=0;
		t=a;
		a=b;
		b=t;
		if (a>b && a%b==0){
			i=a/b;
			printf("1/%d",i);
		}else{
			do{
				i=a/b;
				if ((a%i==0)&&(b%i==0)){
					a/=i;
					b/=i;
				}
				if (i==1){
					break;
				}
			}while (1);	
			printf("%d/%d",b,a);
		}	
	}

	return 0;
 } 
