#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                a[i]=abs(a[i]);
            }
        }
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        cout<<s<<endl;


    }
}