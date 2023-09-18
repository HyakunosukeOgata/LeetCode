Runtime  17 ms Beats 99.82% 
Memory 18.2 MB Beats 38.13%

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;
        
        ListNode *fast = head; 
        ListNode *slow = head;
        while(fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode *cur = slow->next, *pre = NULL;
        slow->next = NULL;
        while (cur != nullptr) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        
        ListNode *t1, *t2;
        while(head != nullptr && pre != nullptr) {
            t1 = head->next;
            t2 = pre->next;
            head->next = pre;
            pre->next = t1;
            head = t1;
            pre = t2;
        }
        
    }
};