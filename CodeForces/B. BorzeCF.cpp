#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string temp = "";
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            temp+='0';
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            temp+='1';
            i++;
        }
        else{
            temp+='2';
            i++;
        }
    }
    cout<<temp<<endl;
}