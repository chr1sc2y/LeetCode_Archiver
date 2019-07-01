class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, n = s.size(), temp = 0;
        unordered_map<char, int> symbol;
        symbol.insert(pair<char, int>('I', 1));
        symbol.insert(pair<char, int>('V', 5));
        symbol.insert(pair<char, int>('X', 10));
        symbol.insert(pair<char, int>('L', 50));
        symbol.insert(pair<char, int>('C', 100));
        symbol.insert(pair<char, int>('D', 500));
        symbol.insert(pair<char, int>('M', 1000));
        for (int i = 0; i < n; ++i) {
            while (i < n - 1 && symbol[s[i]] < symbol[s[i + 1]]) {
                temp += symbol[s[i]];
                ++i;
            }
            sum += symbol[s[i]] - temp;
            temp = 0;
        }
        return sum;
    }
};
