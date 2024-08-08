#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,x,k;
	    cin>>n>>x>>k; int flag=0;
	    if(x%k==0) cout<<"YES"<<endl;
	   else { int h=ceil((n+1)/k);
	   int r=(h*k)-(n+1);
	       if((n+1)%k==0  &&  x%k!=0) cout<<"NO"<<endl;
	       else if((n+1)%k!=0  and (x+r)%k==0) cout<<"YES"<<endl;
	       else cout<<"NO"<<endl;
	} 
	}
	return 0;
}