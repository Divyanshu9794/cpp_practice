#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        string str;
        cin >> str;
        string ans;
        map<int, int> mp;
        mp['a'] = 1;
        mp['e'] = 1;
        mp['i'] = 1;
        mp['o'] = 1;
        mp['u'] = 1;
        for (int i = 0; i < str.size(); i++)
        {
            if (mp[str[i]])
            {
                ans.push_back(str[i]);
                int j = i + 1;
                if (j == str.size() - 1)
                {
                   
                }
                else if (j + 1 <= str.size() - 1)
                {

                    if (mp[str[j]]==0 && mp[str[j + 1]]==0)
                    {
                        ans.push_back(str[j]);
                        ans.push_back('.');
                        i = j;
                    }
                    else
                    {
                        ans.push_back('.');
                    }
                }
            }
            else
            {
                ans.push_back(str[i]);
            }
        }

        cout << ans << endl;
    }
}