class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>> &people) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> people_map;
        vector<int> people_set;
        for (auto &p:people) {
            if (people_map.find(p[0]) == people_map.end())
                people_set.push_back(p[0]);
            people_map[p[0]].push_back(p[1]);
        }
        sort(people_set.begin(), people_set.end());
        for (auto p = people_set.rbegin(); p < people_set.rend(); ++p) {
            sort(people_map[*p].begin(), people_map[*p].end());
            for (int j = 0; j < people_map[*p].size(); ++j)
                res.insert(res.begin() + people_map[*p][j],
                           vector<int>{*p, people_map[*p][j]});
        }
        return res;
    }
};
