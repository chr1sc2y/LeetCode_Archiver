class Solution {
public:
    bool isPalindrome(ListNode *head) {
        ListNode *first = head, *second = head;
        while (first && first->next) {
            first = first->next->next;
            second = second->next;
        }
        if (first)
            second = second->next;
        second = ReverseList(second);
        while (head && second) {
            if (head->val != second->val)
                return false;
            head = head->next;
            second = second->next;
        }
        return true;
    }

    ListNode *ReverseList(ListNode *head) {
        ListNode *prev = nullptr, *curr = head, *next = head;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};