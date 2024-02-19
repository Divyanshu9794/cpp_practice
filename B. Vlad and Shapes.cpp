#include <iostream>
#include <vector>
#include <set>
#include<bits/stdc++.h>
using namespace std;

vector<int> findSquare() {
    string line;
    getline(cin, line);
    vector<int> result;
    size_t pos = 0;
    while ((pos = line.find(' ')) != string::npos) {
        result.push_back(stoi(line.substr(0, pos)));
        line.erase(0, pos + 1);
    }
    result.push_back(stoi(line));
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); 
        set<int> st;
        for (int i = 0; i < n; ++i) {
            string s;
            getline(cin, s);
            if (s.find('1') != string::npos) {
                st.insert(count(s.begin(), s.end(), '1'));
            }
        }

        if (st.size() == 1) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}



//by divyanshu singh