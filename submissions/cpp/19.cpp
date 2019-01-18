class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *l = new ListNode(0);
        l->next = head;
        ListNode *fast = head, *slow = head;
        ListNode *prev = l;
        while (n > 0) {
            fast = fast->next;
            --n;
        }
        while (fast) {
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        prev->next = slow->next;
        return l->next;
    }
};
