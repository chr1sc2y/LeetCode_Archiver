class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first = head, *second = head;
        while (first && first->next) {
            first = first->next->next;
            second = second->next;
            if (first == second)
                return true;
        }
        return false;
    }
};