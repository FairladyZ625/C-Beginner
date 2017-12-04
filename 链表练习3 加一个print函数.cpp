# include<stdio.h>
# include<stdlib.h>

typedef struct node_{
	int value;
	struct node_ *next;
}Node;

void print(Node *first);

int main()
{
	int number;
	Node *head = NULL;
	do{
		scanf("%d",&number);
		if (number != -1){
			Node *p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next =NULL;
			Node *last=head;
			if (last){
				while (last->next ){
					last=last->next; 
				}
				last->next =p;
			}else {
				head=p;
			} 
		}
	}while (number != -1);
	print(head);
	return 0;
}

void print (Node *first){
	Node *p;
	for (p=first;p;p=p->next ){
		printf("%d",p->value );
	}
	
}
