#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
        cout<<"YES";
        
    }
    else{
    string c = to_string(n);
    for(int i=0;i<c.length();i++){
        if(c[i]-'0'== 4 || c[i]-'0'==7){

        }
        else{
            cout<<"NO";
             return 0;
        }
    }
    cout<<"YES";
    }

}