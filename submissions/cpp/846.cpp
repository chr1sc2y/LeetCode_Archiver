class Solution {
public:
\u0009bool isNStraightHand(vector<int>& hand, int W) {
\u0009\u0009map<int, int> group;
\u0009\u0009for (int i = 0; i < hand.size(); ++i)
\u0009\u0009\u0009++group[hand[i]];
\u0009\u0009while (!group.empty())
\u0009\u0009{
\u0009\u0009\u0009int currentCard = group.begin()->first;
\u0009\u0009\u0009for (int i = 1; i < W; ++i) {
\u0009\u0009\u0009\u0009auto iter = group.find(currentCard + i);
\u0009\u0009\u0009\u0009if (iter != group.end()) {
\u0009\u0009\u0009\u0009\u0009--group[currentCard + i];
\u0009\u0009\u0009\u0009\u0009if (group[currentCard + i] == 0)
\u0009\u0009\u0009\u0009\u0009\u0009group.erase(currentCard + i);
\u0009\u0009\u0009\u0009}
\u0009\u0009\u0009\u0009else
\u0009\u0009\u0009\u0009\u0009return false;
\u0009\u0009\u0009}
\u0009\u0009\u0009--group[currentCard];
\u0009\u0009\u0009if (group[currentCard] == 0)
\u0009\u0009\u0009\u0009group.erase(currentCard);
\u0009\u0009}
\u0009\u0009return true;
\u0009}
};