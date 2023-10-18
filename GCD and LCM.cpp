#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      if(a==b)
       cout<<a+b<<endl;
      else {
          while(c>0 && a!=b){
              int m=a;
               a=max(a,b);
               b=min(m,b);
              a=__gcd(a,b);
             
              b=b*a/a;
              c--;
          }
          cout<<a+b<<endl;
      }
  }
  return 0;
}