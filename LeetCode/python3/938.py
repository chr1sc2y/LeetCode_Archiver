class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        if not root:
            return 0
        sum = 0
        if root.val <= R and root.val >= L:
            sum += root.val
        if root.val < R:
            sum += self.rangeSumBST(root.right, L, R)
        if root.val > L:
            sum += self.rangeSumBST(root.left, L, R)
        return sum
