#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int c=0;
        vector<long long> year;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            year.push_back(x);
        }
        for(int i=0;i<n;i++){
            c = (c / year[i] + 1) * year[i];
        }
        cout<<c<<endl;
        
    }
}