#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin>>n;
    cout<<0<<endl;
    for(long long i=2;i<=n;i++){
        cout<<(i*i)*(i*i-1)/2 - (4*(i-1)*(i-2))<<endl;
    }
    

}