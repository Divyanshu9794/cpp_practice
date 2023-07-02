#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int cnt1=0,cnt2=0,cnt3=0;
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='1')
        {
            cnt1++;
        }
        if (s[i]=='2')
        {
            cnt2++;
        }
        if (s[i]=='3')
        {
            cnt3++;
        }
    }
    for (int i=0;i<cnt1;i++)
    {
        s1.push_back('1');
        s1.push_back('+');
    }
    for (int i=0;i<cnt2;i++)
    {
        s1.push_back('2');
        s1.push_back('+');
    }
    for (int i=0;i<cnt3;i++)
    {
        s1.push_back('3');
        s1.push_back('+');
    }
    for (int i=0;i<s1.size()-1;i++)
    {
        cout<<s1[i];
    }
}