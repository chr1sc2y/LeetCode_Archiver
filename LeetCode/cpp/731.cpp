class MyCalendarTwo {
public:
    std::vector<std::vector<int>> calendar, doubleCalendar;

    MyCalendarTwo() {
        calendar = std::vector<std::vector<int>>();
        doubleCalendar = std::vector<std::vector<int>>();
    }

    bool book(int start, int end) {
        for (auto iter:doubleCalendar) {
            if (start < iter[1] && end > iter[0])
                return false;
        }
        for (auto iter:calendar) {
            if (end > iter[0] && start < iter[1])
                doubleCalendar.push_back({std::max(start, iter[0]), std::min(end, iter[1])});
        }
        calendar.push_back({start, end});
        return true;
    }
};
