class NumArray {
public:
    NumArray(vector<int> nums) {
        num = nums;
        int n = nums.size();
        query.push_back(0);
        for (int i = 0; i < n; ++i)
            query.push_back(nums[i] + query[i]);
        for (int i = 0; i < n; ++i)
            dif.push_back(0);
    }

    void update(int i, int val) {
        dif[i] = val - num[i];
    }


    int sumRange(int i, int j) {
        int sum = query[j + 1] - query[i];
        for (int k = i; k <= j; ++k)
            sum += dif[k];
        return sum;
    }

private:
    vector<int> num;
    vector<int> query;
    vector<int> dif;
};