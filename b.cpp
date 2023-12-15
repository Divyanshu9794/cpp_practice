#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,a1,b1,a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    a=abs(a);
    b=abs(b);
    a1=abs(a1);
    b1=abs(b1);
    a2=abs(a2);
    b2=abs(b2);

    int p1 = ceil(sqrt(((a1-a)*(a1-a))+((b1-b)*(b1-b))));
    int p2 = ceil(sqrt(((a2-a)*(a2-a))+((b2-b)*(b2-b))));
    int b3 = ceil(3.14*p1*p1);
    int c = ceil(3.14*p2*p2);
    if(c>b3)
    {
        int u = c-b3;
        int v = ceil(sqrt(u));
        int w = v*v;
        int r = w-u;
        int s = r*20;
        cout<<"Krishna ";
        cout<<s;
    }
    else if(b3>c)
    {
      int p = b3-c;
      int q = p*20;
      cout<<"Shiva ";
      cout<<q;
    }
    else if(b3==c)
    {
        cout<<"-1";
    }
}