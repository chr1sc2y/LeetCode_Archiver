class Solution:
    def widthOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        queue = [(root, 1)]
        left, right, size, max_width = 0, 0, 1, 1
        while len(queue) > 0:
            node = queue[0]
            queue = queue[1:]
            size -= 1
            if left == 0:
                left = node[1]
            else:
                right = node[1]
            if node[0].left:
                queue.append((node[0].left, node[1] * 2))
            if node[0].right:
                queue.append((node[0].right, node[1] * 2 + 1))
            if size == 0:
                size = len(queue)
                max_width = max(max_width, right - left + 1)
                left, right = 0, 0
        return max_width
