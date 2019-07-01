class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        self.Traverse(root, 0)
        return root
    
    def Traverse(self, node: TreeNode, val: int) -> int:
        if not node:
            return val
        right = self.Traverse(node.right, val)
        node.val += right
        left = self.Traverse(node.left, node.val)
        return left