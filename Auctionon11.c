#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
    scanf("%d",&n);
    int r=11;
    long ans=1;
    for(int i=1;i<=r;i++){
        ans=ans*(n-r+i);
        ans=ans/i;
    }
    printf("%ld",ans);
    return 0;
}