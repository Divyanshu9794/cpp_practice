#include<bits/stdc++.h>
using namespace std;
void fillPrefixSum(long long a[], long long n, long long prefixSum[]) 
{ 
    prefixSum[0] = a[0]; 
    
    for (int i = 1; i < n; i++) 
        prefixSum[i] = prefixSum[i - 1] + a[i]; 
} 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n],prefixSum[n];
        long long s=0;
        vector<long long> ans;
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        fillPrefixSum(a, n, prefixSum);
        ans.push_back(prefixSum[0]);
        for(long long i=1;i<=n;i++){
            if(prefixSum[i]%2==0){
                ans.push_back(prefixSum[i]);
            }
            else{
                int a = round(prefixSum[i]/2);
                a=a*2;
                ans.push_back(a);
            }
        }
        for(int i=0;i<n;i++){
            cout<<prefixSum[i];
        }
    }
}