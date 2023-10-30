#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int calculatePower(const vector<int>& villagers, int l, int r) {
    int power = 0;
    for (int i = l; i < r; i++) {
        power += abs(villagers[i] - villagers[i + 1]);
    }
    return power;
}

int minimizePower(const vector<int>& villagers, int k) {
    int n = villagers.size();
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, INT_MAX));
    vector<int> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + villagers[i - 1];
        dp[1][i] = calculatePower(villagers, 0, i - 1);
    }

    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int x = i - 1; x < j; x++) {
                int power = calculatePower(villagers, x, j - 1);
                dp[i][j] = min(dp[i][j], dp[i - 1][x] + power);
            }
        }
    }

    return dp[k][n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> villagers(n);
        for (int i = 0; i < n; i++) {
            cin >> villagers[i];
        }

        int minPower = minimizePower(villagers, k);
        cout << minPower << endl;
    }

    return 0;
}