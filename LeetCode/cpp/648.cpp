class Solution {
public:
    string replaceWords(vector<string> &dict, string sentence) {
        unordered_set<string> d(dict.begin(), dict.end());
        sentence += ' ';
        int start = 0, end = sentence.find(' ');
        while (end != -1) {
            string str = sentence.substr(start, end - start);
            for (int i = 0; i < str.size(); ++i) {
                if (d.find(str.substr(0, i + 1)) != d.end()) {
                    sentence.replace(sentence.begin() + start, sentence.begin() + end, str.substr(0, i + 1));
                    end = start + i + 1;
                    break;
                }
            }
            start = end + 1;
            end = sentence.find(' ', start);
        }
        sentence.erase(sentence.end() - 1);
        return sentence;
    }
};
