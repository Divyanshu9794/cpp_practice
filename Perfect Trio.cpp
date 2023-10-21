#include <iostream>
using namespace std;

int main() {
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    if(A==(B+C) || C==(B+A) || B==(A+C))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}