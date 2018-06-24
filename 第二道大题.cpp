# include<stdio.h>

void InputArray(int* i);

void SelectionSort(int *array);

int main()
{
	int i=10;
	int* parray;
	int a[10];
	InputArray(&a[0]);
	parray=&a[0];
	SelectionSort(parray);
	return 0;
	
 } 
 
 void InputArray(int* i)
 {
 	int j; 
	for(j=0;j<10;j++){
		scanf("%d",&i[j]);
	}
 }
 
 void SeletionSort(int *array)
 {
 	int a[10];
 	int max,i,j,t;
 	for(i=0;i<10;i++){
 		a[i]=array[i];
	 }
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
