class Solution {
public:
    vector<ListNode *> splitListToParts(ListNode *root, int k) {
        vector<ListNode *> ret;
        unsigned int size = 0;
        ListNode *head = root;
        while (head) {
            ++size;
            head = head->next;
        }
        unsigned int part = k >= size ? 1 : size / k;
        unsigned int left = k >= size ? 0 : size % k;
        head = root;
        while (head) {
            int i = 1;
            ListNode *tail = head;
            while (i < part) {
                tail = tail->next;
                ++i;
            }
            if (left > 0) {
                tail = tail->next;
                --left;
            }
            ret.push_back(head);
            head = tail->next;
            tail->next = nullptr;
        }
        while (ret.size() < k)
            ret.push_back(nullptr);
        return ret;
    }
};
