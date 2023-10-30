#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define cn1 cout << "-1" << endl;
#define lli long long int
#define sf(i, x, n) for (lli i = x; i < n; i++)
#define uf(i, x, n) for (lli i = x; i >= n; i--)
#define pb push_back
#define pop pop_back
#define max *max_element
#define min *min_element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, tot = 0, ans = 0, apda = 0;
    cin >> n;
    int arr[n];
    sf(i, 0, n)
    {
        cin >> arr[i];
        tot += arr[i];
    }
    sort(arr, arr + n);
 
    // reverse(arr, arr + n);
 
    for (int i = n - 1; i >= 0; i--)
    {
        apda += arr[i];
        ans++;
        tot -= arr[i];
        if (apda > tot)
        {
            cout << ans << endl;
            return;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}