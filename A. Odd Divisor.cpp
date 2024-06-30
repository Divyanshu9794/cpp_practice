#include <iostream>
using namespace std;

string has_odd_divisor(long long n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    if (n > 1) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << has_odd_divisor(n) << endl;
    }
    return 0;
}
