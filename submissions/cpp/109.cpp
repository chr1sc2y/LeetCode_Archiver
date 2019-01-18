class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        if (!head)
            return nullptr;
        int len = 0;
        ListNode *fast = head, *slow = head, *prev = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        auto root = new TreeNode(slow->val);
        if (fast != slow) {
            prev->next = nullptr;
            root->left = sortedListToBST(head);
            root->right = sortedListToBST(slow->next);
        }
        return root;
    }
};