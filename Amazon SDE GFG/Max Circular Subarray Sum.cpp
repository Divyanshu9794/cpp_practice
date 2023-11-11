//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
  
        int sum = arr[0], mxSum= arr[0], mnSum =arr[0], mx =arr[0], mn =arr[0];
        for(int i = 1; i < num; i++)
        {
            mx = max(arr[i], mx+arr[i]);
            mxSum = max(mxSum, mx);
            mn = min(arr[i], mn+arr[i]);
            mnSum = min(mnSum, mn);
            sum += arr[i];
        }
        return mxSum > 0 ? max(mxSum, sum-mnSum) : mxSum;
    }

};


//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends