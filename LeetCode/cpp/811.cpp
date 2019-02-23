class Solution {
public:
    vector<string> subdomainVisits(vector<string> &cpdomains) {
        unordered_map<string, int> visit;
        for (auto current: cpdomains) {
            int space = current.find(" ");
            int num = stoi(current.substr(0, space));
            current = current.substr(space + 1, current.size());
            int start = -1;
            do {
                current = current.substr(start + 1, current.size());
                if (visit.find(current) == visit.end())
                    visit.insert(pair<string, int>(current, num));
                else
                    visit[current] += num;
            } while ((start = current.find(".")) != string::npos);
        }
        vector<string> ret;
        for (auto v : visit)
            ret.push_back(to_string(v.second) + " " + v.first);
        return ret;
    }
};