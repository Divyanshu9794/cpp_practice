#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        int a;
        cin >> a;
        vector<int> li(a);
        for (int i = 0; i < a; i++) {
            cin >> li[i];
        }
        sort(li.begin(), li.end());
        swap(li[1], li[a - 1]);
        int s = 0;
        for (int i = 0; i < a - 1; i++) {
            s += li[i] + li[i + 1];
        }
        cout << s << endl;
    }
    return 0;
}
