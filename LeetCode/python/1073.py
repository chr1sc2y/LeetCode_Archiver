class Solution(object):
    def addNegabinary(self, arr1, arr2):
        """
        :type arr1: List[int]
        :type arr2: List[int]
        :rtype: List[int]
        """
        m, n = len(arr1) - 1, len(arr2) - 1
        if m < n:
            return self.addNegabinary(arr2, arr1)
        temp, res = 0, 0
        while m >= 0:
            temp = arr1[m] + res
            if n >= 0:
                temp += arr2[n]
            if temp == 2:
                arr1[m] = 0
                res = -1
            else:
                arr1[m] = temp
                res = 0
            if n >= 0:
                n -= 1
            m -= 1
        if res == -1:
            arr1 = [-1] + arr1
        m = len(arr1) - 1
        while m >= 0:
            if arr1[m] == -1:
                arr1[m] = 1
                if m - 1 >= 0:
                    arr1[m - 1] += 1
                else:
                    arr1 = [1] + arr1
            elif arr1[m] == 2:
                arr1[m] = 0
                if m - 1 >= 0:
                    arr1[m - 1] -= 1
                else:
                    arr1 = [1, 1] + arr1
            m -= 1
        while len(arr1) > 1 and arr1[0] == 0:
            arr1 = arr1[1:]
        return arr1
