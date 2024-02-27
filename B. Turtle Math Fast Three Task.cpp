#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,total_add=0,ginti=0;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            total_add+=arr[i];
        }
        if(total_add%3==0){
            cout<<0<<endl;
        }
        else{
            if((total_add+1)%3==0){
                cout<<1<<endl;
            }
            else{
                int flag=0;
                for(int i=0;i<n;i++){
                    int temporary_variable=total_add;
                    temporary_variable=temporary_variable-arr[i];
                    if(temporary_variable%3==0){
                        cout<<1<<endl;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<2<<endl;
                }
            }
        }
    }
    return 0;
} 


//by divyanshu singh