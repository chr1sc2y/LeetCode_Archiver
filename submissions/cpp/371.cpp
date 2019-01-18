class Solution {
public:
\u0009int getSum(int a, int b) {
\u0009\u0009int sum = a;
\u0009\u0009while (b != 0) {
\u0009\u0009\u0009sum = a ^ b;
\u0009\u0009\u0009b = (a & b) << 1;
\u0009\u0009\u0009a = sum;
\u0009\u0009}
\u0009\u0009return sum;
\u0009}
};
