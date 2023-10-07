#include<bits/stdc++.h>
#include <string> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a = to_string(n);
        string b = a;
        reverse(a.begin(),a.end());
        if(a==b){
            cout<<'wins';

        }
        cout<<'wins';

    }
    return 0;
}