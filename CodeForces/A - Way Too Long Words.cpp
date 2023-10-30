#include<bits/stdc++.h>
#include <string>
using namespace std ;
 
string f(string &c,int &n){
    char a = c[0];
    char b = c[n-1];
    string d;
    string m= to_string(n-2);
    if(n<10){
        return c; 
    }
    else{
        d= a+m+b;
        
    
}
return d;
}
int main(){
    string c;
    cin>>c;
    int n = c.length();
    cout << f(c,n) << endl;
    
}