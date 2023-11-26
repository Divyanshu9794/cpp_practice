#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    int c=0;
	    for(int i=0;i<a.size();i++){
	        if(a[i]=='g' && a[i+1]=='f' && a[i+2]=='g'){
	            c++;
	        }
	    }
	   cout<<c;
	}
}