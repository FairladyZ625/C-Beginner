# include<Stdio.h>
int main(int argc, char const *argv[])
{
	int ch;
	
	while((ch=getchar()) != EOF){
		putchar(ch);
	}
	
	printf("eof\n");
	return 0;
}

