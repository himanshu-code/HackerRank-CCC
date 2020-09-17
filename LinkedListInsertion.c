#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* head=NULL;
void insert(int pos,int val){
    node *temp=NULL,*p=NULL;
    temp=(node*)malloc(sizeof(node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        temp->next=head;
        head=temp;
        
    }
    else{
        if(pos==0){
            temp->next=head;
            head=temp;
        }
        else{
            p=head;
           for(int i=0;i<pos-1;i++){
               p=p->next;
           }
            node *x=p->next;
            temp->next=x;
            p->next=temp;
        }
        
    }
}
void display(node *head){
   node *p;
    p=head;
		while(p->next!=NULL)
		{
			printf("%d->",p->data);
			p=p->next;
        }
    printf("%d",p->data);
}

int main() {
int n,i;
int val,pos;
scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&pos,&val);
       insert(pos,val);    
    }
    display(head);
    
     
    return 0;
}