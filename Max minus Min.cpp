#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,v,c;
        cin>>a>>b>>c;
        int mx = max(a,max(b,c));
        int mn = min(a,min(b,c));
        cout<<mx-mn<<endl;
    }
}