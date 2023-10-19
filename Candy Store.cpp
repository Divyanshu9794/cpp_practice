// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(b-a>0){
            int s = b-a;
            cout<<(2*s+a)<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}

