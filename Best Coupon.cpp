
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(100>((x*10)/100)){
	        cout<<100<<endl;
	    }else{
	        cout<<(x*10)/100<<endl;
	    }
	}
	return 0;
}