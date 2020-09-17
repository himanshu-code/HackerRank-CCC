#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n,i,j;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==1||arr[n-j-1][i]==1||arr[n-i-1][n-j-1]==1||arr[j][n-i-1]==1) cout<<"1 ";
           else cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}