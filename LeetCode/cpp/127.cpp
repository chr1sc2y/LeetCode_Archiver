class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList) {
        int n = beginWord.size(), count = 0;
        if (n != endWord.size())
            return 0;
        unordered_map<string, bool> words;
        for (auto &l:wordList)
            words[l] = true;
        queue<string> que;
        int size = 1;
        que.push(beginWord);
        string word = que.front();
        while (!que.empty()) {
            word = que.front();
            if (word == endWord)
                break;
            que.pop();
            for (int i = 0; i < word.size(); ++i) {
                string temp = word;
                for (int j = 0; j < 26; ++j) {
                    if ('a' + j == word[i])
                        continue;
                    temp[i] = 'a' + j;
                    if (words.find(temp) != words.end()) {
                        que.push(temp);
                        words.erase(temp);
                    }
                }
            }
            --size;
            if (size == 0) {
                size = que.size();
                ++count;
            }
        }
        return word == endWord ? count + 1 : 0;
    }
};