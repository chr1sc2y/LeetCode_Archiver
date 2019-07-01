class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        dict = {}
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if i - j not in dict:
                    dict[i - j] = matrix[i][j]
                elif dict[i - j] != matrix[i][j]:
                    return False
        return True
