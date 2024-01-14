class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0); // 創建假頭節點
        dummy->next = head;
        
        ListNode* curr = dummy; // 使用假頭節點進行遍歷
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }

        head = dummy->next; // 更新真正的頭節點
        delete dummy; // 刪除假頭節點
        return head;
    }
};
