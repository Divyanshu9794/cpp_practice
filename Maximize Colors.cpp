#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
	   vector<int>v={a,b,c};
	   int cont=0;
       for(int i=0;i<v.size();i++){
           if(v[i]>0)
           {
               cont++;
               v[i]--;
           }
       }
      sort(v.begin(),v.end(),greater<int>());
      //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
      if(v[0]>0 && v[1]>0){
        cont++;
        v[0]--;
        v[1]--;
      }
      if(v[0]>0 && v[2]>0){
        cont++;
        v[0]--;
        v[2]--;
      }
      if(v[1]>0 && v[2]>0){
        cont++;
        v[1]--;
        v[2]--;
      }
       cout<<cont<<endl;
	}
	
	return 0;
}


/*

> When we will get the maximum :->
> We will get the maximum value when we first select the color form the maximum drop
> eg 2 2 3 
> aftet removing the 1 1 1 drop we remain with 1 1 2 
> Now if we select the fist 2 elements then our array will become 0 0 2 
> SO total number of the distinct number in this case will be 4 
> but if we sort the ramin i.e 2 1 1 
> then we will first remove the drop from the  2 1 
> remain = 1 0 1 
> then we will remove the drop from the 1  1 and total number of the distinct drops will be 5.







*/