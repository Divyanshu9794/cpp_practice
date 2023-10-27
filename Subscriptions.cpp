#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%6==0){
            cout<<(a/6)*b<<endl;
        }
        else{
            cout<<((a/6+1)*b)<<endl; 
        }
    }
}