#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int n=y*z;
        if(x%n==0){
            n=x/n;
            cout<<n<<endl;
        }
        else{
            n=x/n;
            cout<<n+1<<endl;
        }
    }
}