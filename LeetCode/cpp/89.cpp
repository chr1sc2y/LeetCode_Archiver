class Solution {
public:
    vector<int> grayCode(int n) {
        if (n == 0)
            return vector<int>(1, 0);
        vector<int> grayCode(n, 0);
        vector<int> ret;
        BackTracking(n, 0, grayCode, ret);
        return ret;
    }

    void BackTracking(int &n, int i, vector<int> &grayCode, vector<int> &ret) {
        if (i == n) {
            int sum = 0;
            int bin = 1;
            for (int k = 0; k < grayCode.size(); ++k) {
                sum += grayCode[k] * bin;
                bin *= 2;
            }
            ret.push_back(sum);
            return;
        }
        BackTracking(n, i + 1, grayCode, ret);
        grayCode[i] = (grayCode[i] == 1 ? 0 : 1);
        BackTracking(n, i + 1, grayCode, ret);
    }
};
