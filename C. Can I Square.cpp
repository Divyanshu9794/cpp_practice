#include <bits/stdc++.h>
using namespace std;

void f(){
   long long num,x,sum=0;
   cin>>num;
   for(int i=0;i<num;i++){
       cin>>x;
       sum+=x;
   }
   
   long long sq=sqrt(sum);
   if(sq*sq==sum){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
    
}

int main() {
   
   int t=1;
   cin>>t;
   while(t--){
       f();
       cout<<"\n";
   }
    return 0;
}