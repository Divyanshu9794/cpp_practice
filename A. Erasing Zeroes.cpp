#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  string s;
  cin>>s;
  long long  n=s.size();
  long long l1=n-1,r1=0;
  for(long long i=0,j=n-1;i<n;i++,j--){
    if(s[j]=='1')
      l1=j;
    if(s[i]=='1')
      r1=i;
  }
 
long long count=0;
  for(long long i=l1+1;i<r1;i++){
    if(s[i]=='0')
      count++;
  }
  cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
}