class Solution {
public:
	string pushDominoes(string dominoes) {
		int length = dominoes.length();
		string ret;
		int start = 0;
		for (int i = 0; i <= length; ++i) {	//".L.R."
			if (dominoes[i] == 'L') {
				for (int j = start; j <= i; ++j)
					ret.push_back('L');
				start = i + 1;
			}
			else if (dominoes[i] == 'R') {
				ret.append(i - start, '.');
				int j = i + 1;
				while (j <= length) {
					if (j == length) {
						ret.append(j - i, 'R');
						i = j + 1;
						break;
					}
					else if (dominoes[j] == 'L') {
						int l = j - i;
						if (l % 2 == 0) {
							ret.append(l / 2, 'R');
							ret.push_back('.');
							ret.append(l / 2, 'L');
						}
						else {
							ret.append(l / 2 + 1, 'R');
							ret.append(l / 2 + 1, 'L');
						}
						i = j;
						start = j + 1;
						break;
					}
					else if (dominoes[j] == 'R')
					{
						ret.append(j - i, 'R');
						i = j - 1;
						start = j;
						break;
					}
					++j;
				}
			}
			if (i == length)
				ret.append(i - start, '.');
		}
		return ret;
	}
};
