#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<5;i++){
            if(s[i]=='A'){
                c++;
            }
        }
        int cb= 5-c;
        if(cb>c){
            cout<<"B"<<endl;
        }
        else{
            cout<<"A"<<endl;
        }
    }
    return 0;
}