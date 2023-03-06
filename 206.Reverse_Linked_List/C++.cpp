Runtime 3 ms Beats 96.41% 
Memory 8.4 MB Beats 19.87%

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        struct ListNode* temp;
        struct ListNode* prev = NULL;
        while(head){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
};