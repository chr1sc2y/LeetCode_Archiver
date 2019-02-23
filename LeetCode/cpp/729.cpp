class MyCalendar {
public:
    MyCalendar() {
        schedule = set<vector<int>>();
    }

    bool book(int start, int end) {
        for (auto iter: schedule) {
            if (max(iter[0], start) < min(iter[1], end))
                return false;
        }
        schedule.insert(vector<int>{start, end});
        return true;
    }

private:
    set<vector<int>> schedule;
};
