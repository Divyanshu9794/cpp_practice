#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int s=0;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s+=a[i];
	    }
	    if(s<n){
	        cout<<"No"<<endl;
	    }
	    else{
	        int r=s%n;
	        if(k==0 && r!=0){
	            cout<<"No"<<endl;
	        }
	        else{
	            cout<<"Yes"<<endl;
	        }
	    }
	}
	return 0;
}
