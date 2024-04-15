#include<bits/stdc++.h>
using namespace std;


string movehash(string s){
    int n = s.size();
    string s1="",s2="";
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            s1+=s[i];
        }
        else{
            s2+=s[i];
        }
    }
    return s1+s2;
}

int main(){
    string s;
    cin>>s;
    cout<<movehash(s);
}