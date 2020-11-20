#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,k,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    int m;
    scanf("%d",&m);
    int arr2[m];
    for(i=0;i<m;i++)scanf("%d",&arr2[i]);
        i=0;
    j=0;
    while(i<n && j<m){
        if(arr[i]<=arr2[j])printf("%d ",arr[i++]);
        else printf("%d ",arr2[j++]);
    }
    while(i<n)printf("%d ",arr[i++]);
    while(j<m)printf("%d ",arr2[j++]);
    return 0;
}
