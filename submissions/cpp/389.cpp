class Solution {
public:
    char findTheDifference(string s, string t) {
        char sumS = 0, sumT = 0;
        for(int i = 0; i < s.size(); ++i) {
            sumS += s[i];
            sumT += t[i];
        }
        return sumT + t[s.size()] -sumS;
    }
};