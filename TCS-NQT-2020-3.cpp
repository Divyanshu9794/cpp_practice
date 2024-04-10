#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s ,back,fwd;
    cin>>s;
    for(int i=1;i<s.size();i++){
        back+=s[i];
    }   
    back+=s[0];
    fwd+=s[s.size()-1];
    for(int i=0;i<s.size()-1;i++){
        fwd+=s[i];
    }
    if(fwd==back){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
