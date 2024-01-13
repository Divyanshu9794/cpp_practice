#include <iostream>
using namespace std;

int main() {
int T;
int m,n,k;

cin>>T;
for(int i=0;i<T;i++){
    cin>>m>>n>>k;
    
    int dur=n*k;
    if(m>dur){
        cout<<"YES"<<endl;
    }
    
    else{
        cout<<"NO"<<endl;
    }
}
	return 0;
}