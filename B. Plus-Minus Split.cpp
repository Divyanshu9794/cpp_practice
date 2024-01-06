#include<bits/stdc++.h>
using namespace std;

 void fun()
{
     long long m;
     cin>>m;
     string s;
     cin>>s;
     vector<long long>a;
     for(long long i=0;i<s.size();i++){
       if(s[i]=='+'){
            a.push_back(1);
       }
       else{
         a.push_back(-1);
       }
     }
     
     long long positive=0,negative=0;
     for(long long i=0;i<a.size();i++){
       if(a[i]>0){
            positive++;
       }
       else {
        negative++;
       }
     }
     
     if(positive==0 && negative>0) {
        cout<<negative<<"\n";
     }
     else if(positive>0 && negative==0){
         cout<<positive<<"\n";
     }
     else if(positive==negative){
         cout<<0<<"\n";
     }
     else if(positive>0 && negative>0){
       if(negative<positive){
         cout<<a.size()-2*negative<<"\n";
       }
       else{
         cout<<a.size()-2*positive<<"\n";
       }
     }
     
     
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
        fun();
        
    }
}