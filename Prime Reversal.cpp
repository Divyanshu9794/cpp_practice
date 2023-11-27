#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        
        int a1=0,a0=0,b1=0,b0=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                a0++;
            }
            else{
                a1++;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]=='0'){
                b0++;
            }
            else{
                b1++;
            }
        }
        if(a1==b1 && a0==b0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}