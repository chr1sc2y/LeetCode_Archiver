class Solution:
    def sumRootToLeaf(self, root: TreeNode) -> int:
        mod = 10 ** 9 + 7

        def Sum(node: TreeNode, curr: int) -> int:
            if not node.left and not node.right:
                return curr * 2 + node.val % mod
            sum = 0
            sum += Sum(node.left, curr * 2 + node.val % mod) if node.left else 0
            sum += Sum(node.right, curr * 2 + node.val % mod) if node.right else 0
            return sum

        if not root:
            return 0
        return Sum(root, 0)
