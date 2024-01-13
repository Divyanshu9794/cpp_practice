#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    string a ;
    reverse(s.begin(),s.end());
    a=s;
    if(a==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}