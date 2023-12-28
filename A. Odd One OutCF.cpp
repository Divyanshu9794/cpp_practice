#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n =3;
        int a[3];
        unordered_map<int,int > mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (mp[a[i]] == 1)
            {
                cout << a[i]<< endl;
            
            }
        }
    }

}