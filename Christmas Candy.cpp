#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        vector<int> prefixMax(n);
        prefixMax[0] = arr[0];
        for(int i = 1; i < n; i++)
            prefixMax[i] = max(prefixMax[i-1], arr[i]);
        
        int count = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] < prefixMax[i-1])
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
