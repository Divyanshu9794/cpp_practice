#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int a[n],b[n];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
        cin>>b[i];

    }
    int diff = a[0]-b[0];
    maxi= max(maxi,diff);
    for(int i=1;i<n;i++){
        
        
        diff = a[i]+diff;
        diff = diff-b[i];
        maxi= max(maxi,diff);


    }
    cout<<maxi<<endl;
}