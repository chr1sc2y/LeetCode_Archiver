class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        auto node = head, prev = new ListNode(0), ret = prev;
        while (node) {
            if (!node->next || node->val != node->next->val) {
                prev->next = node;
                prev = node;
                node = node->next;
                prev->next = nullptr;
                continue;
            }
            auto curr = node;
            while (node && node->val == curr->val)
                node = node->next;
        }
        return ret->next;
    }
};
