#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=0;
    int maxi=arr[0],mini=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mini){
            mini=arr[i];
            ans++;
        }
        else if(arr[i]>maxi){
            maxi=arr[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}