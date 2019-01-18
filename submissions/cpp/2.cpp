class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int lenL1 = 0, lenL2 = 0;
        ListNode *tempL1 = l1, *tempL2 = l2, *ret = l1, *tempRet = nullptr;
        while (tempL1) {
            ++lenL1;
            tempL1 = tempL1->next;
        }
        while (tempL2) {
            ++lenL2;
            tempL2 = tempL2->next;
        }
        if (lenL1 < lenL2) {
            ListNode *temp = l1;
            l1 = l2;
            ret = l2;
            l2 = temp;
        }
        int sur = 0;
        while (l1 && l2) {
            if (lenL1 == lenL2 && !l1->next)
                tempRet = l1;
            int temp = l1->val + l2->val + sur;
            l1->val = temp % 10;
            sur = temp / 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            if (!l1->next)
                tempRet = l1;
            int temp = l1->val + sur;
            l1->val = temp % 10;
            sur = temp / 10;
            l1 = l1->next;
        }
        if (sur == 1) {
            ListNode *temp = new ListNode(1);
            tempRet->next = temp;
        }
        return ret;
    }
};