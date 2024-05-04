#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int dig=0;
    int mul =1;
    while(n>0){
        dig = n%10;
        n=n/10;
        mul*=dig;
    }
    cout<<mul<<endl;

}