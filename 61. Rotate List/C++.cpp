class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if (!head || !head->next || k == 0) 
                return head;
    
            int len = 1;
            struct ListNode* tail = head;
            while (tail->next) {
                tail = tail->next;
                len++;
            }
    
            k %= len;
            if (k == 0) 
                return head;
    
            tail->next = head;
            struct ListNode* new_tail = head;
            for (int i = 0; i < len - k - 1; ++i) {
                new_tail = new_tail->next;
            }
    
            ListNode* new_head = new_tail->next;
            new_tail->next = nullptr;
            return new_head;
        }
    };
    