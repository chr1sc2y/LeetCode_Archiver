class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        auto size = A.size();
        if(size <= 1)
            return A;
        int i = 0,j = 1;
        while(i< size && j < size) {
            while(A[i] % 2 == 0 && i < size)
                i += 2;
            while(A[j] % 2 == 1 && j < size)
                j += 2;
            if(i < size && j < size) {
                swap(A[i],A[j]);
                i += 2;
                j += 2;
            }
        }
        return A;
    }
};