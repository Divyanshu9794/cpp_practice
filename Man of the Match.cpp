#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    
    while(t--){
        int a,b;
        vector<int> ans;
        for(int i=1;i<=22;i++){
            cin>>a>>b;
            int q= a+b*20;
            ans.push_back(q);


        }
        auto  p = max_element(ans.begin(),ans.end());
        if(p != ans.end())
    {
        
        int index = distance(ans.begin(), p);
        cout<< index+1 <<endl;
    }
}
}