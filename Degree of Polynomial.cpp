#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    int b=INT_MIN;
	    for(int i=0 ;i<n;i++)
	    cin >> a[i];
	    int index=0;
	    for(int i=0 ;i<n;i++)
	    {
	        if( a[i] !=0 )
	        {
	            index=i;
	        }
	    }
	    cout << index << endl;
	}
	return 0;
}