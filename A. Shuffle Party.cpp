#include <iostream>
using namespace std;

int largestPowerOfTwo(int n) {
    int p = 1;
    while (p <= n) {
        p *= 2;
    }
    return p / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << largestPowerOfTwo(n) << endl;
    }
    return 0;
}
