#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    int a=n*4;
	    if(a>1000){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout << "YES" << std::endl;    
	    }
	    
    }
	return 0;
}
