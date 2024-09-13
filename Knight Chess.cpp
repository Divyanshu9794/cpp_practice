#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,x,y;
	    cin>>n;
	    map<pair<ll,ll>,ll> m;
	    while(n--){
	        cin>>x>>y;
	        m[{x-2,y-1}]++;//all possible moves of knight
	        m[{x-1,y-2}]++;
	        m[{x-2,y+1}]++;
	        m[{x-1,y+2}]++;
	        m[{x+2,y-1}]++;
	        m[{x+1,y-2}]++;
	        m[{x+2,y+1}]++;
	        m[{x+1,y+2}]++;
	    }
	    cin>>x>>y;
	    if(m[{x,y}]!=0){//all possible moves of king
	        if(m[{x-1,y-1}]==0 || m[{x-1,y}]==0 || m[{x-1,y+1}]==0 || m[{x,y-1}]==0 || m[{x,y+1}]==0 || m[{x+1,y-1}]==0 || m[{x+1,y}]==0 || m[{x+1,y+1}]==0)
	            cout<<"NO\n";
	        else
	            cout<<"YES\n";
	    }
	    else
	        cout<<"NO\n";
	}
	return 0;
}