// A. Football


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n= s.size();
    int c=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else {
            c=1;
        }
        if(c>=7){
            break;
        }
        
    }
    if(c>=7){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}