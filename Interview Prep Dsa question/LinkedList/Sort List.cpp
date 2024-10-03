/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* merge(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    
    while (l1 && l2) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    
    if (l1) current->next = l1;
    if (l2) current->next = l2;
    
    return dummy->next;
}

ListNode* getMiddle(ListNode* head) {
    if (!head) return head;
    
    ListNode* slow = head;
    ListNode* fast = head->next;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

ListNode* Solution::sortList(ListNode* head) {
    if (!head || !head->next) return head;
    
    ListNode* middle = getMiddle(head);
    ListNode* left = head;
    ListNode* right = middle->next;
    middle->next = NULL;
    
    left = sortList(left);
    right = sortList(right);
    
    return merge(left, right);
}

