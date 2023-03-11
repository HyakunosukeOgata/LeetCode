Runtime 8 ms Beats 76.49% 
Memory 7.7 MB Beats 29.96%

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        struct ListNode* slow = head;
        struct ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};