class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        int n = 0;
        ListNode *temp = head, *tail = nullptr, *start = head, *end = nullptr;
        while (temp) {
            if (!temp->next)
                tail = temp;
            temp = temp->next;
            ++n;
        }
        k %= n;
        if(k == 0)
            return head;
        n -= k;
        while (n > 0) {
            if (n == 1)
                end = start;
            start = start->next;
            --n;
        }
        tail->next = head;
        end->next = nullptr;
        return start;
    }
};