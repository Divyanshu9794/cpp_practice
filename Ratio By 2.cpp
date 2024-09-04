#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;

        // Check if condition is already met
        if (X >= 2 * Y || Y >= 2 * X) {
            cout << 0 << endl;
            continue;
        }

        // Calculate minimum operations needed
        int operations = 0;

        // Case 1: Increase X or Decrease Y
        operations = max((2 * Y - X + 1) / 2, (X - 2 * Y + 1) / 2);
        operations = max(operations, 0); // Make sure it's non-negative

        // Case 2: Increase Y or Decrease X
        int alt_operations = max((2 * X - Y + 1) / 2, (Y - 2 * X + 1) / 2);
        alt_operations = max(alt_operations, 0); // Make sure it's non-negative

        // Take the minimum of the two cases
        cout << min(operations, alt_operations) << endl;
    }
    return 0;
}
