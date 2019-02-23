class Solution:
    def buildTree(self, inorder, postorder):
        """
        :type inorder: List[int]
        :type postorder: List[int]
        :rtype: TreeNode
        """

        def BuildSub(i, j, m, n):
            if i > j or m > n:
                return None
            node = TreeNode(postorder[n])
            k = inorder.index(postorder[n])
            node.left = BuildSub(i, k-1, m, m + k-i-1)
            node.right = BuildSub(k+1, j, m+k-i, n-1)
            return node

        size = len(inorder)
        if not size:
            return None
        return BuildSub(0, size - 1, 0, size-1)
