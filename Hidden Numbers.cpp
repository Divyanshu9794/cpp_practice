#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       for(int i=1;i<=n/2;i++)
       {
           if(n%i==0)
           {
              
               cout<<i<<" "<<n/i<<'\n';
               break;
           }
       }
   }
}