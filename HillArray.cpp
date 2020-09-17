#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void isHill(int arr[],int n){
    int i=1;
    while(arr[i]>arr[i-1]&&i<n) i++;
     while(arr[i]==arr[i-1]&&i<n) i++;
     while(arr[i]<arr[i-1]&&i<n) i++;
    if(i==n){
        cout<<"yes";
    }
    else 
        cout<<"no";
}

int main() {
    int arr[10000];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    isHill(arr,n);
    return 0;
}
