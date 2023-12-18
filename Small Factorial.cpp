#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--){
        int fact=1;
        int n;
        cin>>n;
        while(n>0)
        fact=fact*n--;
        cout<<fact<<endl;
    }
	return 0;
}
