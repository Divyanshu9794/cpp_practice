#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
  int ans=0;
  for(long long i=1;;i++)
  {
    long long p=(i*(i+1)*(i+2)/6);
    if(p>n)
    {
      ans=i-1;
      break;
    }
  }
  cout<<ans<<endl;

    
}