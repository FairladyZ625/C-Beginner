# include<stdio.h>

int main()
{
	int k=98; 
	int a[] ={1,2,3,4,5,6,7,8,9,22,23,25,65,76,85,98,123,325,678};
	int i = sizeof(a)/sizeof(a[0]);
	while (1)
	{
		if (i%2 != 0){
			i++;
		}
		if (a[i/2]>k){
			i=i/2;
			continue;
		}else if (a[i/2]<k){
			i+=i/2;
			continue;
		}else if(a[i/2]=k){
			printf("Found it! it is in No.%d",i/2+1);
			break;
		}
	}
	
	return 0;
}
