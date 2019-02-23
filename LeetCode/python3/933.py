class RecentCounter:

    def __init__(self):
        self.time = []
        self.i, self.j = 0, 0

    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """
        self.j += 1
        self.time.append(t)
        while self.i < self.j:
            if self.time[self.j - 1 ] - self.time[self.i] <= 3000:
                break
            self.i += 1
        return self.j-self.i
