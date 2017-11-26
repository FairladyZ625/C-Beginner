# include<stdio.h>
int main()
{
	int n,m,i,t,sushu,count,numtotal,num,e;
	scanf("%d %d",&n,&m);
	i=2;
	sushu=1;
	count=0;
	numtotal=0;
	num=1;
	while(i>0){
		for(t=2;t<=i-1;t++)
		{
			sushu=1;
			num=i%t;
			if (num==0)
			{
				sushu=0;
				break;
		}
			
			
			}
			if (sushu==1)
			{
				count++;
				e=0;
				
			}
			while(count>=n&&count<=m)
			{
				if (e!= 0)
				{
					break;
				}
				numtotal+=i;
				e=1;
				break;
			}
			if (count>m)
			{
				goto label2;
			}
			i++;
				
	}
	label2:;
	printf("%d",numtotal);
	return 0;
	
}
