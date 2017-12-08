# include<Stdio.h>
# include<stdlib.h>

typedef struct _node{
	_node *next;
	int value;
}Node;

void print(Node *first);

int main()
{
	int number;
	Node *head=NULL;
	do{
		scanf("%d",&number);
		if (number!=-1){
			Node *p=(Node*)malloc(sizeof(Node));
			p->next =NULL;
			p->value =number;
			Node *last=head;
			if (last){
				while(last->next ){
					last=last->next ;
				}
				last->next =p;
			} else {
				head=p;
			}
		}
	}while(number != -1 );
	
	print(head);
	
	return 0;
 } 
 
 void print(Node*first)
 {
 	Node *p;
 	for (p=first;p;p=p->next ){
 		printf("%d\n",p->value );
	 }
 }
