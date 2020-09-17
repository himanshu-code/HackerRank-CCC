#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include<string.h>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a1[2000], a2[2000];
    int i=0,j=0;
    cin>>a1>>a2;
    int n=strlen(a1), m=strlen(a2);
    while(n>m){
        cout<<a1[i];i++;n--;
    }
    while(n<m){
        cout<<a2[j];j++;m--;
    }
    while(a1[i]){
        if(a1[i]==a2[j])cout<<"0";
        else cout<<"1";
        i++;j++;
    }
    return 0;

}