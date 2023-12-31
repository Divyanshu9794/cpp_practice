//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
      long long trappingWater(int arr[], int n){
            int left[n];
            int right[n];
            int leftMax = arr[0];
            for(int i=0;i<n;i++){
                leftMax = max(leftMax , arr[i]);
                left[i] = leftMax;
            }
            int rightMax = arr[n-1];
            for(int i=n-1;i>=0;i--){
                rightMax = max(rightMax , arr[i]);
                right[i] = rightMax;
            }
            long long sum = 0;
            for(int i=0;i<n;i++){
                int mini = min(left[i] , right[i]);
                arr[i] = mini - arr[i];
                sum += arr[i];
            }
            return sum;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends