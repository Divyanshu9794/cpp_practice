
#include<bits/stdc++.h>
using namespace std;

void LightsOut()
{
	const int n = 3;
	const int m = 3;
	int g[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> g[i][j];
		}
	}
	int ans[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[i][j] += g[i][j];
			if (i + 1 < n) {
				ans[i][j] += g[i + 1][j];
			}
			if (i - 1 >= 0) {
				ans[i][j] += g[i - 1][j];
			}
			if (j + 1 < m) {
				ans[i][j] += g[i][j + 1];
			}
			if (j - 1 >= 0) {
				ans[i][j] += g[i][j - 1];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ans[i][j] % 2 == 0) {
				ans[i][j] = 1;
			}
			else {
				ans[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << ans[i][j];
		}
		cout << endl;
	}
}
int main()
{
	LightsOut();
}