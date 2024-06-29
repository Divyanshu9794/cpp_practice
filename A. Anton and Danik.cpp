#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ac=0,dc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            ac++;
        }
        else{
            dc++;
        }
    }
    if(ac>dc){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
}