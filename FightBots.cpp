#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
    string moves;
    cin >> moves;
    
    long long aliceX = 0, aliceY = 0;
    
    for(int i = 1; i <= n; i++) {
        if(moves[i-1] == 'U') {
            aliceY++;
        } else if(moves[i-1] == 'D') {
            aliceY--;
        } else if(moves[i-1] == 'L') {
            aliceX--;
        } else if(moves[i-1] == 'R') {
            aliceX++;
        }
        
        long long distance = abs(x - aliceX) + abs(y - aliceY);
        if(distance <= i && distance % 2 == i % 2) {
            cout << "Yes" << endl;
            return;
        }
    }
    
    cout << "No" << endl;
}

int main() {
    int testCases;
    cin >> testCases; // Read the number of test cases
    while(testCases--) {
        solve();
    }
    return 0;
}
