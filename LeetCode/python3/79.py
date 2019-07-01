class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m, n = len(board), len(board[0]) if len(board) > 0 else 0
        if m == 0:
            return False
        if len(word) == 0:
            return True
        dir_i, dir_j = [0, 1, 0, -1], [1, 0, -1, 0]

        def BackTrack(i, j, k):
            if k == len(word):
                return True
            temp = board[i][j]
            board[i][j] = '!'
            for l in range(4):
                new_i, new_j = i + dir_i[l], j + dir_j[l]
                if new_i >= 0 and new_i < m and new_j >= 0 and new_j < n and board[new_i][new_j] == word[k]:
                    if BackTrack(new_i, new_j, k + 1):
                        return True
            board[i][j] = temp

        for i in range(m):
            for j in range(n):
                if board[i][j] == word[0]:
                    if BackTrack(i, j, 1):
                        return True
        return False
