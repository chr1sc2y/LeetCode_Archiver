class Solution {
public:
    int maximumSwap(int num) {
        vector<int> vec, latest(10, -1);
        int temp = num;
        while (num > 0) {
            int &&temp = num % 10;
            vec.push_back(temp);
            num /= 10;
        }
        auto size = vec.size();
        for (int i = size - 1; i >= 0; --i)
            latest[vec[i]] = i;
        for (int i = size - 1; i >= 0; --i) {
            for (int j = 9; j > vec[i]; --j) {
                if (latest[j] != -1 && i > latest[j]) {
                    swap(vec[i], vec[latest[j]]);
                    return support(vec);
                }
            }
        }
        return temp;
    }

    int support(vector<int> &vec) {
        int ret = 0;
        while (!vec.empty()) {
            ret = ret * 10 + vec.back();
            vec.pop_back();
        }
        return ret;
    }
};
