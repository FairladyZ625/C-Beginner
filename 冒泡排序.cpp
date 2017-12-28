# include<Stdio.h>

int main()
{
	int a[100];
	int i,j,n,k,t;
	scanf("%d %d",&n,&k);
	//1 
	for (int f=1;f<=n;f++){
		scanf("%d",&a[f]);
	}
	for (i=1;i<n-1;i++){
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
}
