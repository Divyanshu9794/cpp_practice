#include <iostream>
using namespace std;

int main() {
 
 int t;
 cin>>t;
 while(t--){
     int n,x,y;
     cin>>n>>x>>y;
     int a = y/3;
     int lef, a1;
     if(x>=a){
         lef = x - a;
         a1 = a;
         
     }
     else{
         lef=0;
         a1 = x;
     }
     int a2 = lef/2;
     if(a2 + a1 >= n) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
 return 0;
}