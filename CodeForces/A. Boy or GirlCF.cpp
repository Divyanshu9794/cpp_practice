#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  set<char>f;
  for(auto it:s){
      if(it>='a' &&it<='z'){f.insert(it);}
  }
  cout<<f.size()<<endl;
  
return 0;        
}
