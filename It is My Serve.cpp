#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int x, y, s;
	    cin>>x>>y;
	    s = (x+y)%4;
	    
	    switch (s) {
	        case 0:
	        case 1:
	            cout<<"Alice"<<endl;
	            break;
	        case 2:
	        case 3:
	            cout<<"Bob"<<endl;
	    }
	}
	return 0;
}