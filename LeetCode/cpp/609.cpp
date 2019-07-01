class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string> &paths) {
        vector<vector<string>> ret;
        unordered_map<string, vector<string>> duplicate_files;
        for (auto &s:paths) {
            s += ' ';
            int start = 0;
            int space = s.find(' ', start);
            string path = s.substr(0, space) + '/';
            start = space + 1;
            while (s.find(' ', start) != string::npos) {
                string str = s.substr(start, s.find(' ', start) - start);
                int parentheses = str.find('(');
                string content = str.substr(parentheses + 1, str.find(')') - parentheses - 1);
                string file = path + str.substr(0, parentheses);
                if (duplicate_files.find(content) == duplicate_files.end())
                    duplicate_files.insert(pair<string, vector<string>>(content, vector<string>()));
                duplicate_files[content].push_back(file);
                start += str.size() + 1;
            }
        }
        for (auto &iter:duplicate_files) {
            if (iter.second.size() > 1)
                ret.push_back(iter.second);
        }
        return ret;
    }
};
