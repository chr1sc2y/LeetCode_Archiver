class Solution {
public:
\u0009string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
\u0009\u0009string s = S;
\u0009\u0009int offset = 0;
\u0009\u0009sort(indexes.begin(), indexes.end());
\u0009\u0009for (int i = 0; i < indexes.size(); ++i) {
\u0009\u0009\u0009int current = indexes[i];
\u0009\u0009\u0009for (int j = 0; j < sources.size(); ++j) {
\u0009\u0009\u0009\u0009if (S.substr(current,sources[j].size()).find(sources[j]) != string::npos) {
\u0009\u0009\u0009\u0009\u0009s.replace(current + offset, sources[j].size(), targets[j]);
\u0009\u0009\u0009\u0009\u0009offset += (targets[j].length() - sources[j].length());
\u0009\u0009\u0009\u0009\u0009break;
\u0009\u0009\u0009\u0009}
\u0009\u0009\u0009}
            cout << s << endl;
\u0009\u0009}
\u0009\u0009return s;
\u0009}
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