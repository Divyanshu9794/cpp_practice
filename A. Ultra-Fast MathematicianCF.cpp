#include<bits/stdc++.h>
using namespace std;

int main(){
    string c,d,s="";
    cin>>c;
    cin>>d;
    for(int i=0;i<c.size();i++){
        if((c[i]=='1' && d[i]=='1')||
        (c[i]=='0' && d[i]=='0')){
            s+='0';
        }
        else{
            s+='1';
        }
    }
    cout<<s<<endl;
}
