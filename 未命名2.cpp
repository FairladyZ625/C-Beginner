# include<stdio.h>

int main()
{
	int a[10]={49,50,28,48,12,90,27,23,99,20};
	int i,j,k; 
	int t;
	for(i=0;i<9;i++){
		k=i;
		for(j=i+1;j<10;j++){
			if(a[k]<a[j]) k=j;
		}
		if(k!=i){
			t=a[i];
			a[i]=a[k];
			a[k]=t;
			}
	}
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
	return 0;
}
