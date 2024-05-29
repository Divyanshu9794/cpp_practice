#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int left = s[0] - '0';
    int right = s[1] - '0';
    int up = s[2] - '0';
    int down = s[3] - '0';
    
    int horizontal = 0;
    int vertical = 0;
    
    if (left && right) {
        horizontal = 21;  // -10 to 10 inclusive
    } else if (left) {
        horizontal = 11;  // -10 to 0 inclusive
    } else if (right) {
        horizontal = 11;  // 0 to 10 inclusive
    }
    
    if (up && down) {
        vertical = 21;  // -10 to 10 inclusive
    } else if (up) {
        vertical = 11;  // 0 to 10 inclusive
    } else if (down) {
        vertical = 11;  // -10 to 0 inclusive
    }
    
    return horizontal * vertical;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
