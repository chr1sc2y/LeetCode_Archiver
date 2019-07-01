class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        stack<int> s1, s2, s;
        ListNode *temp1 = l1, *temp2 = l2;
        while (temp1) {
            s1.push(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2) {
            s2.push(temp2->val);
            temp2 = temp2->next;
        }
        auto size1 = s1.size(), size2 = s2.size();
        ListNode *l = size1 > size2 ? l1 : l2;
        int cur = 0, nex = 0;
        while (!s1.empty() || !s2.empty()) {
            cur = nex;
            if (!s1.empty()) cur += s1.top();
            if (!s2.empty()) cur += s2.top();
            nex = cur / 10;
            cur = cur % 10;
            s.push(cur);
            if (!s1.empty()) s1.pop();
            if (!s2.empty()) s2.pop();
        }
        if (nex == 1) {
            s.push(1);
            ListNode *temp = new ListNode(1);
            temp->next = l;
            l = temp;
        }
        ListNode *curr = l;
        while (!s.empty()) {
            curr->val = s.top();
            s.pop();
            curr = curr->next;
        }
        return l;
    }
};
