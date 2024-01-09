// CPP program for the above program
#include <bits/stdc++.h>
using namespace std;

// Function to find next number
// with digit distinct
void nextNumberDistinctDigit(int n)
{
	
	// Iterate from n + 1 to inf
	for (int i = n + 1;; i++) {
	
		// Convert the no. to
		// string
		string s = to_string(i); 
	
		// Convert string to set using stl
		set<int> uniDigits(s.begin(), s.end()); 
	
		// Output if condition satisfies
		if (s.size() == uniDigits.size()) {
			cout << i; 
			break;
		}
	}
}

// Driver Code
int main()
{
	int n = 2019; // input the no.
	
	// Function Call
	nextNumberDistinctDigit(n);
	return 0;
}
