#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    int m = 0;
	    for (int i = 0 ; i< n; i++)
	    {
    	    cin>>ar[i];
    	    if (ar[i]>m) m = ar[i];
	    }
	    cout<<n-m<<endl;
	}
	return 0;
}