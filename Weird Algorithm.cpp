#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> ans;
    ans.push_back(n);
    while(n!=1){
        if(n%2==0){
            long long m = n/2;
            ans.push_back(m);
            n=m;
        }
        else{
            long long m = n*3 + 1;
            ans.push_back(m);
            n=m;
        }

    }
    for(long long i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    

}