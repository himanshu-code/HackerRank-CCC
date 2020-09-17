#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int stack[100000],m1[100000],m2[100000];
int max=-1,min=-1,top=-1;

int main() {

    int t,i;

char cmd[10];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",cmd);
        if(strcmp(cmd,"Add")==0){
            int x;
            scanf("%d",&x);
            if(top==-1 || m1[max]<=x)m1[++max]=x;
            if(top==-1 || m2[min]>=x)m2[++min]=x;
            stack[++top]=x;
            
        }
        if(strcmp(cmd,"CallMin")==0){
           if(top==-1){
                printf("Invalid\n");
                
           }
            else printf("%d\n",m2[min]);
        } 
        else if(strcmp(cmd,"CallMax")==0){
            if(top==-1){
                printf("Invalid\n");
                
            }
            else printf("%d\n",m1[max]);
        }
        else if(strcmp(cmd,"Remove")==0){
            if(top==-1){
                printf("Invalid\n");
                
            }
            else{
                if(stack[top]==m1[max]){
                    max=max-1;
                }
                if(stack[top]==m2[min]){
                    min=min-1;
                }
                top--;
            }
        }   
    }
        
    return 0;
}
