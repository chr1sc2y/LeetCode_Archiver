class Solution:
    def nextLargerNodes(self, head: ListNode) -> List[int]:
        nums = []
        while head:
            nums.append(head.val)
            head = head.next
        n = len(nums)
        ret = [0 for _ in range(n)]
        max_stack = []
        for i in range(n - 1, -1, -1):
            while (len(max_stack) > 0 and max_stack[-1] <= nums[i]):
                max_stack.pop()
            ret[i] = 0 if len(max_stack) == 0 else max_stack[-1]
            max_stack.append(nums[i])
        return ret
