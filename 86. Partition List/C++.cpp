class Solution {
    public:
        ListNode* partition(ListNode* head, int x) {
            struct ListNode* smallDummy = new ListNode(0);
            struct ListNode* bigDummy = new ListNode(0);
            struct ListNode* small = smallDummy;
            struct ListNode* big = bigDummy;
    
            while (head) {
                if (head->val < x) {
                    small->next = head;
                    small = small->next;
                } else {
                    big->next = head;
                    big = big->next;
                }
                head = head->next;
            }
    
            big->next = nullptr;
    
            small->next = bigDummy->next;
    
            return smallDummy->next;
        }
    };
    