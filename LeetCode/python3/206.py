class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        prev = None
        while head:
            next = head.next
            head.next = prev
            prev = head
            head = next
        return prev