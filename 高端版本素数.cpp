#include<stdio.h>
int main(){
    int m,n,sum=0; //sum用来记录素数 m n为用户输入
    int flag=1; //flag用以标记当前是第几个素数 默认为1
    do
    {
        scanf("%d%d",&n,&m);
    }
    while(n<=0||m<n||m>200); //健壮性 控制合理的用户输入
 
    if(n==1)
        sum+=2; // 第一个素数为2 sum+2；
 
    int is = 0;
    for(int i=2;;i++)
    {
        is = 1;
        if(flag>m) // 判断加素数的次数是否等于m
            break; //等于m则跳出
 
        for(int j=2;j<i;j++)
        { //判断是否为素数
 
            if(i%j==0)
            {
                is=0;
                break;
            } //不是素数则跳出
        }
 
        if(is==1)
        {  
            if(flag>=n) //flag要大于起始的n 素数才开始相加
                sum+=i; //sum为素数和   
            flag++; //是素数 flag++ 
        }
    }
    printf("%d\n",sum);
    return 0;
}
