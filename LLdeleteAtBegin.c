#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ int data;
struct node *next;

} node;
node *head=NULL;
node *create(int n)
{ int i=0;
//node *head=NULL;
node *temp=NULL,*p;
for(i=0;i<n;i++)
{
	temp=(node*)malloc(sizeof(node));
	
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{ p=head;
	while(p->next!=NULL)
	p=p->next;
	p->next=temp;
	}
}
return head;
}
void display(node *head)
{
	node*p=NULL;
	if(head==NULL)
	printf("Empty");
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			printf("%d->",p->data);
			p=p->next;
		}
        printf("%d",p->data);
	}
}
void delete(){
    node* temp=NULL;
    temp=head;
    head=head->next;
    free(temp);
}

int main()
{
	int n,x;


	
	scanf("%d",&n);
	head=create(n);
	
  scanf("%d",&x);
    for(int i=0;i<x;i++){
        delete();
    }
  display(head);
	return 0;
	
	
}