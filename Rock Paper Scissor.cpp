#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string s1;
      cin>>s1;
      string s2;
      cin>>s2;
      int cnt1=0,cnt2=0;
      for(int i=0;i<n;i++){
          if(s1[i]==s2[i]){
              continue;
          }
          if(s1[i]=='R'&&s2[i]=='S'){
              cnt1++;
          }
          if(s1[i]=='S'&&s2[i]=='R'){
              cnt2++;
          }
          if(s1[i]=='S'&& s2[i]=='P'){
              cnt1++;
          }
           if(s1[i]=='P'&& s2[i]=='S'){
              cnt2++;
          }
          if(s1[i]=='R'&& s2[i]=='P'){
              cnt2++;
          }
           if(s1[i]=='P'&& s2[i]=='R'){
              cnt1++;
          }
          
      }
      if(cnt1>cnt2){
          cout<<0<<endl;
      }
      else{
          cout<<cnt2-cnt1<<endl;
      }
  }
  return 0;
}