#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float x, y ,z,a;
        cin>>x>>y>>z;
        a=(x+y)/2;
        if(a>z){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}