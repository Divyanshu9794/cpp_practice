#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--) {
        int n; cin >> n;
        
        if(n == 1 || n % 2 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }

    return 0;
}