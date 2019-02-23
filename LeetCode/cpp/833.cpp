/*
class Solution {
public:
	string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
		string s = S;
		int offset = 0;
		sort(indexes.begin(), indexes.end());
		for (int i = 0; i < indexes.size(); ++i) {
			int current = indexes[i];
			for (int j = 0; j < sources.size(); ++j) {
				if (S.substr(current,sources[j].size()).find(sources[j]) != string::npos) {
					s.replace(current + offset, sources[j].size(), targets[j]);
					offset += (targets[j].length() - sources[j].length());
					break;
				}
			}
            cout << s << endl;
		}
		return s;
	}
};
*/

class Solution {
public:
string findReplaceString(string S, vector<int>& idx, vector<string>& src, vector<string>& tgs) {
  map<int, pair<int, string>, greater<int>> m;
  for (auto i = 0; i < idx.size(); ++i) 
    if (S.find(src[i], idx[i]) == idx[i]) m[idx[i]] = { src[i].size(), tgs[i] };
  for (auto r : m) S.replace(r.first, r.second.first, r.second.second);
  return S;
}
};