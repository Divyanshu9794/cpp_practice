// Chef gave you the 
// h
// e
// a
// d
// head of a sorted linked list which may contain duplicate values. You've to remove all the duplicate values and return the sorted linked list such that it does not contain any duplicates.

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
//   denoting the integers in the array.
// It is guaranteed that the array is sorted
// You don't need to read or print anything. Just complete the function removeDuplicates() which takes the head of the linked list as input.
// Output Format
// Return the head of the sorted linked list without duplicates.










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
	Node(int x){
		val = x;
		next = NULL;
	}
};

Node* removeDuplicates(Node* head) {
        if (!head)
        {
            return head;  
        }
        std::unordered_set<int> st;
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            if (st.find(current->val) != st.end()) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                st.insert(current->val);
                prev = current;
                current = current->next;
            }
        }
        return head;
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

    head = removeDuplicates(head);
    printList(head);

    
    // printList(head);

    return 0;
}
