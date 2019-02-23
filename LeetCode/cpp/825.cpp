class Solution {
public:
    int numFriendRequests(vector<int> &ages) {
        int total = 0;
        vector<int> age_groups(121, 0), age_sum(121, 0);
        for (auto age:ages)
            ++age_groups[age];
        for (int i = 1; i <= 120; ++i)
            age_sum[i] = age_sum[i - 1] + age_groups[i];
        for (int i = 1; i <= 120; ++i) {
            if (age_groups[i] != 0) {
                int count = age_sum[i] - age_sum[i / 2 + 7];
                if (count > 0)
                    total += age_groups[i] * (count - 1);
            }
        }
        return total;
    }
};