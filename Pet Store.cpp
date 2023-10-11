#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> a;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        if(n%2!=0){
            cout<<"No"<<endl;

        }
        else{
            int i;
            for( i=0;i<n;i=i+2){
                if(a[i]!=a[i+1]){
                    cout<<"No"<<endl;
                    break;
                }
                
            }
            if(i==n){
                cout<<"Yes"<<endl;
            }
        }
    }
}