
#include<bits/stdc++.h> 
using namespace std; 

class TrieNode {
public:    
    TrieNode* children[2]; 
    int value;
    TrieNode(){
        for(int i=0;i<2;i++){
            children[i] = NULL;
        }
        value = 0;
    }
};

class Trie {
public:
    
    TrieNode *root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(int no) 
    {
        TrieNode* trav=root;
        for(int i=31;i>=0;i--)
        {
            int bit=(no>>i)&1; 
            if(trav->children[bit]==NULL){
                trav->children[bit] = new TrieNode();
            }
            trav=trav->children[bit];
        }
        trav->value = no;
    }
    int findMaxXor(int n) {
        
        TrieNode* trav = root;
        
        for(int i=31;i>=0;i--)
        {
            int bit = (n>>i)&1;
            if(trav->children[1-bit]!=NULL)
            {
                trav = trav->children[1-bit];
            }
            else if(trav->children[bit]!=NULL)
                trav=trav->children[bit];
        }
        return (trav->value)^n; 
    }
};

class Solution{   
public:
    int maxSubarrayXOR(int n, int arr[]){    
        
       
        vector<int>cxor(n);
        cxor[0] = arr[0];
        for(int i=1;i<n;i++){
            cxor[i] = cxor[i-1]^arr[i];
        }

        Trie *trie = new Trie();
        
        trie->insert(0);
        int ans = 0;
        for(int i=0;i<n;i++){
            trie->insert(cxor[i]); //prefix xor
            ans = max(ans, trie->findMaxXor(cxor[i]));
        } 
        return ans;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }
    return 0; 
} 
