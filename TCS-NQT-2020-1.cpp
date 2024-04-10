#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    map<int,int> mp;
    long long int n;
    cin>>n;
    int s;
    while(n!=0){
        s=n%10;
        mp[s]++;
        n=n/10;
    }
    map<int, int>::iterator it = mp.begin();
    while (it != mp.end()) {
        cout <<  it->first<<":"
            <<it->second << endl;
        ++it;
    }
}