class Solution {
    class Athlete {
    public:
        int score;
        int pos;
    };

public:
    vector<string> findRelativeRanks(vector<int> &nums) {
        int n = nums.size(), j = 0;
        vector<Athlete> athletes(n, Athlete());
        vector<string> ret(n, "");
        vector<string> medal{"Gold Medal", "Silver Medal", "Bronze Medal"};
        for (int i = 0; i < n; ++i) {
            athletes[i].score = nums[i];
            athletes[i].pos = i;
        }
        sort(athletes.begin(), athletes.end(), [](const Athlete &a1, const Athlete &a2) {
            return a1.score >= a2.score;
        });
        for (int i = 0; i < n; ++i)
            ret[athletes[i].pos] = j <= 2 ? medal[j++] : to_string(i + 1);
        return ret;

    }
};
