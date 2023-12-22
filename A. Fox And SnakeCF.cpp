#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=x;i++){
        if(i%2!=0){
            for(int j=1;j<=y;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            if (i / 2 % 2 != 0)
            {
                for (int j = 1; j < y; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 0; j < y - 1; j++)
                {
                    cout << ".";
                }
            }
            cout<<endl;
        }
    }
}