#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int c=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]>=1000){
	            c++;
	        }
	        
	        
	    }
	    cout << c <<endl;
	}
	return 0;
}
