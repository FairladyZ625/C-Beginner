#include <stdio.h> 
int main()
{
	int i;
	char c;
	int a[400];
	int count=0;
	scanf("%c",&c);
	while(c!='.')
	{
		while(c==' ') scanf("%c",&c);
		i=0;
		while(c!=' '&&c!='.') {i++;scanf("%c",&c);}
		a[count]=i;
		count++;
	}
	for (int t=0;t<count-1;t++){
		printf("%d ",a[t]);
	}
	if (count>=1){
	
	printf("%d",a[count-1]);
}
	return 0;
}
