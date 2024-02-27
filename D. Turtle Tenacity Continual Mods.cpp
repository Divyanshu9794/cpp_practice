#include<bits/stdc++.h> 

using namespace std; 



int  main() 
{ 
    long long t; 
    cin>>t; 
    while(t--) 
    { 
        long long n; 
        cin>>n; 
        long long arr[n]; 
        map<long long,long long> m_ap; 

        for(long long i=0;i<n;i++) 
        { 
            cin>>arr[i]; 
            m_ap[arr[i]]++; 
        } 
        if(m_ap.begin()->second==1) 
        { 
            cout<<"YES"<<endl; 
            continue; 
        } 
        vector<long long> vec; 
        for(auto x:m_ap) 
        { 
            vec.push_back(x.first); 
        } 
        if(vec.size()==1) 
        { 
            cout<<"NO"<<endl; 
            continue; 
        } 
        bool flag=true; 
        for(long long i=1;i<vec.size();i++) 
        { 
            if(vec[i]%vec[0]!=0) 
            { 
                cout<<"YES"<<endl; 
                flag=false; 
                break; 
            } 
        } 
        if(flag) 
        { 
            cout<<"NO"<<endl; 
        } 

    } 
}