#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        cout<<(a/2 + a%2)<<" "<< (a/3 + (a%3!=0))<<endl;
    }
}