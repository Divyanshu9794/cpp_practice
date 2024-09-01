#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define sz size

int main() 
{
	fast;
	ll t,n,k;
	cin >> t;
	while(t--)
	{
	   cin >> n;
	   vector <ll> v;
	   ll i=0,dp[n];
	   for(i=0;i<n;i++)
	   {
	       cin >> k;
	       v.pb(k);
	   }
	   dp[v.sz()-1] = 1;
	   for(i=v.sz()-2;i>=0;i--)
	   {
	       if(v[i]*v[i+1] < 0)
	            dp[i] = dp[i+1]+1;
	       else
	            dp[i] = 1;
	   }
	   for(i=0;i<n;i++)
	   {
	       cout << dp[i] << " ";
	   }
	   cout << endl;
	}
	return 0;
}