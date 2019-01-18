class Solution {
public:
    vector<int> pancakeSort(vector<int> &A) {
        vector<int> ret;
        auto size = A.size();
        for (int i = 0; i < size; ++i) {
            int sub = FindMaxEleSub(A, size - i);
            if (sub == -1)
                continue;
            if (sub != 0) {
                ret.push_back(sub + 1);
                Reverse(A, sub + 1);
            }
//            Print::getInstance().PrintVector(A);
            ret.push_back(size - i);
            Reverse(A, size - i);
//            Print::getInstance().PrintVector(A);
        }
        return ret;
    }

    int FindMaxEleSub(vector<int> &A, int &&len) {
        int maxEle = 0, sub = 0;
        for (int i = 0; i < len; ++i) {
            if (maxEle < A[i]) {
                maxEle = A[i];
                sub = i;
            }
        }
        if (sub == len - 1)
            return -1;
        return sub;
    }

    void Reverse(vector<int> &A, int &&len) {
        for (int i = 0; i < len / 2; ++i)
            swap(A[i], A[len - i - 1]);
    }
};