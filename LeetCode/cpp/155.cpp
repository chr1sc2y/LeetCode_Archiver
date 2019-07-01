class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        normalStack.push(x);
        if (minStack.empty() || minStack.top() >= x)
            minStack.push(x);
    }

    void pop() {
        if (normalStack.top() == minStack.top())
            minStack.pop();
        normalStack.pop();
    }

    int top() {
        return normalStack.top();
    }

    int getMin() {
        return minStack.top();
    }

private:
    stack<int> normalStack;
    stack<int> minStack;
};