#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==0 && a[j]==1){
                c++;

            }
        }
    }
    cout<<c<<endl;


}