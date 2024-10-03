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
//   respectively. You are also given a non-negative integer 
// R
// R. You need to rotate the list 
// R
// R places to the right.

// A single rotation to the right is an operation in which the last element of the list is moved to the first place in the list, while all the other elements are moved one place to the right.

// Input Format
// The first line of the input contains a single integer 
// T
// T - the number of test cases. The description of 
// T
// T test cases follows.

// The first line of each test case contains two space-separated integers 
// N
// N and 
// R
// R.

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

// Note:

// For Java language, you need to:
// Complete the function in the submit solution tab:

// Node rotateRight(Node head, int R){...}
 
 

// For C++ language, you need to:
// Complete the function in the submit solution tab:

// Node* rotateRight(struct Node* head, int R){...}
 
 

// For Python language, you need to:
// Complete the function in the submit solution tab:

// def rotateRight(head, R):
// Output Format
// For each test case, the function you complete should return the head of the list which has been rotated to the right exactly 
// R
// R times.




#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int val;
    struct Node* next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};

Node* rotateRight(Node* head, int R) {
    if (!head || R == 0)
    {
         return head;
    }
    Node* tail = head;
    int length = 1;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    tail->next = head;

    R = R % length;
    if (R == 0) {
        tail->next = NULL;
        return head;
    }

    Node* newTail = head;
    for (int i = 0; i < length - R - 1; ++i) {
        newTail = newTail->next;
    }

    Node* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
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
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, R, data;
        Node* head = NULL;

        cin >> N >> R;

        for (int i = 0; i < N; i++) {
            cin >> data;
            insertNode(head, data);
        }

        head = rotateRight(head, R);
        printList(head);
    }

    return 0;
}
