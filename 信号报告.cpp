#include<stdio.h>
int main()
{
	int num,a,b;
	scanf("%d",&num);
	a=num/10;
	b=num%10;
	b=b+5;
	switch(b){
		case 6:printf("Faint signals, barely perceptible, "); break;
		case 7:printf("Very weak signals, "); break;
		case 8:printf("Weak signals, "); break;
		case 9:printf("Fair signals, "); break;
		case 10:printf("Fairly good signals, "); break;
		case 11:printf("Good signals, "); break;
		case 12:printf("Moderately strong signals, "); break;
		case 13:printf("Strong signals, "); break;
		case 14:printf("Extremely strong signals, "); break;
	}
	switch(a){
		case 1:printf("unreadable."); break;
		case 2:printf("barely readable, occasional words distinguishable.");break;
		case 3:printf("readable with considerable difficulty."); break;
		case 4:printf("readable with practically no difficulty."); break;
		case 5:printf("perfectly readable."); break; 
	}	
		
	
	return 0;
	
}
