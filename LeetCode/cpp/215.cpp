class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        priority_queue<int, vector<int>, greater<>> min_heap;
        for (auto &m : nums) {
            if (min_heap.size() < k || min_heap.top() < m)
                min_heap.push(m);
            if (min_heap.size() > k)
                min_heap.pop();
        }
        return min_heap.top();
    }
};
