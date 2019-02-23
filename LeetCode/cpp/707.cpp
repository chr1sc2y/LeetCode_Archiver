class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() : head(nullptr), len(0) {}

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index >= len)
            return -1;
        ListNode *temp = head;
        int i = 0;
        while (i < index && temp) {
            temp = temp->next;
            ++i;
        }
        return temp->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if (!head)
            head = new ListNode(val);
        else {
            ListNode *temp = new ListNode(val);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        ++len;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if (!head)
            head = new ListNode(val);
        else {
            ListNode *temp = head;
            while (temp->next)
                temp = temp->next;
            ListNode *tail = new ListNode(val);
            temp->next = tail;
            tail->prev = temp;
        }
        ++len;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index > len)
            return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        ListNode *temp = head;
        int i = 0;
        while (i < (index - 1) && temp) {
            temp = temp->next;
            ++i;
        }
        ListNode *addOne = new ListNode(val), *next = temp->next;
        temp->next = addOne;
        addOne->next = next;
        addOne->prev = temp;
        if (next) next->prev = addOne;
        ++len;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index >= len)
            return;
        if (index == 0) {
            DeleteAtHead();
            return;
        }
        ListNode *temp = head;
        int i = 0;
        while (i < (index - 1) && temp) {
            ++i;
            temp = temp->next;
        }
        ListNode *delOne = temp->next, *next = delOne->next;
        temp->next = next;
        if (next) next->prev = temp;
        delete delOne;
        --len;
    }

private:
    struct ListNode {
        int val;
        ListNode *next, *prev;

        ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
    };

    ListNode *head;
    int len;

    void DeleteAtHead() {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
};