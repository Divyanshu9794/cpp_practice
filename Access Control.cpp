#include<bits/stdc++.h>
using namespace std;

char* is(int n, int y, char S[]) {
    int sw = 0;
    for (int i = 0; i < n; i++) {
        if (S[i] == '0') {
            if (sw == 0) {
                return "NO";
            }
            sw--;
        } else {
            sw = y;
        }
    }
    return "YES";
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int n, y;
        cin>>n>>y;
        char S[n+1];
        cin>>S;
        printf("%s\n", is(n, y, S));
    }
    return 0;
}