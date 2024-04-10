#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s=0;
    for(int i=1;i<=c;i++)
    {
        s+=a*i;
    }
    if(s-b<=0){
        cout<<0<<endl;
    }
    else{
        cout<<(s-b)<<endl;
    }
}