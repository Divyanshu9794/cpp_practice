#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    string s ;
    cin>>s;
    int n = s.size();
    vector<char> ans;
    bool f=0 ;
    for (int i = 0; i < s.size(); i++) {
        if(s[i]=='W' && s[i+1]=='U'&&s[i+2]=='B'){
            
            i=i+2;
            if(f==1){
                ans.push_back(' ');
            }
        }
        else{
            ans.push_back(s[i]);
        }
        f=1;
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}