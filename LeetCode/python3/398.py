class Solution(object):

    def __init__(self, nums):
        self.nums = nums
        

    def pick(self, target):
        return random.choice([k for k, v in enumerate(self.nums) if v == target])