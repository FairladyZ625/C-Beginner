# include<Stdio.h>

int search(int key,int a[],int len)
{
	int ret = -1;
	for (int i=0;i<len;i++)
	{
		if (key == a[i])
		{
			ret= i;
			break;
		}
	}
	return ret;
}

int main()
{
	int a[] = {1,3,2,5,432,356,536,71,135};
	int r =search(432,a,sizeof(a)/sizeof(a[0]));
	printf("%d\n",r);
	return 0;
	
}
	
