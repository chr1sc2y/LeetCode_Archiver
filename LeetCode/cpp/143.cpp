class Solution {
public:
    void reorderList(ListNode *head) {
        if (!head || !head->next || !head->next->next)
            return;
        ListNode *slow = head, *fast = head, *start = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp = slow;
        slow = slow->next;
        temp->next = nullptr;
        slow = reverseListNode(slow);
        while (slow) {
            ListNode *tempA = start->next, *tempB = slow->next;
            start->next = slow;
            slow->next = tempA;
            start = tempA;
            slow = tempB;
        }
    }

    ListNode *reverseListNode(ListNode *head) {
        if (!head->next)
            return head;
        ListNode *prev = head->next, *temp = nullptr;
        head->next = nullptr;
        while (prev) {
            temp = prev->next;
            prev->next = head;
            head = prev;
            prev = temp;
        }
        return head;
    }
};