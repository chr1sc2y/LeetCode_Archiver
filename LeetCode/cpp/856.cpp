class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> s;
        s.push(0);
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] == '(')
                s.push(0);
            else {
                int j = s.top();
                s.pop();
                s.top() += max(2 * j, 1);
            }
        }
        return s.top();
    }
};
