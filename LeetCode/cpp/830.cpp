class Solution {
public:
	vector<vector<int>> largeGroupPositions(string S) {
		vector<vector<int>> ret;
		for (int i = 0; i < S.size(); ++i) {
			vector<int> temp;
			char current = S[i];
			int count = 1, j = i;
			while (j + 1 < S.size() && S[j + 1] == S[j]) {
				++count; 
				++j;
			}
			if (count >= 3) {
				temp.push_back(i);
				temp.push_back(i + count - 1);
				ret.push_back(temp);
			}
			i += count - 1;
            cout << j << endl;
		}
		return ret;
	}
};