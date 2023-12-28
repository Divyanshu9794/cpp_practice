#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int result = -1;
        for (int i = 0; i < 3; i++)
        {
            int n = 0;
            int c = 0;

            for (int j = 0; j < 3; j++)
            {
                char character;
                cin >> character;
                if (character == '?')
                {
                    c = 1;
                }
                else
                {
                    n = n + (character - 'A');
                }
            }
            if (c)
            {
                result = (3 - n);
            }
        }
        cout << char('A' + result) << endl;
    }
}