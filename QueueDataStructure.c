#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//BODY

int queue[500005], front=0, back=0;
void push(int val)
{      
      
      queue[back] = val;
    back++;
    
}
void pop()
{ 
    front=front+1;
}
int top()
{  return queue[front];
}
int empty()
{ if(front==back) return 1;
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