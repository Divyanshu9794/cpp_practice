#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, x0, y0, l;
        cin >> n >> m >> x0 >> y0 >> l;
        int ans = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {x0, y0}});
        vis[x0][y0] = true;
        int dx[4] = {-l, l, 0, 0};
        int dy[4] = {0, 0, -l, l};
        while(!q.empty()) {
            auto top = q.front();
            q.pop();
            int jumps = top.first;
            int x = top.second.first;
            int y = top.second.second;
            if(jumps > 0) ans++;
            for(int i=0; i<4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];
                if(newX >= 0 && newX < n && newY >= 0 && newY < m && !vis[newX][newY]) {
                    q.push({jumps-1, {newX, newY}});
                    vis[newX][newY] = true;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}