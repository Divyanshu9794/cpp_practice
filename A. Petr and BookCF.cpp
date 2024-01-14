#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    long long c=0;
    while(n>0){
        for(int i=0;i<7;i++){
            if(n<=0){
                break;
            }
            n-=a[i];
            c=i+1;
        }
    }
    cout<<c<<endl;
    
}