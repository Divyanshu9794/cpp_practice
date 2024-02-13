#include <iostream>
    #include <vector>
    #include <string>
    #include <algorithm>
    using namespace std;
     
     string  can_u_find_smallest(int n) {
         string bita = "abcdefghijklmnopqrstuvwxyz";
         vector< string> ans;
     
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                for (int k = 0; k < 26; k++) {
                    if (i + j + k + 3 == n) {
                        ans.push_back( string(1, bita[i]) + bita[j] + bita[k]);
                    }
                }
            }
        }
     
        return * min_element(ans.begin(), ans.end());
    }
     
    int main() {
        int t;
         cin >> t;
     
        for (int i = 0; i < t; i++) {
            int n;
             cin >> n;
             cout <<  can_u_find_smallest(n) <<  endl;
        }
     
        return 0;
    }