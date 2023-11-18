#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;

    int input;
    while (cin >> input  && input != -1) {
        myVector.push_back(input);
    }
    int n =myVector.size() ;
    sort(myVector.begin(),myVector.end());
    int m = myVector[n-1]*myVector[n-2]*myVector[n-3];
    cout<<m<<endl;
    return 0;
}
