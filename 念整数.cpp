# include<stdio.h>
int main ()
{
	long int num,n,divnum,num2,i,panduan;
	scanf("%d",&num);
	n=0;
	panduan=0;
	if (num==0)
	{
		printf("ling");
	}

	if (num<0)
	{
		num*=-1;
		panduan=1;
	}
	
	num2=num;
	do{
		num2/=10;
		n++;
	}while (num2>0);//计算num的位数 
	
	divnum=1;
	while  (n>1)
	{
		divnum*=10;
		n--;
	 }//算出所需要被除的数字 
	 
	 
	 
	 if (num>0 && panduan==0)
	 {
	 	while (num>9)
	 	{
			i=num/divnum;
			num%=divnum;
			divnum/=10;
			switch(i)
			{
				case 0:printf("ling ");
				break;
				case 1:printf("yi ");
				break;
				case 2:printf("er ");
				break;
				case 3:printf("san ");
				break;
				case 4:printf("si ");
				break;
				case 5:printf("wu ");
				break;
				case 6:printf("liu ");
				break;
				case 7:printf("qi ");
				break;
				case 8:printf("ba ");
				break;
				case 9:printf("jiu ");
				break;	
			}
	}
			switch(num)
			{
				case 0:printf("ling");
				break;
				case 1:printf("yi");
				break;
				case 2:printf("er");
				break;
				case 3:printf("san");
				break;
				case 4:printf("si");
				break;
				case 5:printf("wu");
				break;
				case 6:printf("liu");
				break;
				case 7:printf("qi");
				break;
				case 8:printf("ba");
				break;
				case 9:printf("jiu");
				break;	
		
	
	 }
}
	 if (num>0&&panduan==1)
	 {	
	 	printf("fu ");
	 	while (num>9)
	 	{
			i=num/divnum;
			num%=divnum;
			divnum/=10;
			switch(i)
			{
				case 0:printf("ling ");
				break;
				case 1:printf("yi ");
				break;
				case 2:printf("er ");
				break;
				case 3:printf("san ");
				break;
				case 4:printf("si ");
				break;
				case 5:printf("wu ");
				break;
				case 6:printf("liu ");
				break;
				case 7:printf("qi ");
				break;
				case 8:printf("ba ");
				break;
				case 9:printf("jiu ");
				break;	
			}
	}
			switch(num)
			{
				case 0:printf("ling");
				break;
				case 1:printf("yi");
				break;
				case 2:printf("er");
				break;
				case 3:printf("san");
				break;
				case 4:printf("si");
				break;
				case 5:printf("wu");
				break;
				case 6:printf("liu");
				break;
				case 7:printf("qi");
				break;
				case 8:printf("ba");
				break;
				case 9:printf("jiu");
				break;	
	
	 }	 
	

}
return 0;
}

	
	
