#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void*x,const void*y){
    return *(int*)x-*(int*)y;
}
int bs(int a[],int n,int k){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==k)return 1;
        else if(a[m]<k)l=m+1;
        else h=m-1;
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,k,n;
    
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    scanf("%d",&k);
    int c=0;
    qsort(arr,n,4,cmp);
    for(i=0;i<n;i++){
      int x=k-arr[i];
        if(bs(arr,n,x))c++;
    }
    printf("%d",c);
    return 0;
}
