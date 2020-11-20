#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    int p=arr[n-1];
    i=0;
    for(j=0;j<n-1;j++){
        if(arr[j]<=p){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i++;
        }
    }
    int t=arr[i];
    arr[i]=arr[n-1];
    arr[n-1]=t;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
