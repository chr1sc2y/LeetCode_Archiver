
class Solution {
public:
	int integerBreak(int n) {
		if (n == 2) return 1;
		else if (n == 3) return 2;
		std::vector<int> maxProduct;
		maxProduct.push_back(0);	//maxProduct[0]
		maxProduct.push_back(1);	//maxProduct[1]
		maxProduct.push_back(2);	//maxProduct[2]
		maxProduct.push_back(3);	//maxProduct[3]
		maxProduct.push_back(4);	//maxProduct[4]
		for (int i = 5; i <= n; ++i) {
			int max = 0;
			for (int j = 1; j < i / 2 + 1; ++j) {
				int sub = i - j;
				int temp = maxProduct[j] * maxProduct[sub];
				max = max < temp ? temp : max;
			}
			maxProduct.push_back(max);
		}
		return maxProduct[n];
	}
};