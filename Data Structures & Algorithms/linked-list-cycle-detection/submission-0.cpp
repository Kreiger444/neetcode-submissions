/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(!head) return false;
        ListNode* ptr = head;
        ListNode* prev = NULL;
        ListNode* next = head->next;
        while(next){
            if(next == head) return true;
            ptr->next = prev;
            prev = ptr;
            ptr = next;
            next = next->next;
        }
        return false;
    }
};
