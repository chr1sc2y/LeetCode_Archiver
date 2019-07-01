class Solution:
    def isSameTree(self, p: 'TreeNode', q: 'TreeNode') -> 'bool':
        if not p and not q:
            return True
        elif not p or not q:
            return False
        return q.val == p.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)