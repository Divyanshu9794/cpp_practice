#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    float sal;
    float hra,dra;
    cin>>t;
    while(t--){
        cin>>sal;
        if(sal<1500){
            hra=0.1*sal;
            dra=0.9*sal;}
        else{
            hra=500;
            dra=0.98*sal;
        }
        cout<<fixed<<setprecision(2)<<sal+hra+dra<<endl;
    }
	// your code goes here
	return 0;
}