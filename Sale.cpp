#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n ;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int t = *max_element(a,a+n);
        int s=0;
        for(int i=0;i<n;i++){
            if(a[i]==t){
                s+=(a[i]*2);
                break;
            }
            else{
                s+=a[i];
            }
        }
        cout<<s<<endl;
    }
    
}