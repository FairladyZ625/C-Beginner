# include<stdio.h>
int main()
{
	int grade,a;
	scanf("%d",&grade);
	a=grade/10;
	switch (a) {
		case 10 :
		case 9  : printf("A"); break;
		case 8  : printf("B"); break;
		case 7  : printf("C"); break;
		case 6  : printf("D"); break;
		default : printf("E") ;
		
		
		
	}
	return 0;
	}
