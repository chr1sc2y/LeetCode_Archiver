class Solution {
public:
    int uniqueMorseRepresentations(vector<string> &words) {
        vector<string> morse{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
                             "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
                             "--.."};
        map<string, int> uni;
        for (int i = 0; i < words.size(); ++i) {
            string temp;
            for (int j = 0; j < words[i].size(); ++j)
                temp += morse[words[i][j] - 'a'];
            if (uni.find(temp) == uni.end())
                uni.insert(map<string, int>::value_type(temp, 1));
            else
                ++uni[temp];
        }
        return uni.size();
    }
};