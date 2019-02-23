class Solution {
public:
	bool isNStraightHand(vector<int>& hand, int W) {
		map<int, int> group;
		for (int i = 0; i < hand.size(); ++i)
			++group[hand[i]];
		while (!group.empty())
		{
			int currentCard = group.begin()->first;
			for (int i = 1; i < W; ++i) {
				auto iter = group.find(currentCard + i);
				if (iter != group.end()) {
					--group[currentCard + i];
					if (group[currentCard + i] == 0)
						group.erase(currentCard + i);
				}
				else
					return false;
			}
			--group[currentCard];
			if (group[currentCard] == 0)
				group.erase(currentCard);
		}
		return true;
	}
};