Runtime 2 ms Beats 53.15% 
Memory 7.2 MB Beats 34.31%

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        struct ListNode *first  = head;
        struct ListNode *second = head->next;
        while(second!= NULL){
            first = first->next;
            second = second->next;
            if (second!=NULL)
                second = second->next;
            else
                break;
        }
        return first;
    }
};