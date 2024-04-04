#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(i==0){
            if(s[i]=='9'){
                continue;
            }
        }
        if(s[i]<'5'){
            continue;
        }
        else{
            s[i]=('9'-s[i])+'0';
        }
        
    }
    cout<<s<<endl;

}