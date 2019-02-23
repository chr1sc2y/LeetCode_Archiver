class MyCalendarTwo:
    calendar = []
    doubleCalendar = []

    def __init__(self):
        self.calendar = []
        self.doubleCalendar = []

    def book(self, start, end):
        """
        :type start: int
        :type end: int
        :rtype: bool
        """
        for i, j in self.doubleCalendar:
            if end > i and start < j:
                return False
        for i,j in self.calendar:
            if end > i and start < j:
                self.doubleCalendar.append([max(start, i), min(end, j)])
        self.calendar.append([start, end])
        return True
