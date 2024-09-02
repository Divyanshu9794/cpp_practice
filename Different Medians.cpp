#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	ll t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    for(i=1;i<=n;i++)
	    {
	        if(!(i&1))
	            cout << i/2 << " ";
	        else
	            cout << n-(i/2) << " ";
	    }
	    cout << "\n";
	}
	return 0;
}