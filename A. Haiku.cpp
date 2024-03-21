#include<bits/stdc++.h>
#include  <iostream>
using namespace std;

int main(){
    string s,t,w;
    getline(cin,s);
    getline(cin,t);
    getline(cin,w);
    int n= s.size();
    int m= t.size();
    int p= w.size();
    int c=0,d=0,f=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            c++;
        }
    }
    for(int i=0;i<m;i++){
        if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'){
            d++;
        }
    }
    for(int i=0;i<p;i++){
        if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'){
            f++;
        }
    }
    if(c==5 && d==7 && f==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}