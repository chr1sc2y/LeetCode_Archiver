class Solution:
    def findDuplicateSubtrees(self, root):
        """
        :type root: TreeNode
        :rtype: List[TreeNode]
        """

        if not root:
            return []
        tree_list = []
        cnt = collections.Counter()

        def Traverse(node):
            if not node:
                return '#'
            serialized_tree = "{}{}{}".format(
                node.val, Traverse(node.left), Traverse(node.right))
            cnt[serialized_tree] += 1
            if cnt[serialized_tree] == 2:
                tree_list.append(node)
            return serialized_tree

        Traverse(root)
        return tree_list