#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
         int K;
        if (x> 1)
        {
            K = min(y / (x - 1), y);
        }
        else
        {
            K = y;
        }
        cout << K << endl;
    }
    

    return 0;
}
