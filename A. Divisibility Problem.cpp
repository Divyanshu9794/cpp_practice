#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if (a < b) {
            cout << b - a << endl;
        } else {
            long long m = (b - a % b) % b;
            cout << m << endl;
        }
    }
    return 0;
}
