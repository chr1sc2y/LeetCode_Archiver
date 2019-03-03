class Solution(object):
    def hasCycle(self, head):
        p, q = head, head
        while True:
            if p and p.next:
                p = p.next.next
            else:
                return False
            q = q.next
            if q == p:
                return True
        return False
