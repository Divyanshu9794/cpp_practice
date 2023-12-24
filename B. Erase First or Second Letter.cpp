#include<bits/stdc++.h>;
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long res = 0;
    set<char> st;
    for (auto ch:s){
    st. insert (ch);
    res+=st. size();
    }
    cout << res<< endl;
    }
}
 