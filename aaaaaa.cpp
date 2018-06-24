# include<stdio.h>

void InputArray(int* i);

void SelectionSort(int *array);

int main()
{
	int i=10;
	int a[10];
	InputArray(a);
	SelectionSort(a);
	return 0;
	
 } 
 
 void InputArray(int a[])
 {
 	int j; 
	for(j=0;j<10;j++){
		scanf("%d",&a[j]);
	}
 }
 
 void SeletionSort(int a[])
 {
 	int max,i,j,t;
	for(i=0;i<9;i++){
		max=i;
		for(j=i+1;j<10;j++){
			if(a[j]>a[max]) max=j;
		}
		if(max!=i){
			t=a[max];
			a[max]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
 }
