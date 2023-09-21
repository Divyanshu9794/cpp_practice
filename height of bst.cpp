#include <bits/stdc++.h>
#include<vector>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
Node* buildTree(string str)
{   
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
    Node *root = new Node(stoi(ip[0]));
    queue<Node*> queue;
    queue.push(root);
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if(currVal != "N") {
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
        if(currVal != "N") {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


    
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        
        return ans ;
    }

    void preorder(struct Node* node,vector<int>&a)
    {
	if (node == NULL)
		return;
	a.push_back(node->data);
	preorder(node->left,a);
	preorder(node->right,a);
    }
    void even(struct Node* node,vector<int>&a){
        preorder(node,a);
        vector<int>res;
        cout<<"Even Nodes are:-"<<endl;
        for(int i=0;i<a.size();i++){
            if(a[i] % 2==0){
               cout<<" "<<a[i];
            }
        }
        
    }


int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
        vector<int> a;
       
		cout<<height(root)<<endl;
        even(root,a);
    }
    return 0;
}