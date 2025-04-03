class Solution {
    public:
        ListNode* reverseBetween(ListNode* head, int left, int right) {
            if (!head || left == right) 
                return head;
    
            struct ListNode* dummy = new ListNode();
            dummy->next = head;
            struct ListNode* prev = dummy;
    
            for (int i = 0; i < left-1; ++i) {
                prev = prev->next;
            }
    
            struct ListNode* curr = prev->next;
            for (int i = 0; i < right - left; ++i) {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                temp->next = prev->next;
                prev->next = temp;
            }
    
            return dummy->next;
        }
    };
    