
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int> &A, vector<vector<int>> &queries) {
        vector<int> ret;
        int sum = 0;
        for (auto &a : A) {
            if (a % 2 == 0)
                sum += a;
        }
        for (int i = 0; i < queries.size(); ++i) {
            int &temp = A[queries[i][1]];
            if (temp % 2 == 0)
                sum -= temp;
            temp += queries[i][0];
            if (temp % 2 == 0)
                sum += temp;
            ret.push_back(sum);
        }
        return ret;
    }
};