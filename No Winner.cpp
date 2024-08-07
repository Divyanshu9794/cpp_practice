#include <iostream>
#include <algorithm>
using namespace std;

bool canHaveSameScore(int A, int B, int C, int M) {
    int maxScore = max({A, B, C});
    int minScore = min({A, B, C});
    int midScore = A + B + C - maxScore - minScore;
    int maxPossibleMinScore = minScore + M;

    if (maxPossibleMinScore >= midScore && maxPossibleMinScore <= maxScore) {
        return true;
    }

    int maxPossibleMidScore = midScore + M;

    if (maxPossibleMidScore >= maxScore) {
        return true;
    }

    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C, M;
        cin >> A >> B >> C >> M;
        if (canHaveSameScore(A, B, C, M)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
