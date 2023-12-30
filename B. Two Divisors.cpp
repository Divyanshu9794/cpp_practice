#include<bits/stdc++.h>
using namespace std;
void s(){
        long long a,b;
        cin>>a>>b;
        if (b % a != 0)
        {
                cout<<a*b / __gcd(a, b)<<endl;
        }
        else{
                cout<<b*(b/a)<<endl;
        }
}

int main()
{
        long long t = 1;
        cin >> t;
        while (t--)
        {
                s();
        }
        return 0;
}