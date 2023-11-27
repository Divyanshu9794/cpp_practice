#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x<=3){
            cout<<x*y<<endl;
        }
        else if(x%3==0){
            int c= x/3 - 1;
            cout<<(x*y + z*c)<<endl; 
        }
        else{
            int c= x/3;
            cout<<(x*y+z*c)<<endl;
        }
        
    }
}