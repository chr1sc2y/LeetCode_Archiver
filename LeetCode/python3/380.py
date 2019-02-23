import random


class RandomizedSet:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.D = {}
        self.L = []

    def insert(self, val):
        """
        Inserts a value to the set. Returns true if the set did not already contain the specified element.
        :type val: int
        :rtype: bool
        """
        if val not in self.D:
            self.L.append(val)
            self.D[val] = len(self.L) - 1
            return True
        return False

    def remove(self, val):
        """
        Removes a value from the set. Returns true if the set contained the specified element.
        :type val: int
        :rtype: bool
        """
        if val in self.D:
            last = self.L[-1]
            self.D[last] = self.D[val]
            self.L[self.D[last]] = last
            self.L.pop()
            del self.D[val]
            return True
        return False

    def getRandom(self):
        """
        Get a random element from the set.
        :rtype: int
        """
        return self.L[random.randint(0, len(self.L) - 1)]


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
