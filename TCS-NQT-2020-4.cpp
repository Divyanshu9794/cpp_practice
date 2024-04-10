#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int nt;
    cin>>nt;
    if(nt==NULL){
        cout<<"INvalID VAlue"<<endl;
    }
    else{
        cout<<arr[n-nt];
    }
    return 0;
}
