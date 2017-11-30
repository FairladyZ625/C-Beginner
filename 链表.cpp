# include<stdio.h>
# include<stdlib.h>

typedef struct _node {
	int value;
	struct _node *next;
}Node;

typedef struct _list{
	Node* head;
}List;

void add(List *plist,int number);
void print(List * plist);

int main()
{
	List list;
	list.head =NULL;
	int number;
	do {
		scanf("%d",&number);
		if (number != -1){
			add(&list,number);
	}
	}while (number != -1);
	print(&list);
	scanf("%d",&number);
	Node *p;
	Node *q;
	for (q=NULL,p=list.head ;p;q=p,p->next ){
		if (p->value  == number){
			if (q){
				q->next=p->next; 
				free(p);
			}else {
				list.head=p->next;
			}
			free (p);
			break;
		}
	if ( isfound==0){
		printf("not found\n");
		}
	}
	for (p=head;p;p=q){
		q=p->next ;
		free (p);
	}
	
	
	return 0; 
}

void add(List *plist,int number)
{
// add to linked-list
			Node *p =(Node*)malloc(sizeof(Node));
			p->value =number ;
			p->next =NULL;
			// find the last
			Node *last =plist -> head;
			if (last){
				while (last->next){
					last=last->next;
				}
				//attach
				last->next = p;
			}else {
				plist->head =p;
			}		
}
void print(List * plist)
{
		Node *p;
	for (p=plist->head ;p;p=p->next ){
		printf("%d\t",p->value );
	}
	printf("\n");
	}	
