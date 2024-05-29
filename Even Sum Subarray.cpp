#include <bits/stdc++.h>
using namespace std;

int largestEvenSumSubarray(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefixSum(n+1, 0);
    unordered_map<int, int> firstOccurrence;
    int maxLength = 0;
    
    // Initialize the first occurrence of even and odd sums
    firstOccurrence[0] = -1;  // Parity of even sum is 0
    
    for (int i = 0; i < n; i++) {
        prefixSum[i+1] = prefixSum[i] + arr[i];
        int parity = prefixSum[i+1] % 2;
        if (parity == 0) {
            maxLength = max(maxLength, i+1);
        } else if (firstOccurrence.count(parity)) {
            maxLength = max(maxLength, i - firstOccurrence[parity]);
        } else {
            firstOccurrence[parity] = i;
        }
    }
    
    return maxLength;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << largestEvenSumSubarray(arr) << endl;
    }
}
