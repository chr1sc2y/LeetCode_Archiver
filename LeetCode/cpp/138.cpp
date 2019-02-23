class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if (!head)
            return nullptr;
        auto node = head;
        while (node) {
            auto next = new RandomListNode(node->label);
            next->next = node->next;
            node->next = next;
            node = node->next->next;
        }
        node = head;
        auto next = node->next, ret = next;
        while (node) {
            if (node->random)
                next->random = node->random->next;
            node = node->next->next;
            next = node ? node->next : nullptr;
        }
        node = head;
        while (node) {
            auto temp = node->next;
            node->next = node->next->next;
            temp->next = node->next ? node->next->next : nullptr;
            node = node->next;
        }
        return ret;
    }
};