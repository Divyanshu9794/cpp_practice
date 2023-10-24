#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a-b>0){
            cout<<(a-b)*c<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}