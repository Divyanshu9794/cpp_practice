#include <iostream>
#include<bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long maxi = -1, mini = LLONG_MAX;
        vector<long long> vect1(n), b(n);

        for (long long i = 0; i < n; i++) {
            cin >> vect1[i];
            maxi = max(maxi, vect1[i]);
        }

        for (long long i = 0; i < n; i++) {
            cin >> b[i];
            mini = min(mini, b[i]);
        }

        long long s = maxi + mini;
        bool f = false;

        sort(vect1.begin(),vect1.end());
        reverse(vect1.begin(),vect1.end());
        sort(b.begin(),b.end());

        for (long long i = 0; i < n; i++) {
            if (vect1[i] + b[i] != s) {
                cout << -1 << endl;
                f = true;
                break;
            }
        }

        if (!f) {
            for (const auto &i : vect1) {
                cout << i << ' ';
            }
            cout << endl;
            for (const auto &i : b) {
                cout << i << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}