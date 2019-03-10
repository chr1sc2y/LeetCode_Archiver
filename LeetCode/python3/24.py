class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if not head or not head.next:
            return head
        first, second = head, head.next if head else None
        head = second
        while first and second:
            cache = second.next
            second.next = first
            first.next = cache.next if cache and cache.next else cache
            first = cache
            second = first.next if first else None
        return head
    