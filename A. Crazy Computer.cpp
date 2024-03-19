#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if((a[i+1]-a[i])<=c){
            cnt++;
        }
        else{
            cnt=1;
        }
    }
    cout<<cnt<<endl;
}