#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

struct queueNode{
    int data;
    struct queueNode* next;
};
typedef struct queueNode queueNode;
queueNode* head = NULL;

queueNode* newNode(int val)
{
    queueNode* t = (queueNode*) malloc(sizeof(queueNode));
    t->data = val, t->next = NULL;
    return t;
}

//BODY

void push(int val)
{ queueNode* temp = newNode(val); 
    
    if (head == NULL) head = temp; 
    else{ queueNode *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
         p->next=temp;
        // temp->next=head;
       
    }

}
void pop()
{
    queueNode *temp=head;
    head=head->next;
    free(temp);
}
int top()
{
    return head->data;
}
int empty()
{if(head==NULL) return 1;
 else return 0;
}

// TAIL

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't')
        {
            if (empty()) printf("Invalid\n");
            else                
                printf("%d\n", top());
        }
        else if (s[0] == 'p' && s[1] == 'o')
        {
            if (empty()) printf("Invalid\n");
            else    pop();
        }
        else
        {
            scanf(" %d", &x);
            push(x);
        }
    }
    return 0;
}