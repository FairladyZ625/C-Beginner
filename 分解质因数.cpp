# include<stdio.h>
# include<math.h>

int isprime(int i)
{
	int n=2;
	int ret;
	ret=1;
	for (n;n<i;n++){
		if (i%n==0)
		{
			ret=0;
			break;
		}
		
	}
	return ret;
	
 } //判断是否素数的函数 
 
 int main()
 {
	int a[300];//定义一个存放质因数的数组 
 	int i,ret;//ret为判断素数的返回值,i是读入的数 
 	int n;//n是除数 
 	int count,f,e;//计数器
	count=0; 
 	scanf("%d",&i);
 	n=2;
 	ret=isprime(i);
 	printf("%d=",i);//前缀 
 	if (ret==1)
 	{
 		printf("%d",i);
 		
	 }
	else{
	 	while (isprime(i) != 1)
	 	{
	 		if (i%n==0)
	 		{
	 			i=i/n;
	 			a[count]=n;
	 			count++;
			 }
			else
			{
				n++;
			}
		 }
	for (f=0;f<count-1;f++){//排序算法 
		for (e=f+1;e<count;e++)
		{
			if (a[f]>a[e])
			{
				a[f]=a[e];	
			}
		}
	}
	for (f=0;f<count;f++){//遍历数组输出 
		printf("%dx",a[f]);
		}
		printf("%d",i);	 
	 }
	 return 0;
 }
