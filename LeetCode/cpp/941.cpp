class Solution {
public:
    bool validMountainArray(vector<int> &A) {
        auto size = A.size();
        if (size < 3)
            return false;
        int i = 0;
        while (i + 1 < size && A[i] < A[i + 1])
            ++i;
        if (i == 0 || i == size - 1)
            return false;
        while (i + 1 < size && A[i] > A[i + 1])
            ++i;
        return i == size - 1;
    }
};
