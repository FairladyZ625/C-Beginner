# include<stdio.h> 
int wanshu(int i)
{
	int a=1;//����
	int sum=0; 
	for(a;a<i;a++){
		if (i%a==0){
			sum+=a;
		}
	}
	return sum;
}
 
 
 
 
 int main()
 {
 	int g[100];
 	int judge=0;
	int a,b; //�����������Χ
	int count;//������ ���жϵ����� 
	int ret;//�жϵķ���ֵ 
	int f=0;//��������� 
	scanf("%d %d",&a,&b);
	for(count=1;(count>=a) && (count<b);count++) 
	{
		ret=0;//�ж��ǲ������� ����Ǿ����������� 
		ret=wanshu(count);
		if (ret==count){
			g[f]=count;
			judge=1;
			f++;
		}
	}
	if (judge==0){
		printf("NIL\n");
	}
	if (judge==1){
		for(ret=0;ret<f-1;ret++){
	 
		printf("%d ",g[ret]);
		}
		printf("%d",g[f-1]);
 }
 return 0;
}
