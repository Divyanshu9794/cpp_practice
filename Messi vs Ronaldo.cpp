#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*2+b==c*2+d){
        cout<<"EQUAL";
    }
    else if(a*2+b>c*2+d){
        cout<<"MESSI";
    }
    else{
        cout<<"RONALDO";
    }
}