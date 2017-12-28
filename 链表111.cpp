# include<stdio.h>
# include<stdlib.h>

typedef struct _node {
	int value;
	_node *next;
}Node;

void print(Node *first);
int main()
{
	Node *head=NULL;
	int number =0;
	do{
		scanf("%d",&number);
		if (number !=-1){
			Node *p =(Node*)malloc(sizeof(Node));
			p->next =NULL;
			p->value =number;
			Node *last=head;
			if (last){
				while (last->next ){
					last=last->next ;
				}
				last->next =p;
			}else {
				head=p;
			}
		}

	}while (number!=-1);
	print(head);
	return 0;
}

void print(Node *first){
	Node *p;
	for (p=first;p;p->next ){
		printf("%d",p->value );
	}
}
