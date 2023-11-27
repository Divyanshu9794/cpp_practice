#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if((21-(a+b)>=1) && (21-(a+b)<=10)){
            cout<<(21-(a+b))<<endl;
        }
    

        else{
            cout<<-1<<endl;
        }
    }
}