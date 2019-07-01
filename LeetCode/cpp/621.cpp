class Solution {
public:
    int leastInterval(vector<char> &tasks, int n) {
        unordered_map<char, int> task_map;
        for (auto t: tasks) {
            ++task_map[t];
        }
        int max_num = 0, max_len = 0;
        for (auto t: task_map)
            max_num = max(max_num, t.second);
        for (auto t:task_map) {
            if (t.second == max_num)
                ++max_len;
        }
        return std::max((max_num - 1) * (n + 1) + max_len, int(tasks.size()));
    }
};
