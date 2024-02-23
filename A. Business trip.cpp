#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,arr[12],m=0;
    cin>>n;
    for (int i=0;i<12;i++){
        cin>>arr[i];
    }
    sort(arr,arr+12);
    if(n==0){
        cout<<0;
    }else{
        for(int i=11;i>=0;i--){
            m+=arr[i];
            if(m>=n){
                cout<<11+1-i;
                break;
            }
        }
    }
    if(!(m>=n)){
        cout<<-1;
    }
    return 0;
}