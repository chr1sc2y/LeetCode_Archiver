class Solution:
    total = 0

    def distributeCoins(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        self.total = 0
        value = self.CountCoins(root)
        return self.total

    def CountCoins(self, node):
        if not node:
            return 0
        value = node.val - 1 + self.CountCoins(node.left) + self.CountCoins(node.right)
        self.total += abs(value)
        return value
