#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s=="break" || s=="case" ||s=="continue" ||s=="default" ||s=="defer" ||s=="else" ||s=="for" ||s=="func" ||s=="goto" ||s=="if" ||s=="map" ||s=="range" ||s=="return" ||s=="struct" ||s=="type" ||s=="var"){
        cout<<s<<" is a keyword"<<endl;
    }
    else{
        cout<<s<<" is not a keyword"<<endl;
    }


}