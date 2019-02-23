class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (!head || !head->next)
            return head;
        ListNode *temp = head, *start = new ListNode(0), *ret = start;
        start->next = head;
        int n = 0, left = 0;
        while (temp) {
            temp = temp->next;
            ++n;
        }
        left = n % k;
        n /= k;
        while (n > 0) {
            ListNode *update = nullptr;
            if (left != 0 || n > 1) {
                ListNode *t = head;
                int m = k;
                while (m > 0) {
                    --m;
                    t = t->next;
                }
                update = t;
            }
            ListNode *tail = reverseListNode(head, k);
            start->next = tail;
            start = head;
            head = update;
            --n;
        }
        start->next = head;
        return ret->next;
    }

    ListNode *reverseListNode(ListNode *head, int k) {
        ListNode *temp = head, *prev = nullptr, *next = nullptr;
        while (k > 0) {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            --k;
        }
        return prev;
    }
};