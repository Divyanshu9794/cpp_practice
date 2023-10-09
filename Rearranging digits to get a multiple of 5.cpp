#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n;
        string s;
        char c;
        for(int i=0;i<n;i++){
            cin>>c;
            s+=c;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0' || s[i]=='5'){
                b++;

            }
            
        }
        if(b>0){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}