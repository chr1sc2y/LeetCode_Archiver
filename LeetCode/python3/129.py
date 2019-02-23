class Solution:
    total = 0
    def sumNumbers(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        self.CountSum(root, 0)
        return self.total


    def CountSum(self, root, sum):
        if not root.left and not root.right:
            self.total += sum * 10 + root.val
            return
        if root.left:
            self.CountSum(root.left, sum * 10 + root.val)
        if root.right:
            self.CountSum(root.right, sum * 10 + root.val)