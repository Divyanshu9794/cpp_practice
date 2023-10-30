#include<bits/stdc++.h>

using namespace std;



#define ll long long 

#define int long long 

#define pb push_back

#define loop(n) for(long long i=0;i<n;i++)

#define rloop(n) for(long long i=n-1;i>=0;i--)



////////////////////////////////////////////



ll m=1e9+7;



long long binpow(long long a, long long b) {

if (b == 0)

 return 1;

long long res = binpow(a, b / 2);

 if (b % 2)

 return (res%m * res%m * a)%m;

 else

  return res%m * res%m;

}







bool sortbyCond(const pair<int, int>& a,

 const pair<int, int>& b)

{

 if (a.first != b.first)

return (a.first < b.first);

else

 return (a.second > b.second);

}







signed main(){



ios::sync_with_stdio(false);

 cin.tie(nullptr);





int test_cases;

cin>>test_cases;

while(test_cases--){



ll n,m,h,x;

cin>>n>>m>>h;



vector<pair<ll,ll>>vv;

ll pp,ppx;

loop(n){

vector<ll>v;

 for(int j=0;j<m;j++){

 cin>>x;

 v.pb(x);

  }

 sort(v.begin(), v.end());

 

 ll ans=0,s=0;

 int j=0;

 for( j=0;j<m;j++){

s+=v[j];

ans+=(s);

if(s>h)break;

 }

 if(j==m)j--;

 if(s>h){j--;ans-=s;}





vv.pb({j,ans});

 if(i==0){

pp=j;

 ppx=ans;

 }

}

sort(vv.rbegin(),vv.rend(),sortbyCond);



ll final=0;

for(auto it:vv){

final++;

if(it.first==pp && it.second==ppx){
 break;

 }



}

cout<<final<<"\n";

}

 return 0;

}