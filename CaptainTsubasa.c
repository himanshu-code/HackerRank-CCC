#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int stack[100000];
int main() {
 int t;
    scanf("%d",&t);
    while(t--){
        int n,x,top=-1,y;
        scanf("%d%d",&n,&x);
        stack[++top]=x;
        for(int i=0;i<n;i++){
            char c;
            scanf("\n%c",&c);
            switch(c){
                case 'P':scanf("%d",&x);stack[++top]=x;break;
                case 'B':y=stack[top];stack[top]=stack[top-1];stack[top-1]=y;
            }
        }
        printf("Player %d\n",stack[top]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
