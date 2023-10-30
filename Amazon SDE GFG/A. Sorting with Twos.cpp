#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

void s(){
    int n,f;
    cin>>n>>f;
    int temp,fl=0;
    for(int i=1;i<n;i++){
        cin>>temp;
        if(f>temp){
            if(((i-1)&(i))!=0) fl = 1;
        }
        f = temp;
    }
    if(fl) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}



int main(){

    int t;
    cin>>t;
    while(t--){
        s();
    }
   
    
}