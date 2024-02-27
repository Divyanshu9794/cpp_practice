#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

long long solution(int b, int e) {
    long long value = 1;
    for (int i = 0; i < e; ++i) {
        value *= b;
    }
    return value;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;
        
        unordered_set<int> ks;
        
        for (int x = 0; ; x++) {
            long long power_of_A = solution(a, x);
            if (power_of_A > l) break;
            
            for (int i = 0; ; i++) {
                long long value = power_of_A * solution(b, i);
                if (value > l) break;
                
                if (l % value == 0) {
                    ks.insert(l / value);
                }
            }
        }
        
        cout << ks.size() << endl;
    }
    
    return 0;
}