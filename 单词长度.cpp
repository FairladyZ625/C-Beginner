# include<stdio.h>
# include<string.h>
int main()
{
	int a[400];
	int count=0;
	char word;
	scanf("%s",word);
	while (word!=".")
	{
		
		if (word[0]== . )
		{
			break;
		}
		else {
			a[count]+=strlen(word);
			count++;
		}
	}
	for (int i=0;i<count-1;i++){
		printf("%d ",a[i] );
	}
	printf("%d",a[count-1]);
 } 
