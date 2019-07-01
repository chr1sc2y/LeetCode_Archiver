class RecentCounter {
public:
    vector<int> time;
    int i, j;

    RecentCounter() {
        time = vector<int>();
        i = 0;
        j = 0;
    }

    int ping(int t) {
        ++j;
        time.push_back(t);
        while (i < j) {
            if (time[j - 1] - time[i] <= 3000)
                break;
            ++i;
        }
        return j - i;
    }
};
