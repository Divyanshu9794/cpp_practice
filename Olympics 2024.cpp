#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)>=15){
        cout<<0<<endl;
    }
    else{
        cout<<15-(a+b+c)<<endl;
    }
}