#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    //right =1,up =2,left 3,down 4,along 5
    
    int c = 1;
    int x = 0, y = 0;
    int d = 10;
    
    while(n)
    {
        switch(c)
        {
            case 1:
            x = x + d;
            c = 2;
            d = d + 10;
            break;
            
            case 2:
            y = y + d;
            c = 3;
            d = d + 10;
            break;
            
            case 3:
            x = x - d;
            c = 4;
            d = d + 10;
            break;
            
            case 4:
            y = y - d;
            c = 5;
            d = d + 10;
            break;            
            
            case 5:
            x = x + d;
            c = 1;
            d = d + 10;
            break;
        }
        n--;
    }
    
    cout << x << " " << y <<endl;
    return 0;
}