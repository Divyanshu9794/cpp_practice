#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long pro = 1;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            pro *= x;
        }
        if (2023 % pro == 0)
        {
            cout << "YES" << endl;
            cout << 2023 / pro << " ";
            for (int i = 1; i <= k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}