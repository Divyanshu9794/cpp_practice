#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define int long long

void sol(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b){
            c++;
        }
    }
    cout<<c<<endl;
    return;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}
