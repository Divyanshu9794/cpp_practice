#include <bits/stdc++.h>
using namespace std;

int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int score = 0;
     int odd=0,even=0;
     for(int i=0;i<n;i++){
         if(arr[i]==0) odd++;
         else even++;
     }
     cout<<min(even,odd)<<endl;
 }
 return 0;
}  