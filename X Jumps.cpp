#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x%y==0){
            cout<<(x/y)<<endl;
        }
        else if(x<y){
            cout<<x<<endl;
        }
        else{
            cout<<(x/y+x%y)<<endl;
        }
    }
}