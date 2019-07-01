class Solution {
    public int smallestRangeI(int[] A, int K) {
        int max_val = 0, min_val = 10000;
        for (int i = 0; i < A.length; ++i) {
            max_val = max_val > A[i] ? max_val : A[i];
            min_val = min_val < A[i] ? min_val : A[i];
        }
        int res = max_val - min_val - 2 * K;
        return 0 > res ? 0 : res;
    }
}