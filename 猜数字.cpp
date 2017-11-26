# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("you may need to guess a number between 1 to 100");
	do {
		printf("guess it ");
		scanf("%d",&a);
		count ++;
		if ( a > number){
			printf("too high");
			} 
		else if (a < number){
			printf("too low");
			
		
		}
		}while ( a != number);
		printf("you use %d times to find the answer",count); 
		
		return 0 ; 
	 
	}
