# include<stdio.h>
# include<stdlib.h> 

typedef struct node{
	int value;
	node *next;
}Node;

int TransToArray(Node*first,int *b);
 
int main()
{
	Node *head=NULL;
	int number =0;
	do{
		scanf("%d",&number);
		if (number!=-1){
			Node *p=(Node*)malloc(sizeof(Node));
			p->value =number;
			p->next =NULL;
			Node *last=head;
			if (last){
				while(last->next ){
					last=last->next ;
				}
				last->next =p;
			}else{
				head=p;
			}
		}
	}while (number != -1);
	int a[100];
	int i=0;
	i= TransToArray (head,a);
	for(int c=i-1;c>0;c--){
		printf("%d ",a[c]);
	}
	return 0;

 }
 
 int TransToArray(Node*first,int *b)
 {
 	int i=1;
 	Node*p=first;
 	for(p;p;p=p->next){
 		b[i]=p->value;
 		i++;
	 }
	 return i;
  } 
