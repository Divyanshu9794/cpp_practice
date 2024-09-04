#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int calculatePairs(int count) {
    return (count * (count - 1)) / 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;
        int zeroCount = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] == 0) {
                zeroCount++;
            } else {
                freq[A[i]]++;
            }
        }

        int existingPairs = 0;
        int maxFreq = 0;
        for (auto &entry : freq) {
            existingPairs += calculatePairs(entry.second);
            maxFreq = max(maxFreq, entry.second);
        }

        int additionalPairs = zeroCount * maxFreq + calculatePairs(zeroCount);

        int totalPairs = existingPairs + additionalPairs;

        cout << totalPairs << endl;
    }

    return 0;
}
