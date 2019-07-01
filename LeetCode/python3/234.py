class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        if not head or not head.next:
            return True
        fast, slow = head, head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        temp = head
        while temp and temp.next != slow:
            temp = temp.next
        temp.next = None
        curr = slow
        prev = None
        while curr:
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next
        while prev and head:
            if prev.val != head.val:
                return False
            prev = prev.next
            head = head.next
        return True
