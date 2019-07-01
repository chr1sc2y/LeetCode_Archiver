class Solution:
    # @param root, a tree link node
    # @return nothing
    def Support(self, node, next_node):
        if node:
            if node.left and node.right:
                node.left.next = node.right
            if node.right and next_node and next_node.left:
                node.right.next = next_node.left
            self.Support(node.left, node.right)
            self.Support(node.right, next_node.left if next_node and next_node.left else None)

    def connect(self, root):
        if not root:
            return
        self.Support(root, None)