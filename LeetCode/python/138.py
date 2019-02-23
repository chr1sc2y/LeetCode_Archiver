class Solution(object):
    def copyRandomList(self, head):
        """
        :type head: RandomListNode
        :rtype: RandomListNode
        """
        if not head:
            return head
        newHead = RandomListNode(0)
        currentNode, curr = newHead, head
        nodeDict = {}
        while curr:
            tempNode = RandomListNode(curr.label)
            nodeDict[curr] = tempNode
            currentNode.next = tempNode
            currentNode, curr = currentNode.next, curr.next
        curr, currentNode = head, newHead.next
        while curr and currentNode:
            if curr.random:
                currentNode.random = nodeDict[curr.random]
            curr, currentNode = curr.next, currentNode.next
        return newHead.next
