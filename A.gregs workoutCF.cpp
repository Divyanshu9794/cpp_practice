#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[25];
    int chest=0,bicep=0,back=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%3==0){
        n=n;
    }
    else{
        if(n%3==1){
            n=n+2;
            a[n-2]=0;
            a[n-1]=0;
        }
        else{
            n=n+1;
            a[n-1]=0;
        }
    }
    

    for(int i=0;i<=n-3;i=i+3){
        chest+=a[i];
        bicep+=a[i+1];
        back+=a[i+2];
    }
    if(chest>bicep && chest>back){
        cout<<"chest"<<endl;
    }
    else if(bicep>chest && bicep>back){
        cout<<"biceps"<<endl;
    }
    else{
        cout<<"back"<<endl;
    }
}