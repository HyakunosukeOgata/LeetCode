class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0); 
        head = head->next;
        ListNode* curr = dummy;
        int sum = 0;
        
        while (head) {
            if (head->val == 0 && sum > 0) {
                curr->next = new ListNode(sum);
                curr = curr->next;
                sum = 0;
            } else {
                sum += head->val;
            }
            head = head->next;
        }
        
        return dummy->next;
    }
};
