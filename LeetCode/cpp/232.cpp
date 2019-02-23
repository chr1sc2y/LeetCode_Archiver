class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        while (!utility.empty()) {
            int temp = utility.top();
            utility.pop();
            reserve.push(temp);
        }
        utility.push(x);
        while (!reserve.empty()) {
            int temp = reserve.top();
            reserve.pop();
            utility.push(temp);
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp = utility.top();
        utility.pop();
        return temp;
    }

    /** Get the front element. */
    int peek() {
        return utility.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return utility.empty();
    }

private:
    stack<int> utility, reserve;
};