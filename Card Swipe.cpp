#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(mp[a[i]]==0){
                mp[a[i]]++;
                ans++;
            }
            else{
                mp[a[i]]--;
                ans--;
            }
            res = max(res,ans);


            
        }
        cout<<res<<endl;


    }
}
