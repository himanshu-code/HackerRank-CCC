#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f0,f1,f2;
int find(int n){
    if(n==0)return f0;
    if(n==1)return f1;
    if(n==2)return f2;
    return find(n-1)^(find(n-2)+find(n-3));
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d%d%d%d",&f0,&f1,&f2,&n);
    printf("%d",find(n));
    return 0;
}
