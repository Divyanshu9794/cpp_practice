#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int H,X,Y;
        cin>>H>>X>>Y;
        int special_power = H-Y;
        int normal_power = special_power%X;
        if(normal_power == 0){
            cout<< 1 + special_power/X << endl;
        }
        else{
            cout<< 2 + special_power/X << endl;
        }
    }return 0;
}