class Solution {
public:
    int numComponents(ListNode *head, vector<int> &G) {
        unordered_set<int> exist;
        for (int i = 0; i < G.size(); ++i)
            exist.insert(G[i]);
        int num = 0;
        bool connected = false;
        while (head) {
            if (connected && exist.find(head->val) == exist.end()) {
                connected = false;
                ++num;
            }
            if (exist.find(head->val) != exist.end())
                connected = true;
            head = head->next;
        }
        if (connected) ++num;
        return num;
    }
};