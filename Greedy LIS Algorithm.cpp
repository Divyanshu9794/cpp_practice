#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t>0){
     t--;
     long long int num, exe;
     cin>>num>>exe;
 
     if(exe==0){
         for(int i = 1; i<=num; i++){
             cout<<i<<" "; 
         }
         cout<<endl;
         continue;
     }
     
     if(num-exe <= 1){
         cout<<"-1\n";
         continue;
     }
     
     long long int a = num-1-exe;
     
     exe = num+1-a;
     
     cout<<exe<<" ";
     
     int c = 1;
   
     for(int i = 1; i<num; i++){
         if(i == exe){
             c++;
         }
         cout<<c<<" ";
         c++;
     }
     cout<<endl;
   }
 return 0;
}