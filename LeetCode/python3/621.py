class Solution:
    def leastInterval(self, tasks, n):
        """
        :type tasks: List[str]
        :type n: int
        :rtype: int
        """
        task = list(collections.Counter(tasks).values())
        value = max(task)
        num = task.count(value)
        return max((value-1) * (n+1) + num, len(tasks))