class Solution {
public:
    vector<int> nextLargerNodes(ListNode *head) {
        vector<int> s;
        while (head) {
            s.push_back(head->val);
            head = head->next;
        }
        int n = s.size();
        stack<int> temp;
        vector<int> ret(n, 0);
        for (int i = n - 1; i >= 0; --i) {
            while (!temp.empty() && temp.top() <= s[i])
                temp.pop();
            ret[i] = temp.empty() ? 0 : temp.top();
            temp.push(s[i]);
        }
        return ret;
    }
};
