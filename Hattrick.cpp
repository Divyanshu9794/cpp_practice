#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<char> s;
	    char a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    if((a=='W' && b=='W' && c=='W')|| (b=='W'&&c=='W'&&d=='W')||(c=='W'&&d=='W'&&e=='W')||(d=='W'&&e=='W'&&f=='W')){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}

}
