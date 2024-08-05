#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,x; cin>>n;
	    map<int, int> m;
	    for(int i=0; i<n; i++){
	        cin>>x;
	        m[x]++;
	    }
	    if(m[-1]%2!=0 && m[1]%2!=0){
	        //both odd
	        if(abs(m[-1]-m[1])>0) cout<<"No\n";
	        else cout<<"Yes\n";
	    }else if(m[-1]%2==0 && m[1]%2==0){
	        //both even
	        if(abs(m[-1]-m[1])>2) cout<<"No\n";
	        else cout<<"Yes\n";
	    }else{
	        //different
	        if(abs(m[-1]-m[1])>1) cout<<"No\n";
	        else cout<<"Yes\n";
	    }
	}
	return 0;
}