#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<int> skills(16);
        
        for (int i = 0; i < 16; ++i) {
            cin >> skills[i];
        }

        vector<int> maxWins(16);

        // For each player, determine the number of players they can beat
        for (int i = 0; i < 16; ++i) {
            int count = 0;
            for (int j = 0; j < 16; ++j) {
                if (skills[i] > skills[j]) {
                    count++;
                }
            }

            // Determine the maximum number of matches they can win based on the count
            if (count >= 15) maxWins[i] = 4;
            else if (count >= 7) maxWins[i] = 3;
            else if (count >= 3) maxWins[i] = 2;
            else if (count >= 1) maxWins[i] = 1;
            else maxWins[i] = 0;
        }

        for (int i = 0; i < 16; ++i) {
            cout << maxWins[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
