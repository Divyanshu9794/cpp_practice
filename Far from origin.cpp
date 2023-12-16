#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int alex_d=0;
	    alex_d= x1*x1 + y1*y1;
	    int bob_d=0;
	    bob_d= x2*x2 + y2*y2;
	    
	    if(alex_d==bob_d)
	    cout<<"EQUAL\n";
	    else if(alex_d>bob_d)
	    cout<<"ALEX\n";
	    else
	    cout<<"BOB\n";
	}
	return 0;
}