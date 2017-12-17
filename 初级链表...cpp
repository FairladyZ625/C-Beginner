# include<stdio.h>
# include<stdlib.h>

typedef struct _node{
	_node *next;
	int value;
}Node;

typedef struct list{
	Node *head;
}List;

void print(Node *head);

void add (List *plist,int number);

int main()
{
	int number;
	List list;
	list.head =NULL;
	do{
		scanf("%d",&number);
		if (number!= -1 ){
			add(&list,number);	
		}
	}while (number != -1);
	
	print(list.head );
	
	return 0;
	
}

void print(Node * first){
	
	Node*p=first;
	for (p;p;p=p->next){
		printf("%d",p->value);
	}
}

void add (List *plist,int number){
	Node *p=(Node*)malloc(sizeof(Node));
	p->next =NULL;
	p->value =number;
	Node *last=plist->head ;
	if (last){
		while (last->next ){
			last=last->next;
		}
		last->next=p;
	}else{
		plist->head =p;
	}
}
	
