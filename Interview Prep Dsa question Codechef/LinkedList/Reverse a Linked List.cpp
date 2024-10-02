// Reverse a Linked List
// The Chef gives you a singly linked list 
// A
// A integers and ask you to help him reverse the list.

// Complete the function "listReverse" in the code snippet that takes a single argument: head of the linked list.

// Input Format
// The first line contains an integer 
// N
// N - representing the number of elements of the linked list.
// The second line contains 
// N
// N integers - representing the elements of the linked list.
// Note: You need to complete the functions in the submit solution tab:

// Node* listReverse(struct Node* head){...}

// Output Format
// For each testcase, output will be in a single line containing a list passed by the function listReverse.

/*struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};*/



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

Node* reverseList(Node* head) {
    vector<int> v;
    Node* rev = head;
    Node* t = head;

    while (t != NULL) {
        v.push_back(t->data);
        t = t->next;
    }

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        rev->data = v[i];
        rev = rev->next;
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

    head = reverseList(head);
    printList(head);

    return 0;
}
