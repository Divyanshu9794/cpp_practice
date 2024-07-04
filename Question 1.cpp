#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {  
    int t;  
    cin >> t;  
    while (t--) {  
        int n, m;  
        cin >> n >> m;  
        int i0, j0;  
        vector<vector<int>> a(n, vector<int>(m));  
     for (int i = 0; i < n; i++) {  
            for (int j = 0; j < m; j++) {  
                char c;  
                cin >> c;  
                if (c == '-') a[i][j] = -1;  
                else if (c == '0') a[i][j] = 0;  
                else a[i][j] = 1;  
            }  
        }  
        cin >> i0 >> j0;  
        i0--; 
        j0--;  
        int ans = 0;  
        for (int i = 0; i < n; i++) {  
            for (int j = 0; j < m; j++) {  
                ans += abs(i - i0) + abs(j - j0) + a[i][j];  
            }  
        }  
        cout << ans << endl;  
    }  
    return 0;  
}  
