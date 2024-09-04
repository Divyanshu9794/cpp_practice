#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void findMultisetState() {
    int n, k;
    cin >> n >> k;
    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    while (k--) {
        int minVal = *ms.begin();
        int maxVal = *ms.rbegin();
        ms.erase(ms.find(minVal));
        ms.erase(ms.find(maxVal));
        ms.insert(minVal + maxVal);
    }
    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        findMultisetState();
    }
    return 0;
}


