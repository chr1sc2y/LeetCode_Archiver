class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if (!head)
            return nullptr;
        std::map<RandomListNode *, RandomListNode *> nodeMap;
        auto cur = head;
        RandomListNode *pre = new RandomListNode(0), *node = pre;
        while (cur) {
            node->next = new RandomListNode(cur->label);
            nodeMap.insert(std::pair<RandomListNode *, RandomListNode *>(cur, node->next));
            node = node->next;
            cur = cur->next;
        }
        cur = head;
        node = pre->next;
        while (cur && node) {
            node->random = nodeMap[cur->random];
            node = node->next;
            cur = cur->next;
        }
        return pre->next;
    }
};
