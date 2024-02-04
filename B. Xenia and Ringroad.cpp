#include<bits/stdc++.h>
using namespace std;

int main() {
	
	long long int n , myplace = 1 , ans = 0 , m;
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++)
	{
		int a;
		cin >> a;
		if(a < myplace)
		{
			ans += (n - myplace) + a;
		}
		else {
			ans += a - myplace;
		}
		myplace = a;
	}
	cout << ans;
}