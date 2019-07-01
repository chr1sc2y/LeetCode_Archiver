class Solution {
public:
    int countTriplets(vector<int> &A) {
        int total = 0;
        int size = A.size();
        for (int i = 0; i < size - 2; ++i) {
            for (int j = i + 1; j < size - 1; ++j)
                for (int k = j + 1; k < size; ++k) {
                    if (static_cast<int>(A[i] & A[j] & A[k]) == 0)
                        total += 6;
                }
        }
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if (i == j)
                    continue;
                if (static_cast<int>(A[i] & A[i] & A[j]) == 0)
                    total += 3;
            }
        }
        for (int i = 0; i < size; ++i)
            if (static_cast<int>(A[i] & A[i] & A[i] ) == 0)
                total += 1;

        return total;
    }
};
