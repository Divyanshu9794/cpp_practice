#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];

    }
    int c=0;
    int ans;
    for(int i=0;i<n;i++){
        if (count(s.begin(), s.end(), s[i]) > c) {
    
                c = count(s.begin(), s.end(), s[i]);
                ans = i;
            }
        }
    
 
    cout<<s[ans] << endl;

}