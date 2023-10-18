#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,int> mp;
        int n;
        cin>>n;
        int arrivalanddeparture;
        for(int i=0;i<n*2;i++){
            cin>>arrivalanddeparture;
            mp[arrivalanddeparture]++;
        }
        int maximumrunways=1;
        for(auto i:mp){
            maximumrunways = (i.second>maximumrunways)?i.second:maximumrunways;

        }
        cout<<maximumrunways;
    }
}