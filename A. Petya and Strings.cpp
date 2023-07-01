#include<bits/stdc++.h>
#include <iostream>
#include<string.h>
using namespace std;
int solve( string s, string t ){
    transform(s.begin(), s.end(), s.begin(),::tolower);
    transform(t.begin(), t.end(), t.begin(),::tolower);
   int ret;
   ret = s.compare( t );
   if( ret == 0 ) {
      return 0;
   } else if( ret > 0 ) {
      return 1;
   } else {
      return -1;
   }
}
int main(){
   string s,t;
   cin>>s;
   cin>>t;
   cout <<  solve( s, t ) << endl;
}