#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; 
    cin>> n >> k;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;++i){
        cin>> v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    int ans=0,misa=0;
    vector<int> p;
    for(int i=0;i<n;++i){
        if(misa+v[i].first<=k){
            misa+=v[i].first;
            p.push_back(v[i].second);
        }else{
           break;
        }
    }
    cout<<p.size()<<endl;
    for(int i=0;i<p.size();++i)
        cout<<p[i]<<" ";
    return 0;
}