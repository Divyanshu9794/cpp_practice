#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            cin>>s;
            for(char j:s){
                mp[j]++;
            }


        }
        cout<<min({mp['c']/2,mp['o'],mp['d'],mp['e']/2,mp['h'],mp['f']})<<endl;
        

    }
}