#include<bits/stdc++.h>
using namespace std;


int main() {
   
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    long long count5=count(a.begin(),a.end(),5);
    long long count0=count(a.begin(),a.end(),0);
    if(count0==0)cout<<-1<<endl;
    else{
        if(count5<9){
            cout<<0<<endl;
        }else{
            for(int i=0;i<n;i++){
                if(count5%9==0){
                    break;
                }else{
                    count5--;
                }
            }
            for(int i=0;i<count5;i++)cout<<5;
            for(int i=0;i<count0;i++)cout<<0;
        }
    }
}