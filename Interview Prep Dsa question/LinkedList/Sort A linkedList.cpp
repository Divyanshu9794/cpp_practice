// Sort a linked list
// You recently learned the concept of sorting and want to practice problems to enhance your skills. Chef gave you the task of sorting a linked list to try your skills.

// Can you sort the given linked list?

// Input Format
// First-line will contain 
// T
// T, the number of test cases. Then the test cases follow.
// Each test case contains two lines of input.
// The first line of every test case contains an integer 
// N
// N - the length of array.
// The second line of every test case contains 
// N
// N integers - 
// A
// 1
// ,
// A
// 2
// ,
// .
// .
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,..,A 
// N
// ​
//   denoting the integers in the linked list.
// You don't need to read or print anything. Just complete the function sort() which takes the head of the linked list as input.
// Output Format
// Return the head of the sorted linked list.




/*struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *n) : val(x), next(n) {}
  };
  */


 
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


struct Node {
    int val;
    struct Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

    Node* getMid(Node* head){
        if(head==nullptr){
            return head;
            
        }
        Node* slow= head;
        Node* fast= head->next;
        while(fast and fast->next){
            slow=slow->next;
            fast= fast->next->next;
            
        }
        return slow;
    }
    Node* merge(Node* left, Node* right){
        if(left==nullptr){
            return right;
        }
        if(right==nullptr){
            return left;
        }
        Node* dummy= new Node(-1);
        Node* temp= dummy;
        while(left and right){
            if(left->val<right->val){
               temp->next= left;
               temp= left;
               left= left->next;
            }
            else{
                temp->next= right;
                temp= right;
                right= right->next;
            }
        }
        while(left ){
            temp->next= left;
            temp= left;
            left= left->next;
        }
        while(right){
            temp->next= right;
            temp= right;
            right=right->next;
        }
        dummy = dummy->next;
        return dummy;
    }
	Node* rearrange(Node* head)
	{
		//CODE HERE
		if(head==nullptr or head->next==nullptr){
            return head;
            
        }
        Node* mid= getMid(head);
        Node* left= head;
        Node* right= mid->next;
        mid->next= nullptr;
        left= rearrange(left);
        right= rearrange(right);
        //merge
        Node* ans= merge(left, right);
        return ans;
	}
void insertNode(Node*& head, int data) {
    if (head == NULL) {
        head = new Node(data);
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    int N, data;
    Node* head = NULL;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> data;
        insertNode(head, data);
    }

    head = rearrange(head);
    printList(head);

    return 0;
}

