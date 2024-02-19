#include <iostream>
#include <vector>
using namespace std;

const int maxn = 200010;
vector<int> s(maxn, 0);

int dp(int n) {
    int res = 0;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i < maxn; ++i) {
        s[i] = dp(i) + s[i - 1];
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << s[n] << endl;
    }

    return 0;
}
