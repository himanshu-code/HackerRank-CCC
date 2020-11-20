#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    if(m>=n){printf("%d %d",1,n);return 0;}
    int x=0,y=0,c=0,max=0,p=0,e=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)c++;
        if(a[i]==0){
            if(e==0)p=i;
            e++;c++;
        }
        if(e>m || i==n-1){
            if(max<c){
                max=c;
                if(i==n-1 && a[i]==1)y=i;
                else y=i-1;
                x=i-c+1;
            }
            c=0;e=0;if(i!=n-1)i=p;
        }
    }
    printf("%d %d",x+1,y+1);
    return 0;
}
