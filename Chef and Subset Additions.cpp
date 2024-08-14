#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        if(b[i]-x==a[i]||b[i]-y==a[i]){
	            cnt++;
	        }
	    }
	    if(cnt==n){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}