class Solution {
public:
    vector<int> advantageCount(vector<int> &A, vector<int> &B) {
        sort(A.begin(), A.end());
        vector<int> ret;
        for (auto b:B) {
            int i = 0, j = A.size(), mid = 0;
            while (i < j) {
                mid = i + (j - i) / 2;
                if (A[mid] > b)
                    j = mid;
                else
                    i = mid + 1;
            }
            if (j == A.size()) {
                ret.push_back(A[0]);
                A.erase(A.begin());
            } else {
                ret.push_back(A[j]);
                A.erase(A.begin() + j);
            }
        }
        return ret;
    }
};
