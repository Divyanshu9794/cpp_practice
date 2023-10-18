#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    
        unordered_map<int,int> mp;
        int n;
        cin>>n;
        int marks;
        for(int i=0;i<n;i++){
            cin>>marks;
            mp[marks]++;
        }
        int maxma=0;
        for(auto i:mp){
            maxma = (i.second>maxma)?i.second:maxma;

        }
        if(maxma==1){
            cout<<0<<endl;
        }
    
}