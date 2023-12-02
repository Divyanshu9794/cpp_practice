//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        
         int min = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                int ind = (arr[i] - 1)%n; 
                if(arr[ind] > arr[i] || arr[ind] <= 0){   //Swaping the two element of its position
                   int temp = arr[ind];
                   arr[ind] = arr[i];
                   arr[i] = temp;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            if(arr[i] == min ){
                min++;
            }
        }
        return min;
        
    }
};

//{ Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends