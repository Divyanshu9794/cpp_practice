#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=4){
                c++;
            }
        }
        if(c>0){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
}