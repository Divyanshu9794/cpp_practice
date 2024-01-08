#include<bits/stdc++.h>
#include <iostream>
#include <cctype>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int upper = 0, lower =0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
    }
    else if(lower>upper){
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    }
    cout<<s<<endl;
}