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
		while(p!=NULL)
		{
			printf("->%d",p->data);
			p=p->next;
		}
	}
}
void search(node *head,int x)
{
	node *current=head;
	int flag=0,count=0;
	while(current!=NULL)
	{
		if(current->data==x)
		{ flag++;
		
         break;		
		}
		current=current->next;
		count++;
	}
	if(flag>0)
	{ printf("yes");
	}
    else printf("no");
}

int main()
{
	int n;
//	node *head=NULL;
int val;

	scanf("%d",&n);
	head=create(n);
	scanf("%d",&val);
    search(head,val);


	return 0;
	
	
}