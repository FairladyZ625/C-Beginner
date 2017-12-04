# include<stdio.h>
# include<stdlib.h> 

typedef struct _node {
	int value;
	struct _node *next;
}Node;

void print(Node * headd);

int main()
{
	int number =0;
	Node *head =NULL;
	do{
		scanf("%d",&number);
		Node *p=(Node*)malloc(sizeof(Node));
		if (number != -1){
			p->value=number;
			p->next=NULL;
			// find the last
			Node *last=head;
			if (last){
				while(last->next){
					last=last->next;
				}
				last->next=p;
			}else{
				head=p;
			}
	
		}
	}while (number != -1);
	print(head);
	return 0;
	
}

void print(Node * headd){
	Node *p;
	for (p=headd;p;p=p->next ){
		printf("%d",p->value );
	}
	
}
