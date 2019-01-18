class Solution {
public:
\u0009int countNumbersWithUniqueDigits(int n) {
\u0009\u0009std::vector<int> unique;
\u0009\u0009unique.push_back(1);
\u0009\u0009int sum = 1;
\u0009\u0009for (int i = 1; i <= n; ++i) {
\u0009\u0009\u0009int uni = 9;
\u0009\u0009\u0009for (int j = 1; j < i; ++j)
\u0009\u0009\u0009\u0009uni *= (10 - j);
\u0009\u0009\u0009sum += uni;
\u0009\u0009\u0009unique.push_back(sum);
\u0009\u0009}
\u0009\u0009return unique[n];
\u0009}
};