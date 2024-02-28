#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int c=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                c+=a[i]/2;
            }
             else
            {
                 c+=(a[i]/2)+1;
             }
           }
        cout<<c<<endl;
    }

}