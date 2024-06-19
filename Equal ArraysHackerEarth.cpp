#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>a,b;
        int c=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        if(a==b){
            cout<<0<<endl;
        }
        if(n>m){
            for(int i=0;i<m;i++){
                while(n!=m){
                    if(b[i]>a[i]){
                        a[i]+=a[i+1];
                        n--;
                        c++;


                    }
                    if(b[i]==a[i]){
                        continue;
                    }
                    else {
                        b[i]+=b[i+1];
                        n--;
                        c++;
                    }
                }
            }
        }
        cout<<c<<endl;
        

	}
}

