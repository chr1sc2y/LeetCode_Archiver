class Solution {
public:
    int numPairsDivisibleBy60(vector<int> &time) {
        unordered_map<int, int> match;
        int total = 0, n = time.size();
        for (auto &t:time) {
            int target = (60 - t % 60) % 60;
            if (match.find(target) != match.end())
                total += match[target];
            ++match[t % 60];
        }
        return total;
    }
};
