//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
     long long int total_inversion(long long arr[],long long l,long long m,long long r)
    {
        long long n1=m-l+1,n2=r-m;
        long long left[n1],right[n2];
        for(long long int i=0;i<n1;i++)
        {
            left[i]=arr[l+i];
        }
        for(long long int j=0;j<n2;j++)
        {
            right[j]=arr[m+1+j];
        }
        long long int i=0,j=0,k=l,res=0;
        while(i<n1 and j<n2)
        {
            if(left[i]<=right[j])
            {
                arr[k]=left[i];
                i++;
            }
            else
            {
                arr[k]=right[j];
                j++;
                res+=(n1-i);
            }
            k++;
        }
        while(i<n1)
        {
            arr[k]=left[i];
            i++,k++;
        }
        while(j<n2)
        {
            arr[k]=right[j];
            j++,k++;
        }
        return res;
    }
    long long int cnt_inversion(long long arr[],long long l,long long r)
    {
        long long int res=0;
        if(r>l)
        {
            long long m=l+(r-l)/2;
            res+=cnt_inversion(arr,l,m);
            res+=cnt_inversion(arr,m+1,r);
            res+=total_inversion(arr,l,m,r);
        }
        return res;
    }

    long long int inversionCount(long long arr[], long long N)

    {
        return cnt_inversion(arr,0,N-1);
    }

 

};


//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends