# include<stdio.h>

void Input(int b[]);

void selectionsort(int a[]);

int search (int a[],int x);

void selectionsort11(int a[]);

int main()
{
	int i=10;
	int a[10];
	int x;
	Input(a);
	selectionsort(a);
	scanf("%d",&x);
	search(a,x);
	return 0;
}

void Input(int b[])
{
	int j;
	for(j=0;j<10;j++){
		scanf("%d",&b[j]);
	}
}

void selectionsort(int a[])
{
	int i,j,k,max,g,t;
	for(i=0;i<9;i++){
		max=i;
		for(j=i+1;j<10;j++){
			if(a[j]>a[max]){
				max=j;
			}
		}
		if(max!=i){
			t=a[max];
			a[max]=a[i];
			a[i]=t;
		}
	}
	for(k=0;k<10;k++){
		printf("%d",a[k]);
	}
}

void selectionsort11(int a[])
{
	int i,j,k,max,g,t;
	for(i=0;i<10;i++){
		max=i;
		for(j=i+1;j<11;j++){
			if(a[j]>a[max]){
				max=j;
			}
		}
		if(max!=i){
			t=a[max];
			a[max]=a[i];
			a[i]=t;
		}
	}
	for(k=0;k<11;k++){
		printf("%d",a[k]);
	}
}

int search(int a[],int x)
{
	int i,j,k,mid;
	i=0;
	j=9;
	int b[11];
	for(k=0;k<10;k++){
		b[k]=a[k];
	}
	while(i<=j){
		mid=(i+j)/2;
		if(a[mid]>x){
			i=mid+1;
		}
		if(a[mid]<x){
			j=mid-1;
		}
		if(a[mid]==x) break;
	}
	if(a[mid]==x){
		printf("%d",mid);
	}else{
		b[10]=x;
		selectionsort11(b);	
	}
	
}
