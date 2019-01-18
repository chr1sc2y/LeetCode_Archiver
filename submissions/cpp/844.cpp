class Solution {
public:
\u0009bool backspaceCompare(string S, string T) {
\u0009\u0009vector<char> s, t;
\u0009\u0009for (int i = 0; i < S.length(); ++i) {
\u0009\u0009\u0009if (S[i] != \u0027#\u0027)
\u0009\u0009\u0009\u0009s.push_back(S[i]);
\u0009\u0009\u0009else
\u0009\u0009\u0009\u0009if(!s.empty())
\u0009\u0009\u0009\u0009\u0009s.pop_back();
\u0009\u0009}
\u0009\u0009for (int j = 0; j < T.length(); ++j) {
\u0009\u0009\u0009if (T[j] != \u0027#\u0027)
\u0009\u0009\u0009\u0009t.push_back(T[j]);
\u0009\u0009\u0009else
\u0009\u0009\u0009\u0009if (!t.empty())
\u0009\u0009\u0009\u0009\u0009t.pop_back();
\u0009\u0009}
\u0009\u0009return s == t;
\u0009}
};
