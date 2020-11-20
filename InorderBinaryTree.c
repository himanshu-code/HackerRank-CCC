#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void inorder(int a[],int l,int h){
    if(l<=h && a[l]!=0){
        inorder(a,2*l+1,h);
        printf("%d ",a[l]);
        inorder(a,2*l+2,h);
    }
}
int main() {
int n;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    inorder(a,0,n-1);
    
       
    return 0;
}
