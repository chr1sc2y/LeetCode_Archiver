class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int m = nums1.size(), n = nums2.size();
        if (m > n) {
            swap(nums1, nums2);
            swap(m, n);
        }
        if (m == 0)
            return n % 2 == 0 ? static_cast<double>(nums2[n / 2 - 1] + nums2[n / 2]) / 2 : nums2[n / 2];
        int i = 0, j = m, half = (m + n + 1) / 2;
        while (i < j) {
            int k = i + (j - i) / 2, l = half - k;
            if (nums1[k] < nums2[l - 1])
                i = k + 1;
            else
                j = k;
        }
        int r1 = i, r2 = half - i;
        int res1 = max(r1 - 1 >= 0 ? nums1[r1 - 1] : INT_MIN, r2 - 1 >= 0 ? nums2[r2 - 1] : INT_MIN);
        if ((m + n) % 2)
            return res1;
        int res2 = min(r1 < m ? nums1[r1] : INT_MAX, r2 < n ? nums2[r2] : INT_MAX);
        return static_cast<double>(res1 + res2) / 2;
    }
};
