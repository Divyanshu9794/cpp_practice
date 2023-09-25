#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    string s;
	    cin >> s;
	    int max=x, min=x, count=1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='L'){
	            x-=1;
	            if(min>x){
	                min=x;
	                count++;
	            }
	        }
	        else{
	            x+=1;
	            if(max<x){
	                max=x;
	                count++;
	            }
	        }
	    }
	    
	    cout << count << endl;
	}
	return 0;
}