#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int n = x*y;
        if(n%4!=0){
            cout<<(n/4)+1<<endl;
        }
        else{
            cout<<ceil(n/4)<<endl;
        }
    }
}