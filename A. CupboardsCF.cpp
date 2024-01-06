#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<vector<int>> a(t, vector<int> (2));
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    int l = 0, r = 0;
    for(int i = 0; i < t; i++){
        if(a[i][0] == 1) l += 1;
    }
    for(int i = 0; i < t; i++){
        if(a[i][1] == 1) r += 1;
    }
    cout << min(l, t - l) + min(r, t - r) << endl;


}