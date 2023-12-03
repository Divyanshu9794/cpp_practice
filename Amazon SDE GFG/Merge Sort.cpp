//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends

class Solution
{
    public:
    void merge(int arr[], int l, int mid, int h)
    {
         if(l>=h) return;
         int low=l,size=h-l+1,end=mid+1,i=0,high=h,nums[size];
         while(low<=mid and end<=high)
         {
             nums[i++] = arr[low] < arr[end] ? arr[low++] : arr[end++]; 
         }
         while(low<=mid)
         {
             nums[i++] = arr[low++];
         }
         while(end<=high)
         {
             nums[i++] = arr[end++];
         }
         for(int i=0;i<size;i++)
         {
             arr[i+l]=nums[i];
         }
    }
    public:
    void mergeSort(int arr[], int l, int h)
    {
        if(l<h)
        {
            int mid=l+(h-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,h);
            merge(arr,l,mid,h);
        }
    }
};



//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends