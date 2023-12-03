#include <iostream>
using namespace std;

int main() {
	int t;
cin>>t;
while(t--)
{
    int x;
    cin>>x;
    if(x%5==0)
    {
        int p=x/10;
        if(x==p*10)
        {
            cout<<p<<endl;
        }
        else{
            cout<<p+1<<endl;
        }
        
    }
    else{
        cout<<"-1\n";
    }
}
	
	return 0;
}