class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ret;
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            if (numbers[i] + numbers[j] == target)
                break;
            else if (numbers[i] + numbers[j] > target)
                --j;
            else
                ++i;
        }
        ret.push_back(i + 1);
        ret.push_back(j + 1);
        return ret;
    }
};
