#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> myVector;

    int input;
    while (std::cin >> input) {
        myVector.push_back(input);
    }
    int n =myVector.size() ;
    sort(myVector.begin(),myVector.end());
    int m = myVector[n-1]*myVector[n-2]*myVector[n-3];
    cout<<m;

    
    return 0;
}
