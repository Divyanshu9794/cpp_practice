#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int Max = 0;
        int ptr = 0;
        for(int i = 0; i < m; i++)
        {
            int w;
            cin>>w;
            if((w + n - 1) / n >= Max)
            {
                Max = (w + n - 1) / n;
                ptr = i;
            }
        }
        cout<<(ptr + 1)<<endl;
    }
    return 0;
}