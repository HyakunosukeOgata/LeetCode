Runtime 3 ms Beats 72.80% 
Memory 11 MB Beats 6.40%

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int length_listnode = 0;
        for(; temp; length_listnode++)
            temp = temp -> next;
        
        n = length_listnode - n;
        temp = head;
        if(n == 0) 
            return head->next;
        
        for(int i = 0; i < n - 1; i++)
            temp = temp->next;
        
        if(temp->next)
            temp->next = temp->next->next;
        
        return head;
    }
};