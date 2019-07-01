class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *curr = head;
        while (curr && curr->next) {
            if (curr->val == curr->next->val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};
