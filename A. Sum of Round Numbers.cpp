#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        int powr=1;
        while(n>0)
        {
            if(n%10>0)
            {
                v.push_back((n%10)*powr);
            }
            n/=10;
            powr*=10;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
}