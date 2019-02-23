class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (!head || !head->next)
            return head;
        ListNode *first = head, *second = head->next, *ret = second;
        while (first && second) {
            if (second->next && !second->next->next) {
                first->next = second->next;
                second->next = first;
                break;
            }
            if (second->next)
                first->next = second->next->next;
            else
                first->next = nullptr;
            ListNode *temp = second->next;
            second->next = first;
            first = temp;
            if (first)
                second = first->next;
        }
        return ret;
    }
};