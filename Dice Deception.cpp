#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int s=0;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        
    	        if(a[i]==1 || a[i]==2|| a[i]==3){
    	            if(k>0){
        	            s+=(7-a[i]);
        	            k--;
    	            }
        	            else{
        	            s+=a[i];
        	        }
    	            
    	        }
    	        else{
    	            s+=a[i];
    	        }
    	        
    	        
	        }
	    
	    cout<<s<<endl;
	}

}
