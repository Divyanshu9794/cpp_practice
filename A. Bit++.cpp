#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--){
        
        string s;
        cin>>s;
        int n= s.size();
        if(s[0]=='+'){
            ++x;
        }
        else if(s[0]=='-'){
            --x;
        }
        else if(s[1]=='+'){
            x++;
        }
        else if(s[1]=='-'){
            x--;
        }
    }
    cout<<x;
}