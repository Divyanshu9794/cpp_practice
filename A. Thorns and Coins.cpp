#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;){
            if(s[i]=='.'){
                i++;
            }
            else if(s[i]=='@'){
                c++;
                i++;
            }
            else if(s[i]=='*' && s[i+1]=='*'){
                break;
            }
            else{
                i++;
            }
        }
        cout<<c<<endl;
    }
}