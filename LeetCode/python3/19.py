class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        i = 0
        fast, slow = head,head
        while i < n:
            fast = fast.next
            i += 1
        if not fast:
            return slow.next
        while fast and fast.next:
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next if slow.next else None
        return head
