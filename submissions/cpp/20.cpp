class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for (char c:s) {
            if (!parentheses.empty()) {
                char first = parentheses.top(), second = c;
                if (first == \u0027(\u0027) {
                    if (second == \u0027)\u0027)
                        parentheses.pop();
                    else if (second == \u0027]\u0027 || second == \u0027}\u0027)
                        return false;
                    else
                        parentheses.push(second);
                } else if (first == \u0027[\u0027) {
                    if (second == \u0027]\u0027)
                        parentheses.pop();
                    else if (second == \u0027)\u0027 || second == \u0027}\u0027)
                        return false;
                    else
                        parentheses.push(second);
                } else if (first == \u0027{\u0027) {
                    if (second == \u0027}\u0027)
                        parentheses.pop();
                    else if (second == \u0027)\u0027 || second == \u0027]\u0027)
                        return false;
                    else
                        parentheses.push(second);
                }
            } else
                parentheses.push(c);
        }
        if(!parentheses.empty())
            return false;
        return true;
    }
};