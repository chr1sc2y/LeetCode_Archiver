class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head, *start = head;
        while (slow && fast) {
            if (!fast)
                return nullptr;
            if (fast && fast->next)
                fast = fast->next->next;
            slow = slow->next;
            if (slow == fast)
                break;
        }
        int n = 0;
        while (start && slow) {
            if (start == slow)
                return start;
            ++n;
            start = start->next;
            slow = slow->next;
        }
        return nullptr;
    }
};