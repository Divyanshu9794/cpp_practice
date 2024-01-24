#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int P, L;
        cin >> P >> L;
        double literacyRate = (double)L / P * 100;
        if(literacyRate >= 75) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
