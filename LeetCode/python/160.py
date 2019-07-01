class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        nodeA ,nodeB = headA,headB
        if not nodeA or not nodeB:
            return None
        while nodeA != nodeB:
            nodeA = nodeA.next
            nodeB = nodeB.next
            if not nodeA and not nodeB:
                return None
            if not nodeA:
                nodeA = headB
            if not nodeB:
                nodeB = headA
        return nodeA