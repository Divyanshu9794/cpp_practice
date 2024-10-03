// You are given a linked list 
// A
// A of size 
// N
// N.

// Return the node where the cycle begins in the linked list. If there is no cycle, return NULL.

// Input:
// First line will contain 
// T
// T, number of test cases. Then the test cases follow.
// Each test case contains three lines of input.
// First line contains an integer 
// N
// N, length of the linked list 
// A
// A.
// Second line contains 
// A
// 1
// ,
// A
// 2
// ,
// …
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…A 
// N
// ​
//  , the value of the linked list nodes starting from the head for the linked list.
// Third line contains an integer denoting the index of the node where the cycle starts.
// Note:

// For Java language, you need to:
// Complete the function in the submit solution tab:

// Node detectCycle(Node head){...}
 
 

// For C++ language, you need to:
// Complete the function in the submit solution tab:

// Node* detectCycle(Node* head){...}
 
 

// For Python language, you need to:
// Complete the function in the submit solution tab:

// def detectCycle(head):
// Output:
// The function you complete should return the required answer.




#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};
Node* detectCycle(Node* head){

    Node* slow= head;
    Node* fast = head;
    bool hascycle = false;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            hascycle = true;
            break;
        }
    }
    if(!hascycle){
        return NULL;
    }
    
    slow = head;

    while(slow!=fast){
        fast= fast->next;
        slow = slow->next;

    }   
        
    return slow;
    

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
        cout << head->data << " ";
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

    head = detectCycle(head);
    printList(head);

    return 0;
}
