#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    string s = to_string(n);
    int size= s.size();
    int a=0;
    for(int i=0;i<size;i++){
        if(s[i]=='4' || s[i]=='7'){
            a++;
        }
        
    }
    if(a==4 || a==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}