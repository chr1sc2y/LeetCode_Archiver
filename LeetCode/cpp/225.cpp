class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        reserve.push(x);
        while (!utility.empty()) {
            int temp = utility.front();
            utility.pop();
            reserve.push(temp);
        }
        queue<int> tempQueue = reserve;
        reserve = utility;
        utility = tempQueue;
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = utility.front();
        utility.pop();
        return temp;
    }

    /** Get the top element. */
    int top() {
        return utility.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return utility.empty();
    }

private:
    queue<int> utility, reserve;
};
