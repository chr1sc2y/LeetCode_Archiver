class Solution:
    def maxAncestorDiff(self, root: TreeNode) -> int:
        if not root:
            return 0
        self.val = 0
        self.Traverse(root, root.val, root.val)
        return self.val
        
    def Traverse(self, node: TreeNode, low: int, high: int) -> None:
        if not node:
            return
        self.val = max(self.val, max(abs(node.val - low), abs(node.val - high)))
        low = min(low, node.val)
        high = max(high, node.val)
        self.Traverse(node.left, low, high)
        self.Traverse(node.right, low, high)