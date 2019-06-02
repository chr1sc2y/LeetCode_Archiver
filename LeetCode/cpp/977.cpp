class Solution {
public:
    vector<int> sortedSquares(vector<int> &A) {
        vector<int> ret;
        auto size = A.size();
        int i = 0, j = size - 1, mid = 0;
        while (i < j) {
            mid = i + (j - i) / 2;
            if (A[mid] < 0 && A[mid + 1] >= 0)
                break;
            else if (A[mid] >= 0)
                j = mid;
            else
                i = mid;
        }
        i = mid, j = mid + 1;
        while (i >= 0 || j < size) {
            if (i >= 0 && j < size) {
                if (abs(A[i]) <= abs(A[j])) {
                    ret.push_back(pow(A[i], 2));
                    --i;
                } else {
                    ret.push_back(pow(A[j], 2));
                    ++j;
                }
            } else if (i >= 0) {
                ret.push_back(pow(A[i], 2));
                --i;
            } else if (j < size) {
                ret.push_back(pow(A[j], 2));
                ++j;
            }
        }
        return ret;
    }
};
