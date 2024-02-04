#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+(c*10)<b+(d*10)){
            cout<<"Chef"<<endl;
        }
        else if(a+(c*10)>b+(d*10)){
            cout<<"Chefina"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }

}
