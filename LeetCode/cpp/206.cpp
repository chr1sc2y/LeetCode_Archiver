class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        if (!head || !head->next)
            return head;
        ListNode *pre = nullptr, *cur = head, *nex = nullptr;
        while (cur) {
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
};
