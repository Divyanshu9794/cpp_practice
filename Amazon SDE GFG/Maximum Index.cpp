//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
     int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        vector<int>pref(n),suff(n);
        pref[0]=arr[0];
        suff[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            pref[i]=min(pref[i-1],arr[i]);
            suff[n-i-1]=max(suff[n-i],arr[n-i-1]);
        }
        int i=0;
        int j=0;
        int ans=0;
        while(j<n)
        {
            if(pref[i]<=suff[j])
            {
                ans=max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends