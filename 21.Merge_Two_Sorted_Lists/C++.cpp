Runtime 4 ms Beats 94.61% 
Memory 14.9 MB Beats 46.90%

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        if (list1->val >= list2->val){
            list2->next = mergeTwoLists(list2->next, list1);
            return list2;
        }
        else{
            list1->next = mergeTwoLists(list2, list1->next);
            return list1;
        }
    }
};