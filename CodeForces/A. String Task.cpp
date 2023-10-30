#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string f(string &c){
    string a = "";
    transform(c.begin(), c.end(), c.begin(),::tolower);
    for(int i=0;i<c.length();i++){

        if(c[i] == 'a' || c[i]=='e'|| c[i]=='i'|| c[i]=='o'|| c[i]=='u' || c[i]=='y'){
            continue;
        }
        else{
                a+=".";
                a+=c[i];
            }
        
        
    }
    return a;
}
int main(){
    string c;
    cin>>c;
    cout<<f(c);
}
