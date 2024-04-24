#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    string c; cin>> c;
    string ans="";
    int cont=0,aux=0;
    for(int i=0;i<c.size();i+=cont){
        ans+=c[i];
        cont++;
 
    }
    cout<<ans<<endl;
}