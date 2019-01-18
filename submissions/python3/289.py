class Solution:
    def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: void Do not return anything, modify board in-place instead.
        """
        ret = copy.deepcopy(board)
        m = len(board)
        n = len(board[0]) if m > 0 else 0
        for i in range(m):
            for j in range(n):
                neighbour = 0
                for I in range(max(0, i - 1), min(m, i + 2)):
                    for J in range(max(0, j - 1), min(n, j + 2)):
                        neighbour += board[I][J] if I != i or J != j else 0
                if neighbour == 3 and board[i][j] == 0:
                    ret[i][j] = 1
                elif (neighbour < 2 or neighbour > 3) and board[i][j] == 1:
                    ret[i][j] = 0
        for i in range(m):
            for j in range(n):
                board[i][j] = ret[i][j]