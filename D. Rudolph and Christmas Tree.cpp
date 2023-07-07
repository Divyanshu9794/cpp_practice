
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long



void sol(){
    
    
    int n,b,h;
    cin>>n>>b>>h;
    
    
    int a[n];
    
    for(auto &x:a) cin>>x;
    
    sort(a,a+n);
    
    
    int x=0;
    
    // int count=0;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        
        if(x>a[i]){
            // count+=x-a[i];
            v.push_back(x-a[i]);
        }
        
        x = a[i]+h;
        
    }
    
    
    
    double ans= b*h*n;
    ans/=2;
    
    
    double count=0;
    
    
    for(auto val:v){
        count+=val*val;
    }
    
    
    count*=b;
    count/=2;
    count/=h;
    
    ans-=count;
    
    cout<<ans<<endl;
    
    
    
    return;
}

signed main() {
   int t;
   cin>>t;
   
cout << setprecision(10);
   while(t--){
       sol();
   }
   
   
   return 0;
}