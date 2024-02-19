#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<char> s(n);
        vector<int> res;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a.push_back(k);
        }
        for(int i=0;i<n;i++){
            char k;
            cin>>k;
            s.push_back(k);
        }
        int multi = accumulate(begin(a), end(a), 1.0, multiplies<int>());
        multi = multi%m;
        for(int i=0;i<n;){
            if(s[i]=='L'){
                i++;
                multi = accumulate(begin(a), end(a), 1.0, multiplies<int>());
                res.push_back(multi);
            }
            else{
                n=n-1;
                multi = accumulate(begin(a), end(a), 1.0, multiplies<int>());
                res.push_back(multi);
            }
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }

    }
}