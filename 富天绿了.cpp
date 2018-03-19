# include<stdio.h>
# define GREEN "youaregreen"

int main()
{
	char name[40];
	printf("what's your name");
	scanf("%s",&name);
	printf("HI,%s.%s\n",name,GREEN);
	return 0;
}
 
