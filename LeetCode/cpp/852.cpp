class Solution {
public:
    int peakIndexInMountainArray(vector<int> &A) {
        int start = 0, end = A.size(), mid = 0;
        while (start < end) {
            mid = (start + end) / 2;
            if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1])
                break;
            else if (A[mid] < A[mid + 1])
                start = mid + 1;
            else
                end = mid;
        }
        return mid;
    }
};