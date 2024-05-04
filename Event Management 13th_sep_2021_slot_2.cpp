#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t="";

    for(int i=0;i<s.size();i++){
        if((s[i]=='E' && s[i+1]=='F')||
        (s[i]=='5'&& s[i+1]=='6')){
            i=i+1;
            continue;
        }
        else if(s[i]=='G'){
            continue;
        }
        else{
            t+=s[i];
        }
    }
    cout<<t<<endl;
}