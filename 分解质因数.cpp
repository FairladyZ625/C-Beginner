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
	
 } //�ж��Ƿ������ĺ��� 
 
 int main()
 {
	int a[300];//����һ����������������� 
 	int i,ret;//retΪ�ж������ķ���ֵ,i�Ƕ������ 
 	int n;//n�ǳ��� 
 	int count,f,e;//������
	count=0; 
 	scanf("%d",&i);
 	n=2;
 	ret=isprime(i);
 	printf("%d=",i);//ǰ׺ 
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
	for (f=0;f<count-1;f++){//�����㷨 
		for (e=f+1;e<count;e++)
		{
			if (a[f]>a[e])
			{
				a[f]=a[e];	
			}
		}
	}
	for (f=0;f<count;f++){//����������� 
		printf("%dx",a[f]);
		}
		printf("%d",i);	 
	 }
	 return 0;
 }
