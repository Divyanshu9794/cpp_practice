# include <bits/stdc++.h> 
# include <cmath> 
using namespace std; 

int main() {
  long long t;
  cin>>t;
  while(t--){
    long long n,x,y;
    cin>>n;
    bool a = false;
    bool b = false;
    bool c = false;
    bool d = false;
    while(n--){
      cin>>x>>y;
      if(x > 0){
        a = true;
      }
      if(x < 0){
        b = true;
      }
      if(y > 0){
        c = true;
      }
      if(y < 0){
        d = true;
      }
    }
    if(a == true && b == true && c == true && d == true){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }  
}