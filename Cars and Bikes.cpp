#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    if(n <4)
	    cout << "YES" << endl;
	    else if(n % 4 ==0)
	    cout << "NO" << endl;
	    else if(n%4 != 0 and n%2 ==0)
	    cout << "YES" << endl;
	}
	return 0;
}