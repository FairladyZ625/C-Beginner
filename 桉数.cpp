# include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
			scanf("%d",&a[i][j]);//双重循环读入数据 
		}
	int ret1,ret2,sum;
	ret1=1;
	ret2=1;
	sum=1;
	int min=0;
	int f;
	for (int i=0;i<n;i++){
		f=i;
		for (int j=0;j<n;j++){
		ret1=1;
		ret2=1;
		min=a[f][j];
			for (int d=0;d<n;d++){      //循环到一个数字后遍历他的行和
				if (min<a[i][d]){
				ret1=0;
				} 
			}
			for (int e=0;e<n;e++){
				if (min>a[e][j]){
				ret2=0;
				}
			
			}
			if ((ret1==1)&(ret2==1)){
				printf("%d %d",i,j);
				goto l1;
				
			}
			}
		}
		printf("NO");
		l1:
	return 0;
	}
