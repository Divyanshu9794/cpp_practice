#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
   
   ll n,a,sum=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a;
       sum+=a;
   }
   
   ll k=sqrt(sum);
   if(k*k==sum){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
    
}

int main() {
   
   int t=1;
   cin>>t;
   while(t--){
       solve();
       cout<<"\n";
   }
    return 0;
}