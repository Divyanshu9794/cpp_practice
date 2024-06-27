//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;




// } Driver Code Ends
//User function template for C++

// points : 2-d vector containing the (x, y) points
// K : number of closest points that we need to find 
// return 2d vector containing the k points in increasing order of distance from origin

class Solution{
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        multimap<int, int> mp;
        vector<vector<int>>a;
        int n = points.size();
        for(int i = 0; i < n; i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            mp.insert({(x * x) + (y * y) , i});
        }
        int i=0;
        for(auto it = mp.begin(); it != mp.end() && K > 0;it++, K--){ 
            // cout << "[" << pts[it->second][0] << ", "
            //      << pts[it->second][1] << "]" << "\n";
            a[i].push_back(points[it->second][0]);
            a[i].push_back(points[it->second][1]);
            i++;

            
        }
        return a;
    }
};
// } Driver Code Ends