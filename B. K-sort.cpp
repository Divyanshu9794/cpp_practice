#include <bits/stdc++.h>  
using namespace std;  

int main(){  
    long long test_cases;  
    cin >> test_cases;  
    
    while(test_cases--){  
        long long num_elements;  
        cin >> num_elements;  
        
        long long max_value = 0;  
        long long total_difference = 0;  
        long long max_difference = 0;  
        
        for(long long i = 0; i < num_elements; ++i){  
            long long current_value;  
            cin >> current_value;  
            
            total_difference += max((long long)0, max_value - current_value);  
            max_difference = max(max_difference, max_value - current_value);  
            max_value = max(max_value, current_value);  
        }  
        
        cout << total_difference + max_difference << endl;  
    }  
    
    return 0;  
}
