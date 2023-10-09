#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        char c;
        for(int i=0;i<n;i++){
            cin>>c;
            s+=c;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cout<<"YES"<<endl;

            }
            
        }
        cout<<"No"<<endl;

    }
    return 0;
}