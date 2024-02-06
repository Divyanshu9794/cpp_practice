#include<bits/stdc++.h>
using namespace std;
int f(int i){
    return i++;
}
int main(){
    int i= f(10);
    cout<<--i<<endl;
}
