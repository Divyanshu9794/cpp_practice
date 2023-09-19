#include<bits/stdc++.h>
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int count=0;
        int r1 = x%10;
        int r2 = y%10;
        int ir1 = x+(10-r1);
        int ir2 = y-(r2);
        count += ((ir2-ir1)/10)*3;
        for(int i=r1; i<=9;i++){
            if(i==2 || i==3 || i==9){
                count++;
            }
        }
        for(int i=r2; i>=1;i--){
            if(i==9 || i==3 || i==2){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}