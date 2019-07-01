class Solution:
    value = 0

    def isUnivalTree(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True
        return self.CompareValue(root, root.val)

    def CompareValue(self, root, value):
        if not root:
            return True
        if root.val != value:
            return False
        return self.CompareValue(root.left, value) and self.CompareValue(root.right, value)