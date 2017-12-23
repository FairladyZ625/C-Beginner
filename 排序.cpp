# include<stdio.h>

int max (int a[],int len)
{
	int maxid=0;
	for (int i=1;i<len;i++)
	{
		if (a[i]>a[maxid]);
		{
			maxid =i;
		}
	}
	return maxid;
 } 
 
 int main () 
 {
 	int a[] ={1,2,3,4,5,6,7,8,9,22,23,25,65,76,85,98,123,325,678};
 	int len = sizeof(a)/sizeof(a[0]);
 	for (int i=len-1; i>0 ; i--)
 	int maxid=max(a,sizeof(a)/sizeof(a[0]));
 	//sawp a[maxid],a[len-1]
 	int t=a[maxid];
 	a[maxid]=a[sizeof(a)/sizeof(a[0])-1];
 	a[sizeof(a)/sizeof(a[0])-1] = t;
 	printf("%d\n",maxid);
 	
 }
