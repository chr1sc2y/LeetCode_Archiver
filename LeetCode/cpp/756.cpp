class Solution {
public:
    bool pyramidTransition(string bottom, vector<string> &allowed) {
        unordered_map<char, vector<string>> tuple;
        for (auto &a:allowed)
            tuple[a[0]].push_back(a);
        string upper;
        return DFS(bottom, upper, tuple);
    }

    bool DFS(string bot, string upper, unordered_map<char, vector<string>> &tuple) {
        if (bot.size() <= 1) {
            if (upper.size() <= 1)
                return true;
            bot = upper;
            upper.clear();
        }
        auto s = bot[0];
        bot.erase(bot.begin());
        for (auto l:tuple[s]) {
            if (l[1] == bot[0]) {
                upper.push_back(l[2]);
                if (DFS(bot, upper, tuple))
                    return true;
                upper.pop_back();
            }
        }
        return false;
    }
};