class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        ListNode *l1 = new ListNode(0), *l2 = new ListNode(0);
        ListNode *ret = l1, *temp = l2;
        while (head) {
            if (head->val < x) {
                l1->next = head;
                l1 = head;
            } else {
                l2->next = head;
                l2 = head;
            }
            head = head->next;
        }
        l1->next = temp->next;
        l2->next = nullptr;
        return ret->next;
    }
};
