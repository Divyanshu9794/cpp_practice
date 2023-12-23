#include <bits/stdc++.h>
using namespace std;
 
void GreyCode(long long int n)
{
    
    for (long long int i = 0; i < (1 << n); i++) 
    {
        long long int a = (i ^ (i >> 1));
        bitset<32> r(a);
        string s = r.to_string();
        cout << s.substr(32 - n) <<endl;
    }
}

int main()
{
    long long int n;
    cin>>n;
   
    GreyCode(n);
    
    return 0;
}