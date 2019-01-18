class Solution {
public:
    int numRescueBoats(vector<int> &people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1, n = 0;
        while (i <= j) {
            int weight = people[j];
            if (weight + people[i] <= limit && i <= j) {
                weight += people[i];
                ++i;
            }
            --j;
            ++n;
        }
        return n;
    }
};