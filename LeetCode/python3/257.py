class Solution:
    def binaryTreePaths(self, root: TreeNode) -> List[str]:
        if not root:
            return []
        ret = []
        self.BackTrack(root, str(root.val), ret)
        return ret

    def BackTrack(self, node, s, ret):
        if not node.left and not node.right:
            ret.append(s)
            return
        if node.left:
            self.BackTrack(node.left, s + "->" + str(node.left.val), ret)
        if node.right:
            self.BackTrack(node.right, s + "->" + str(node.right.val), ret)
