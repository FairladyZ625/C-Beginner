# include<stdio.h>
# include<string.h>
int mycmp(constchar* s1,const char* s2)
{
	int idx=0;
	while(s1[idx] == s2[idx]&&s1[idx] != '\0'){
		/*if (s1[idx]!=s2[idx]){
			break;
		}
		else if (s1[idx]=='\0'){
			break;
		}
		*/
		idx++;
		
	}
	return s1[idx]-s2[idx];
}

int main(void)
{
	
 } 
