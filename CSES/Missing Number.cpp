#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n-1;i++){
        cin>>arr[i];
    }
    long long sum = 0;
    for (long long i=0;i < n-1;i++) {
        sum += arr[i];
    }
        
    cout<<( n*(n+1)/2 - sum)<<endl;

}