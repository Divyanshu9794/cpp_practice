#include <iostream>
using namespace std;

long long Find_permutation_toadd(int number) {
    if (number % 2 == 0) {
        return (number / 2) * (number / 2 + 1);
    } else {
        return ((number / 2) + 1) * ((number / 2) + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int number;
        cin >> number;
        cout << Find_permutation_toadd(number) << endl;
    }

    return 0;
}