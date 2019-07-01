class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        auto slow = head->next, fast = head->next->next;
        while (fast && fast->next && fast != slow) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow == fast;
    }
};
