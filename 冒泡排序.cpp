# include<stdio.h>

int main()
{
	int n,k,i,t;
	int l=1;
	int a[100]; 
	scanf("%d %d",&n,&k);
	for (int f=1;f<=n;f++){
		scanf("%d",&a[f]);
	}
	for (i=1;i<n-1;i++){
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
	
}
