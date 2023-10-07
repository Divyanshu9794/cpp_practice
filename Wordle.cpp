#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,t;
        cin>>a>>b;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                t+='G';
            }
            else{
                t+='B';
            }
        }
        cout<<t<<endl;
        return 0;

    }
}