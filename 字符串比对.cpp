# include<Stdio.h>
 

int main()
{
	char input1[100];
	char input2[100];
	char ch;
	int l1=0;
	int l2=0;
	while ((ch=getchar())!='\n'){
		input1[l1++]=ch;
	}
	while ((ch=getchar())!='\n'){
		input2[l2++]=ch;
	}
	
	int flag=0;
	for (int i=0;i<l2;i++){
		for (int h=0;h<l1;h++){
			if (input1[h] != input2[i+h]){
				break;
			}
			if (h==l1-1){
				printf("%d ",i);
				flag=1;
			}
		}
	}
	if (!flag){
		printf("-1");
	}
	return 0;
 } 
