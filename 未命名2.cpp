# include<Stdio.h>

int main()
{
	enum COLOR {RED , YELLOW ,GREEN,NumCOLORS};
	
	int main( ){
		int color = -1;
		char *ColorNames[NumCOLORS]={
		"red ", "yellow","green"};
		char * colorname=NULL;
		
		printf("color number");
		scanf("%d",&color);
		if ( color>=0 && color < NumCOLORS){
			colorName =ColorNames[color];
			
		}else {
			colorName="unknown";
			
		}	
		printf(" you favorite color is %s\n",colorName);
		return 0;	
	}
}

