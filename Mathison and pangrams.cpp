#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    vector<int> v;
	    for(int j=0; j<26; j++)
	    {
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }
	    string s;
	    cin>>s;
	    set<char> se;
	    for(int j=0; j<s.length();j++)
	    {
	        se.insert(s[j]);
	    }
	    int sum=0;
	    for(int j=0; j<26 ;j++)
	    {
	        auto it =se.find(char(j+97));
	        if(it==se.end())
	        {
	            sum+=v[j];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}