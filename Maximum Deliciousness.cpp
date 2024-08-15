#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Sort pastries by deliciousness in descending order
        sort(arr.rbegin(), arr.rend());
        
        long long sum = 0;
        
        // Collect pastries you will buy
        for (int i = l - 1; i < n; i += k) {
            sum += arr[i];
        }
        
        cout << sum << endl;
    }
    return 0;
}