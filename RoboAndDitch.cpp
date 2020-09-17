#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int f,b,fd,bd,t;
    cin>>f>>b>>fd>>bd>>t;
    if(f==b){
        if(fd<=f)cout<<"F "<<fd*t;
        else cout<<"NO";
    }
else{
    bd=-bd;
    int total=0,p=0;
    while(1){
        if(p+f>=fd){
            cout<<"F "<<(total+fd-p)*t;
            break;
        }
        else{
            p=p+f;
            total+=f;
        }
        if(p-b<=bd){
            cout<<"B "<<(total-bd+p)*t;
            break;
        }
        else{
            total+=b;
            p-=b;
        }
    }
}
    return 0;
}