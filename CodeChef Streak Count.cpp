#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
// constant
const int mod = 1e9+7;
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int b[n];
        int count1 = 0;
        int count2 = 0;
        int maxc1 = INT_MIN;
        int maxc2 = INT_MIN;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(a[i]){
                count1++;
                maxc1 = max(maxc1,count1);
            }
            else{
                count1 = 0;
            }
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
            if(b[i]){
                count2++;
                maxc2 = max(maxc2,count2);
            }
            else{
                count2 = 0;
            }
        }
        if(maxc1>maxc2){
            cout<<"Om\n";
        }
        else if(maxc1<maxc2){
            cout<<"Addy\n";
        }
        else{
            cout<<"Draw"<<endl;
        }
        
    }
    return 0;
}