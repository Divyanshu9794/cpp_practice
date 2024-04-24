#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int s =0;
	    for(int i=0;i<n;i++){
	        if((a[i]*x)<=y){
	            s+=(a[i]*x);
	        }
	        else{
	            s+=y;
	        }
	    }
	    cout<<s<<endl;
	}

}
