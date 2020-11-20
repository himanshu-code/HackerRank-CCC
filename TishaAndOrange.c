#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int partition(int arr[],int l,int h){
    int p=arr[h], i=l;
    for(int j=l;j<h;j++){
        if(arr[j]<=p){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i++;
        }
    }
    int t=arr[i];
    arr[i]=arr[h];
    arr[h]=t;
    return i;
}
void quicksort(int arr[],int l, int h){
    if(l<h){
        int p=partition(arr,l,h);
        printf("%d\n",p);
        for(int i=l;i<=h;i++) printf("%d ",arr[i]);
        printf("\n");
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
        
    
    
    quicksort(arr,0,n-1);
    return 0;
}