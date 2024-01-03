#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    unordered_map<char,int> mp1,mp2;
    for(int i=0;i<a.size();i++){
        mp1[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        mp1[b[i]]++;
    }

    for(int i=0;i<c.size();i++){
        mp1[c[i]]--;
    }
    bool f=1;
    for(auto &a:mp1){
        if(a.second!=0){
            f=0;
            break;
        }
    }
    if(f==0){
        cout<<"NO"<<endl;

    }
    else{
        cout<<"YES"<<endl;
    }





}