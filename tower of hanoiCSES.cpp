#include <bits/stdc++.h> 
using namespace std; 
  
void toh(int n, char from_rod, char aux_rod, 
                  char to_rod) 
{ 
    if (n == 0) { 
        return; 
    } 
    
    toh(n - 1, from_rod,to_rod, aux_rod); 
    cout << from_rod <<" " << to_rod << endl; 
    toh(n - 1, aux_rod, from_rod, to_rod); 
} 
int main() 
{ 
    int  n;
    cin >>n; 
    cout<<(pow(2,n)-1)<<endl;
    toh(n, '1', '2', '3'); 
    return 0; 
} 