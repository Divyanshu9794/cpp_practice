#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,w;
    cin>>w>>a>>b>>c;
    int d = b+a;
    int e = a+c;
    int f = c+b;
    int g = a+b+c;
    if(w==a || w==b || w==c || w==d || w==e || w==f || w==g)cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    int test;
    cin>>test;
    while(test--)solve();

    return 0;
}
