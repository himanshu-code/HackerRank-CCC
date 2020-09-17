//HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//BODY

struct stackNode{
    int val;
    struct stackNode* next;
};
typedef struct stackNode stackNode;
stackNode* stackHead;// - Head Pointer for stack LinkedList
void push(int x){
 
 stackNode *temp=(stackNode*)malloc(sizeof(stackNode));
 temp->next=NULL;
 temp->val=x;
	if(stackHead==NULL)
 { 
   stackHead=temp;
 }
else
{

  temp->next=stackHead;
  stackHead=temp;
  
}
} //- Insert an element onto the top of the stack
int peek(){
return stackHead->val;
} //- Returns the topmost element on the stack
void pop(){
stackNode *top1=stackHead;
	if(top1==NULL)
	{ printf("empty");
	return;
	}
	else
	{
		stackHead=stackHead->next;
		//printf("popped value %d\n",top1->val);
		free(top1);
		
	}
} //- Removes an element from the top of the stack
int empty(){
if(stackHead==NULL){
return 1;
}
return 0;
} //- Returns 1 if the stack is empty and 0 otherwise

//TAIL

int main()
{
    int n;
    stackHead = NULL;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, x;
        scanf("%d", &t);
        if (t == 1) {
            scanf("%d", &x);
            push(x);
        }
        else if (t == 2) {
            if (empty()) {
                printf("Invalid\n");
            }
            else {
                pop();
            }
        }
        else if (t == 3){
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            stackNode* j = stackHead;
            while (j) {
                printf("%d ", j->val);
                j = j->next;
            }
            printf("\n");
        }
        else {
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            printf("%d\n", peek());
        }
    }
    return 0;
}