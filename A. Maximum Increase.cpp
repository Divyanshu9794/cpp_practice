#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> a;
    int cnt=1,mx=1,mxi=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);

    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            cnt++;
            if(cnt>mx){
                mx=cnt;
            }
        }
        else {
            
            cnt=1;
        }
        
    }
    
    cout<<mx<<endl;
}