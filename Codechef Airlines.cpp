#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> x>>y>>z;
	    if(10*x>=y)
	    {
	        std::cout << y*z << std::endl;
	    }
	    else{
	        std::cout << 10*x*z << std::endl;
	    }
	}
	return 0;
}