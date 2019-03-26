class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = 0, n = A.size();
        for (int i = 0; i < n; ++i)
            sum += A[i];
        if (sum % 3 != 0)
            return false;
        int part = 0, cum = 0;
        sum /= 3;
        for (int i = 0; i < n; ++i) {
            cum += A[i];
            if (cum == sum) {
                ++part;
                cum = 0;
            }
        }
        return (part == 3 && cum == 0);
    }
};