class Solution {
public:
    int thirdMax(vector<int> &nums) {
        set<int> se;
        for (auto n:nums)
            se.insert(n);
        return se.size() >= 3 ? *(--(--(--se.end()))) : *(--se.end());
    }
};
