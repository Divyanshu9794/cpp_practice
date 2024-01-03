#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=b/a;
        if(c*a<b){
            cout<<c<<endl;
        }
        else{
            cout<<c-1<<endl;
        }
    }
}