class MyLinkedList {
public:

    struct ListNode *head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size || head == nullptr) {
            return -1;
        }
        struct ListNode* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
            if (curr == nullptr) {
                return -1; // 檢查 curr 是否為 nullptr
            }
        }
        return curr -> val;
    }
    
    void addAtHead(int val) {
        struct ListNode *temp = new ListNode(val);
        temp -> next = head;
        head = temp;
        size++;
    }
    
    void addAtTail(int val) {
        struct ListNode *newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            ListNode *curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        ListNode *newNode = new ListNode(val);
        ListNode *curr = head;
        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        ListNode *curr = head;
        if (index == 0) {
            head = head->next;
            delete curr;
        } else {
            for (int i = 0; i < index - 1; i++) {
                curr = curr->next;
            }
            ListNode *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        size--;
    }
};