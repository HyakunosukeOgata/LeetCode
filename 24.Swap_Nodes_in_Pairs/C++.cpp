Runtime  0 ms Beats 100% 
Memory 7.6 MB Beats 12.1%

time  complexity : O(n)
space complexity : O(1)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead -> next = head;
        ListNode* curr = dummyHead;
        while(curr->next != NULL && curr->next->next != NULL){
            ListNode* temp1 = curr->next;
            ListNode* temp2 = curr->next->next->next;

            curr -> next = temp1->next;
            curr -> next -> next = temp1;
            curr -> next -> next -> next = temp2;

            curr = curr->next->next;
        }
        return dummyHead->next;
    }
};