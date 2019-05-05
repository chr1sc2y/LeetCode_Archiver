class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int plus1 = a.find('+'), end1 = a.find('i');
        int x1 = stoi(a.substr(0, plus1)), y1 = stoi(a.substr(plus1 + 1, end1 - plus1 - 1));
        int plus2 = b.find('+'), end2 = b.find('i');
        int x2 = stoi(b.substr(0, plus2)), y2 = stoi(b.substr(plus2 + 1, end2 - plus2 - 1));
        int x3 = x1 * x2 + y1 * y2 * -1, y3 = x1 * y2 + x2 * y1;
        return to_string(x3) + '+' + to_string(y3) + 'i';
    }
};
