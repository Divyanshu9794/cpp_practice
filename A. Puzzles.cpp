#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ve[b];
    for(int i=0;i<b;i++){
        cin>>ve[i];
    }
    sort(ve,ve+b);
    int mind=INT_MAX;
    int l=0,r=a-1;
    for(;r<b;r++){
        mind=min(mind,ve[r]-ve[l++]);

    }
    cout<<mind<<endl;


}