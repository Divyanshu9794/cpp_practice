#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s=0,l=0;
	    int n;
	    cin>>n;
	    string a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]=="START38"){
	            s++;
	        }
	        else{
	            l++;
	        }
	    }
	    cout<<s<<" "<<l<<endl;
	}
	return 0;
}
