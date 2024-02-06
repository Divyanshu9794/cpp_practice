#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s(n, 'a');
        int cur = 0;
        for(int i = 1; i < n; i++) {
            if(a[i] < a[i-1]) {
                s[i] = s[i-a[i]];
            } else {
                cur++;
                s[i] = 'a' + cur;
            }
        }

        cout << s << "\n";
    }

    return 0;
}
