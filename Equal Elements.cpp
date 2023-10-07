
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int minOperation(int arr[], int n) {
	
	unordered_map<int, int> hash;
	for (int i=0; i<n; i++) {
		if (hash.find(arr[i]) != hash.end()) {
			hash[arr[i]]++;
		} else {
			hash[arr[i]] = 1;
		}
	}
	
	
	int max_count = 0;
	for (auto it : hash) {
		max_count = max(max_count, it.second);
	}
	
	
	return (n - max_count); 
}


int main() {
	int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout << minOperation(arr, n) << endl;

    }
	
	return 0;
}
