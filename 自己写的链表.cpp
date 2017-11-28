# include<stdio.h>
# include<stdlib.h>

typedef struct node_{
	int value;
	struct node_  *next;
}Node;

int main()
{
	int number=0;
	Node *head = NULL;
	do{
		scanf("%d",&number);
		if (number != -1){
			Node *p =(Node*)malloc(sizeof (Node));
			p->value = number;
			p->next = NULL;
		}
		Node * last = head;
		if (last){
			while (last -> next){
				last=last->next; 
			}
			last->next =p;
		}else{
			head=p;
		}
	}while (number != -1 ); 
	return 0;
}
