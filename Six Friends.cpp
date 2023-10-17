#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x*3<y*2){
            cout<<x*3<<endl;
        }
        else if(x*3>y*2){
            cout<<y*2<<endl;
        }
        else{
            cout<<x*3<<endl;
        }
    }
}