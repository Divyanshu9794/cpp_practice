#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<isprime(n);
}
bool isprime(int num){
    if(num<2){
        return false;

    }
    if(num ==2 || num==3){
        return true;
    }
    if(num %2==0){
        return false;
    }
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}