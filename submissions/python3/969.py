class Solution:
    def pancakeSort(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        ret = []
        size = len(A)
        while size > 0:
            index = A.index(max(A[:size]))
            if index == size - 1:
                size -= 1
                continue
            if index != 0:
                ret.append(index + 1)
                A[0:index + 1] = A[index::-1]
            ret.append(size)
            A[:size] = A[size-1::-1]
            size -= 1
        return ret