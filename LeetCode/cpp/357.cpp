class Solution {
public:
	int countNumbersWithUniqueDigits(int n) {
		std::vector<int> unique;
		unique.push_back(1);
		int sum = 1;
		for (int i = 1; i <= n; ++i) {
			int uni = 9;
			for (int j = 1; j < i; ++j)
				uni *= (10 - j);
			sum += uni;
			unique.push_back(sum);
		}
		return unique[n];
	}
};