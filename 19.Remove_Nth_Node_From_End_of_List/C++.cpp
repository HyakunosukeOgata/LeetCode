class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // 創建一個假的頭節點
        ListNode* start = new ListNode();
        start->next = head;

        ListNode *slow = start, *fast = start;

        // 移動 fast 指針使其與 slow 之間有 n 個節點的距離
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }

        // 同時移動 slow 和 fast 直到 fast 指向最後一個節點
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        // 刪除倒數第 n 個節點
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;

        // 更新後的頭節點可能已經改變
        ListNode* newHead = start->next;
        delete start; // 刪除假頭節點
        return newHead;
    }
};
