#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(char *a,char *b){
    return *a-*b;
}
int main() {
char ch[20],i;
    scanf("%s",ch);
    int n=strlen(ch);
    for(i=n-2;i>=0;i--){
        if(ch[i]<ch[i+1])break;
    }
    if(i==-1){printf("-1");return 0;}
    else{
        int min=i+1;
        for(int j=i+1;j<n;j++){
            if(ch[j]>ch[i]&& ch[j]<ch[min])min=j;
        }
        char c=ch[i];ch[i]=ch[min];ch[min]=c;
        qsort(ch+i+1,n-i-1,sizeof(char),cmp);
        printf("%s",ch);
    }
    return 0;
}
