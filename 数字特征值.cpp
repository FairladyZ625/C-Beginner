# include<stdio.h>
int main()
{
	int countt,numt,in,count;
	int num,countj,numj,a,tnum;
	scanf("%d",&in);
	numt=1;
	count=0;
	tnum=0;
	do{
		num=in%10;
		in=in/10;
		count+=1;
		if(num%2==0){
			if(count%2==0){
				a=1;
			}
			else {
				a=0;
			}
		}
		if (num%2 != 0){
			if (count%2 != 0){
				a=1;
			}
			else {
				a=0;
			}
				
		}
			
		
		
		tnum+=a*numt;
		numt*=2;
		
		
		
	}while(in!=0);
	
	printf("%d",tnum);
	return 0;
	
	
	
}
