class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int> &A) {
        int sum = 0;
        vector<bool> ret(A.size(), false);
        for (int i = 0; i < A.size(); ++i) {
            sum = (sum * 2 + A[i]) % 5;
            ret[i] = sum == 0 ? true : false;
        }
        return ret;
    }
};
