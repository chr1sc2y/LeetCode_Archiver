class Solution {
public:
\u0009vector<vector<int>> largeGroupPositions(string S) {
\u0009\u0009vector<vector<int>> ret;
\u0009\u0009for (int i = 0; i < S.size(); ++i) {
\u0009\u0009\u0009vector<int> temp;
\u0009\u0009\u0009char current = S[i];
\u0009\u0009\u0009int count = 1, j = i;
\u0009\u0009\u0009while (j + 1 < S.size() && S[j + 1] == S[j]) {
\u0009\u0009\u0009\u0009++count; 
\u0009\u0009\u0009\u0009++j;
\u0009\u0009\u0009}
\u0009\u0009\u0009if (count >= 3) {
\u0009\u0009\u0009\u0009temp.push_back(i);
\u0009\u0009\u0009\u0009temp.push_back(i + count - 1);
\u0009\u0009\u0009\u0009ret.push_back(temp);
\u0009\u0009\u0009}
\u0009\u0009\u0009i += count - 1;
            cout << j << endl;
\u0009\u0009}
\u0009\u0009return ret;
\u0009}
};