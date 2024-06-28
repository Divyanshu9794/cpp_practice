#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool canCollect(int x, int y) {
    if (x == 0 || y == 0) return true; // Direct horizontal or vertical movement
    if (abs(x) == abs(y)) return true; // Diagonal movement
    return false; // Non-direct diagonal movement requires further checks
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }

    for (const auto& coin : coins) {
        int x = coin.first;
        int y = coin.second;

        if (y < 0 && abs(x) <= abs(y)) {
            cout << "YES" << endl;
        } else if (y >= 0 && abs(x) <= abs(y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
