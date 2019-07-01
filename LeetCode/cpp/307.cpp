class NumArray {
    vector<int> array;
public:
    NumArray(vector<int> nums) {
        int n = nums.size();
        array = vector<int>(2 * n, 0);
        for (int i = n, j = 0; i < 2 * n; ++i, ++j)
            array[i] = nums[j];
        for (int i = n - 1; i > 0; --i)
            array[i] = array[i * 2] + array[i * 2 + 1];
    }

    void update(int i, int val) {
        i += array.size() / 2;
        int prev = array[i];
        while (i > 0) {
            array[i] += val - prev;
            i /= 2;
        }
    }

    int sumRange(int i, int j) {
        int sum = 0;
        i += array.size() / 2;
        j += array.size() / 2;
        while (i <= j) {
            if (i % 2 == 1) {
                sum += array[i];
                ++i;
            }
            if (j % 2 == 0) {
                sum += array[j];
                --j;
            }
            i /= 2;
            j /= 2;
        }
        return sum;
    }
};
