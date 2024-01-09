#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	map<int,int> mp;
 
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		mp[x] = i;		
	}
	cin>>m;
	long long int a=0,b=0;
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin>>x;
		if(mp.count(x)!=0)
		{
			a = a + 1  + mp[x];
		b  = b + n - mp[x];
		}
		else
		{
			a  = a  + n;
			b  = b + n;
		}
	}
	cout<<a<<" "<<b<<endl;
}