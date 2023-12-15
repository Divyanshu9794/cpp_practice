#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=1;
    int maxi= INT_MIN;
    for(int i=1;i<=s.length();i++){
        if(s[i-1]==s[i]){
            c++;
            continue;
        }
        maxi = max(c,maxi);
        c=1;
    }
    cout<<maxi<<endl;
}