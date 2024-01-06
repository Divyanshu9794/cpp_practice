#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a=n/k;
	    int b=n/k;
	    cout<<(a*b)<<endl;
	}
	return 0;
}