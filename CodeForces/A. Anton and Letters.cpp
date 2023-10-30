#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> f;
    for (auto it : s)
    {
        if (it >= 'a' && it <= 'z')
        {
            f.insert(it);
        }
    }
    if (f.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
