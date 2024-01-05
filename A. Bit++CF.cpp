#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    string s;
    int x=0;
    while(n--){
        cin>>s;
        if(s[0]=='+'){
            ++x;
        }
        else if(s[0]=='-'){
            --x;
        }
        else if(s[1]=='+'){
            x++;
        }
        else{
            x--;
        }
        
    }
    cout<<x<<endl;
    
}