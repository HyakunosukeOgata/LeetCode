struct ListNode* removeHeadElement(struct ListNode* head, int val){
    while (head != NULL && head->val == val){
        struct ListNode* temp = head;
        head = head -> next;
        free(temp);
    }
    return head;
}

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* newHead = removeHeadElement(head, val);
    if (!newHead) 
        return NULL;

    struct ListNode* curr = newHead;
    while (curr != NULL && curr->next != NULL){
        if (curr->next->val == val){
            struct ListNode* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
    return newHead;
}