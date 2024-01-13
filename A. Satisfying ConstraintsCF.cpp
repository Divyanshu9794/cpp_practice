#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx=-1,mn=1e9;
        vector<int> m;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a==1){
                mx=max(mx,b);
            }
            else if(a==2){
                mn=min(mn,b);
            }
            else{
                m.push_back(b);
            }
        }
        int ans=max(0,mn-mx+1);
        sort(m.begin(),m.end());
        for(auto a:m){
            if(a>=mx && a<=mn){
                ans--;
            }
        }    
        ans=max(ans,0);
        cout<<ans<<'\n';
    }
    return 0;
}
