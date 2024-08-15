#include <bits/stdc++.h>
using namespace std;

int main() {
    int numTests;
    cin >> numTests;
    for (int i = 0; i < numTests; i++) {
        int totalItems, maxItems;
        cin >> totalItems >> maxItems;
        int result = 2 * maxItems + 1;
        if (totalItems <= maxItems) {
            cout << -1 << endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}
