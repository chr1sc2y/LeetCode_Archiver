class Solution {
public:
\u0009bool canVisitAllRooms(vector<vector<int>>& rooms) {
\u0009\u0009vector<int> locked;
\u0009\u0009int size = rooms.size();
\u0009\u0009locked.push_back(0);
\u0009\u0009for (int i = 1; i < size; ++i)
\u0009\u0009\u0009locked.push_back(1);
\u0009\u0009for (int i = 0; i < rooms[0].size(); ++i) {
\u0009\u0009\u0009locked[rooms[0][i]] = 0;
\u0009\u0009\u0009unlock(rooms[0][i], rooms, locked);
\u0009\u0009}
\u0009\u0009for (int i = 0; i < size; ++i)
\u0009\u0009\u0009if (locked[i] == 1)
\u0009\u0009\u0009\u0009return false;
\u0009\u0009return true;
\u0009}

\u0009void unlock(int k, vector<vector<int>>& rooms, vector<int>& locked) {
\u0009\u0009for (int i = 0; i < rooms[k].size(); ++i) {
\u0009\u0009\u0009if (locked[rooms[k][i]] == 1) {
\u0009\u0009\u0009\u0009locked[rooms[k][i]] = 0;
\u0009\u0009\u0009\u0009unlock(rooms[k][i], rooms, locked);
\u0009\u0009\u0009}
\u0009\u0009}
\u0009}
};
