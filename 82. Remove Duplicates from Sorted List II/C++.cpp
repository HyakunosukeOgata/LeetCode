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
        ListNode* deleteDuplicates(ListNode* head) {
            struct ListNode* dummy = new ListNode(0);
            dummy -> next = head;
            struct ListNode* curr = dummy;
            while(head){
                if (head->next && head->val == head->next->val) {
                    int val = head->val;
                    while (head && head->val == val) {
                        struct ListNode* temp = head;
                        head = head->next;
                        delete temp;
                    }
                    curr->next = head; 
                }else{
                    curr = head;
                    head = head->next;
                }
            }
            return dummy->next;
        }
    };