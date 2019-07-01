class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> table;
        for (auto n: nums) {
            if (table.find(n) == table.end())
                table.insert(n);
            else
                return true;
        }
        return false;
    }
};