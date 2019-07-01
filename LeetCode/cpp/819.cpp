class Solution {
public:
    string mostCommonWord(string paragraph, vector<string> &banned) {
        int start = 0, end = 0;
        unordered_map<string, int> counter;
        unordered_set<string> ban(banned.begin(), banned.end());
        while (end < paragraph.size()) {
            while ((tolower(paragraph[end]) < 'a' || tolower(paragraph[end]) > 'z') && end < paragraph.size())
                ++end;
            char curr = paragraph[end];
            string str;
            while (tolower(paragraph[end]) >= 'a' && tolower(paragraph[end]) <= 'z' && end < paragraph.size()) {
                str += tolower(paragraph[end]);
                ++end;
            }
            if (ban.find(str) == ban.end())
                ++counter[str];
            start = end + 1;
            end = start;
        }
        string most_commont;
        int count = 0;
        for (auto &str : counter) {
            if (str.second > count) {
                most_commont = str.first;
                count = str.second;
            }
        }
        return most_commont;
    }
};
