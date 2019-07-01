class Solution:
    def isValidBST(self, root: 'TreeNode') -> 'bool':
        if not root:
            return True
        stack = [(root, None, None)]
        while stack:
            node, min_val, max_val = stack.pop()
            if (min_val is not None and min_val >= node.val) or (max_val is not None and max_val <= node.val):
                return False
            if node.left:
                stack.append((node.left, min_val, node.val))
            if node.right:
                stack.append((node.right, node.val, max_val))
        return True