#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,r;
        cin>>s>>r;
        int s1=0;
        int r1=0;
        for(int i=0;i<n;i++){
        
            if(s[i]=='1'){
                s1++;
            }
            
        }
        for(int i=0;i<n;i++){
            if(r[i]=='1'){
                    r1++;
                }
        }
        if(s1==r1){
            std::cout << "YES" << std::endl;
            
        }
        else{
        cout<<"NO"<<endl;
        }
    }
	return 0;
}
