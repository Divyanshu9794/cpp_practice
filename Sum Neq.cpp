#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            arr[i] = val;
        }

        bool same = true;
        int fir= arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] != fir)
                same = false;
        }
        if (same) {
            cout << "NO" << endl;
        } else {
            if (n == 4) {
                if (arr[0] + arr[1] == arr[2] + arr[3]) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            } else {
                cout << "YES" << endl;
            }
        }
        t--;
    }
    return 0;
}