#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int c=0;
    while(t--){    
        int n,h;
        cin>>n>>h;
        if(n==h){
            continue;
        }
        else{
            if(n<h){
                if((h-n)>=2){
                    c++;
                }
            }
        }

    }
    cout<<c<<endl;

}