class TopVotedCandidate {
    unordered_map<int, int> candidates;
    vector<int> times;
public:
    TopVotedCandidate(vector<int> &persons, vector<int> &times) {
        int n = persons.size();
        candidates = unordered_map<int, int>();
        vector<int> votes(n, 0);
        this->times = times;
        int max_person = -1, max_vote = 0;
        for (int i = 0; i < n; ++i) {
            ++votes[persons[i]];
            if (votes[persons[i]] >= max_vote) {
                max_vote = votes[persons[i]];
                max_person = persons[i];
            }
            candidates[times[i]] = max_person;
        }
    }

    int q(int t) {
        int i = 0;
        while (i < times.size() && times[i] <= t)
            ++i;
        return candidates[times[i - 1]];
//        int low = 0, high = times.size() - 1, mid = 0;
//        while (low < high) {
//            mid = low + (high - low) / 2;
//            if (times[mid] > t)
//                high = mid - 1;
//            else {
//                if (low == mid)
//                    break;
//                low = mid;
//            }
//        }
//        return candidates[times[low]];
    }
};
