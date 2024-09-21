#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n;
  cin >> n;
  ll a[n];
  for(ll i=0; i<n; i++) cin >> a[i];
  ll f=0,s=0,i=0,j=n-1;
  
  while(i<=j){
    if(f<s) f+= a[i++];
    else s+= a[j--];
  }

  cout << max(f,s)<< endl;
}
int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}