#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,t,s=0;
        cin>>n;
        s=n;
        vector<int>b;
        for(int i=0;i<n;i++){
            cin>>t;
            b.push_back(t);
        }
        for(int i=0;i<n;i++){
            if(b[i]==b[i+1]){
                s--;
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}