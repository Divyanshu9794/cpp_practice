#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int D, X, Y; // D = discount per session, X = membership cost, Y = Chef's budget
        cin >> D >> X >> Y;

        // If Chef already has enough money to buy the membership without any discount
        if (Y >= X) {
            cout << 0 << endl;
            continue;
        }

        int required_sessions = -1; // Default value if Chef can't afford membership

        // Try to find the minimum number of trial sessions Chef needs to take
        for (int sessions = 0; sessions <= 100; ++sessions) {
            // Remaining coins after taking sessions
            int remaining_budget = Y - sessions;

            // Calculate the discount on the membership after taking sessions
            double discounted_price = X * (100 - sessions * D) / 100.0;

            // If Chef can afford the membership after taking this many sessions
            if (remaining_budget >= 0 && remaining_budget >= ceil(discounted_price)) {
                required_sessions = sessions;
                break;
            }
        }

        cout << required_sessions << endl;
    }

    return 0;
}
