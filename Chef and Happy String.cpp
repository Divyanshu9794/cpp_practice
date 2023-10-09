#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int c=0;
    while(t--){
        string s ;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c++;
                if(c==3){
                    cout<<"Happy"<<endl;
                    break;
                }
            }
            else{
                c=0;
            }
                
            
            
        }
        if(c!=3){
            cout<<"sad"<<endl;
                
        }
        
    }
}