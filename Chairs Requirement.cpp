#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        if(n>m){
            cout<<0<<endl;
        }
        else{
            cout<<m-n<<endl;
        }
    }
	return 0;
}
