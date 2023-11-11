//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        
        int n=arr.size();
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
             {
                 for(int k=j+1;k<n;k++)
                 {
                     int sum=arr[i]+arr[j]+arr[k];
                     if(sum==target)
                     {
                         return target;
                     }
                     else
                     {
                        if(abs(target-sum)<diff)
                        {
                            diff=abs(target-sum);
                            ans=sum;
                        }
                        if(abs(sum - target) == diff){
                          ans = max(ans, sum);
                        }
                     }
                 }
             }
        }
        return ans;    
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends