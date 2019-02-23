class KthLargest {
    priority_queue<int, vector<int>, greater<int>> p;
    int k;
public:
    KthLargest(int k, vector<int> nums) {
        this->k = k;
        for (auto m: nums) {
            if (p.size() < k || p.top() < m)
                p.push(m);
            if (p.size() > k)
                p.pop();
        }
    }

    int add(int val) {
        if (p.size() < k || p.top() < val)
            p.push(val);
        if (p.size() > k)
            p.pop();
        return p.top();
    }
};