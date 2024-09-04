#include <bits/stdc++.h>
#include<iomanip>
//#define sort(a,n) sort(a,a+n)
#define FastIO ios_base::sync_with_stdio(false),cin.tie(0)
#define int long long
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int>boys;
    vector<int>girls;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        boys.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        int x; cin>>x;
        girls.emplace_back(x);
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end(),greater<int>());
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,boys[i]+girls[i]);
    }
    cout<<maxi<<endl;
}
signed main() {
    FastIO;
    int t; cin>>t;
    while(t--){
        solve();
    }
	return 0;
}