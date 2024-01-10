#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length()-1;i++){
	        if(s[i]=='0' && s[i+1]=='1'){
	            count++;
	        }
	    }
	    if(s[n-2]=='0') count++;
	    if( s[0]=='1') count++;
	    cout<<count<<endl;
	}
	return 0;
}