#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isVowel(char c) 
{ 
    return (c=='a' || c=='A' || c=='e' || 
            c=='E' || c=='i' || c=='I' || 
            c=='o' || c=='O' || c=='u' || 
            c=='U'); 
} 
  

string reverseVowel(string str) 
{ 
    int j=0; 
    
    char vowel[100005]; 
    for (int i=0; str[i]!='\0'; i++) 
        if (isVowel(str[i])) 
            vowel[j++] = str[i]; 
  

    for (int i=0; str[i]!='\0'; i++) 
        if (isVowel(str[i])) 
            str[i] = vowel[--j] ; 
  
    return str; 
} 
  
 
int main() 
{ 
    char str[100005];
    cin>>str;
    cout << reverseVowel(str); 
    return 0; 
}