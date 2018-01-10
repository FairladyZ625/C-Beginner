#include<stdio.h>

typedef union {
	int i; 
	char  ch[sizeof(int)];
}chi;
int main()
{
	chi ch;
	int i;
	ch.i=1234;
	for (i=0;i<sizeof(int);i++){
		printf("%02hhx",ch.ch[i] );
	}
	printf("\n");
	
	
	return 0;
	
}
