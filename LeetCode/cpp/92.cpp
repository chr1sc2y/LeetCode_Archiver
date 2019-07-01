class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        if (m >= n || m < 1)
            return head;
        ListNode *start = new ListNode(0), *prev = start, *tempHead = start;
        start->next = head;
        int k = n - m;
        while (m > 1) {
            prev = head;
            head = head->next;
            --m;
        }
        ListNode *temp = head->next, *link = head, *next = nullptr;
        while (k > 0) {
            next = temp->next;
            temp->next = head;
            head = temp;
            temp = next;
            --k;
        }
        prev->next = head;
        link->next = next;
        return tempHead->next;
    }
};