#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    vector<int> a;
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        a.push_back(d);

    }
    int maxi=0;
    int mini=1112;
        int max_ind=0,min_ind=0;
    for(int i=0;i<n;i++){
        
        if(a[i]>maxi){
            maxi=a[i];
            max_ind=i;
        }
        if(a[i]<=mini){
            mini=a[i];
            min_ind=i;
        }
    }

    if(max_ind>min_ind){
        cout<<(max_ind-1)+(n-min_ind)-1;
    }    
    else{
        cout<<(max_ind-1)+(n-min_ind);
    }
    return 0;
}