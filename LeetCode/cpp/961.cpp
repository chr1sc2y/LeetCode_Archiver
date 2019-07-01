class Solution {
public:
    int repeatedNTimes(vector<int> &A) {
        unordered_set<int> s;
        for (auto a:A) {
            if (s.find(a) == s.end())
                s.insert(a);
            else
                return a;
        }
    }
};
