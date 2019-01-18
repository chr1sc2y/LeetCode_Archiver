class Solution {
public:
\u0009int integerBreak(int n) {
\u0009\u0009if (n == 2) return 1;
\u0009\u0009else if (n == 3) return 2;
\u0009\u0009std::vector<int> maxProduct;
\u0009\u0009maxProduct.push_back(0);\u0009//maxProduct[0]
\u0009\u0009maxProduct.push_back(1);\u0009//maxProduct[1]
\u0009\u0009maxProduct.push_back(2);\u0009//maxProduct[2]
\u0009\u0009maxProduct.push_back(3);\u0009//maxProduct[3]
\u0009\u0009maxProduct.push_back(4);\u0009//maxProduct[4]
\u0009\u0009for (int i = 5; i <= n; ++i) {
\u0009\u0009\u0009int max = 0;
\u0009\u0009\u0009for (int j = 1; j < i / 2 + 1; ++j) {
\u0009\u0009\u0009\u0009int sub = i - j;
\u0009\u0009\u0009\u0009int temp = maxProduct[j] * maxProduct[sub];
\u0009\u0009\u0009\u0009max = max < temp ? temp : max;
\u0009\u0009\u0009}
\u0009\u0009\u0009maxProduct.push_back(max);
\u0009\u0009}
\u0009\u0009return maxProduct[n];
\u0009}
};