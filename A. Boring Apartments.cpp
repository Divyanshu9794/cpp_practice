#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m<10000&&m>1000)
         cout<<m/111<<endl;
        else if(m>100&&m<1000)
         cout<<(m/11)-10+6<<endl;
        else if(m<100&&m>10)
         cout<<(m-(m/10))-10+3<<endl;
        else if(m>0&&m<10)
         cout<<(m-1)*10+1<<endl;
    }
}