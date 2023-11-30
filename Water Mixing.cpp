#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b){
            int n = b-a;
            if(n<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }


        }
        else if(a>b){
            int n = a-b;
            if(n<=d){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}