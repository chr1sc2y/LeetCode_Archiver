class Solution {
public:
	bool canVisitAllRooms(vector<vector<int>>& rooms) {
		vector<int> locked;
		int size = rooms.size();
		locked.push_back(0);
		for (int i = 1; i < size; ++i)
			locked.push_back(1);
		for (int i = 0; i < rooms[0].size(); ++i) {
			locked[rooms[0][i]] = 0;
			unlock(rooms[0][i], rooms, locked);
		}
		for (int i = 0; i < size; ++i)
			if (locked[i] == 1)
				return false;
		return true;
	}

	void unlock(int k, vector<vector<int>>& rooms, vector<int>& locked) {
		for (int i = 0; i < rooms[k].size(); ++i) {
			if (locked[rooms[k][i]] == 1) {
				locked[rooms[k][i]] = 0;
				unlock(rooms[k][i], rooms, locked);
			}
		}
	}
};
