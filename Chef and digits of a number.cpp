#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string d;
        cin>>d;
        int n= d.length();
        
        int d1=0,d0=0;
        for(int i=0;i<n;i++){
            if(d[i]=='0'){
                d0++;
            }
            else{
                d1++;
            }

        }
        if(abs(d0-d1)==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}