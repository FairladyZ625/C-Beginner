#include<stdio.h>
int main(){
    int m,n,sum=0; //sum������¼���� m nΪ�û�����
    int flag=1; //flag���Ա�ǵ�ǰ�ǵڼ������� Ĭ��Ϊ1
    do
    {
        scanf("%d%d",&n,&m);
    }
    while(n<=0||m<n||m>200); //��׳�� ���ƺ�����û�����
 
    if(n==1)
        sum+=2; // ��һ������Ϊ2 sum+2��
 
    int is = 0;
    for(int i=2;;i++)
    {
        is = 1;
        if(flag>m) // �жϼ������Ĵ����Ƿ����m
            break; //����m������
 
        for(int j=2;j<i;j++)
        { //�ж��Ƿ�Ϊ����
 
            if(i%j==0)
            {
                is=0;
                break;
            } //��������������
        }
 
        if(is==1)
        {  
            if(flag>=n) //flagҪ������ʼ��n �����ſ�ʼ���
                sum+=i; //sumΪ������   
            flag++; //������ flag++ 
        }
    }
    printf("%d\n",sum);
    return 0;
}
