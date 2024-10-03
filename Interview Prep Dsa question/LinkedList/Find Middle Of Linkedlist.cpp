// Find Middle Element of Linked List
// You are given the head of a singly linked list 
// A
// A of length 
// N
// N. The values in the list are 
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   respectively. You need to find the value of the middle element of the linked list.

// The middle element of a linked list of length 
// N
// N is the 
// (
// ⌊
// N
// 2
// ⌋
// +
// 1
// )
// (⌊ 
// 2
// N
// ​
//  ⌋+1)-th element from the head of the list.

// Input Format
// The first line of the input contains a single integer 
// T
// T - the number of test cases. The description of 
// T
// T test cases follows.

// The first line of each test case contains a single integer 
// N
// N.

// The second line of each test case contains 
// N
// N space-separated integers 
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  .

// Output Format
// For each test case, the function you complete should return the value of the middle element of the list.
// Note: You need to complete the function getMiddleElement to solve the problem.


#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};

int getMiddleElement(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
       
        
        
        
    }
    return slow->val;
    
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

    int a  = getMiddleElement(head);
    cout<<a<<endl;
    // printList(head);

    return 0;
}
