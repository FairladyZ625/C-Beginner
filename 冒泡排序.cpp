<<<<<<< HEAD
# include<stdio.h>

int main()
{
	int n,k,i,t;
	int l=1;
	int a[100]; 
	scanf("%d %d",&n,&k);
=======
# include<Stdio.h>

int main()
{
	int a[100];
	int i,j,n,k,t;
	scanf("%d %d",&n,&k);
	//1 
>>>>>>> b3338b3f09d14709e7a4bbb8b28a60615867016f
	for (int f=1;f<=n;f++){
		scanf("%d",&a[f]);
	}
	for (i=1;i<n-1;i++){
<<<<<<< HEAD
		for (l=1;l<=n-i;l++){
			if (a[l]>a[l+1]){
			t=a[l];
			a[l]=a[l+1];
			a[l+1]=t;
		}
		
		}
		if (i==k){
			break;
	}
}
	for (int g=1;g<n;g++){
		printf("%d ",a[g]);
	}
	printf("%d",a[n]);	
	
	return 0;
	
=======
		for (j=1;j<n-i;j++){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		if (i==k){
			break;
		}
	} 
	for (int f=1;f<=n;f++){
		printf("%d",a[f]);
	}
	return 0;
>>>>>>> b3338b3f09d14709e7a4bbb8b28a60615867016f
}
