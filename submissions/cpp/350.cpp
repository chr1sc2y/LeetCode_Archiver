class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        unordered_map<int, int> map1;
        for (int i = 0; i < nums1.size(); ++i)
            ++map1[nums1[i]];
        for (int i = 0; i < nums2.size(); ++i) {
            if (map1[nums2[i]] > 0)
                --map1[nums2[i]];
            else {
                nums2.erase(nums2.begin() + i);
                --i;
            }
        }
        return nums2;
    }
};