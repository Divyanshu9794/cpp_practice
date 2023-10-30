#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
char c[2200];
char a[220]= {"hello"};
int main()
{
    int m;
    while(cin>>c)
    {
        m = strlen(c);
        int i = 0, j = 0;
        for(i = 0; i < m; i++)
        {
            if(c[i] == a[j])
            {
                j++;
            }
            if(j == 5){
                break;
            }
        }
        if(j == 5)
        {
            printf("YES\n");
        }
        else{
         printf("NO\n");
        }    
    }
    return 0;
}