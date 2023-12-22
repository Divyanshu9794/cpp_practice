#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int k;
    cin>>k;
    long long int ans;
    if(k <= (n+1)/2) {
        ans = 2*k - 1;
    } else {
        ans = 2*(k - (n+1)/2);
    }
    printf("%I64d\n", ans);
    return 0;
}
