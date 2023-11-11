//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
   long long maxSubarraySum(int arr[], int n){

      long long sum=INT_MIN;
       int i = 0;
       long long temp=0;
       while(i<n){
           temp+=arr[i];
           if(temp>sum){
               sum = temp;
           }
           if(temp<0) temp=0;
           
           i++;
       }
       return sum;
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends