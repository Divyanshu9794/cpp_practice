#include<bits/stdc++.h>
using namespace std;

void min_segment_to_paint(int t, vector<pair<int, string>> test_cases) {
    for(int i = 0; i < t; i++) {
        int n = test_cases[i].first;
        string s = test_cases[i].second;
        int first_black = s.find('B');
        int last_black = s.rfind('B');
        if(first_black == string::npos) {
            cout << 0 << endl;
        } else {
            cout << last_black - first_black + 1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, string>> test_cases;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        test_cases.push_back(make_pair(n, s));
    }
    min_segment_to_paint(t, test_cases);
    return 0;
}
