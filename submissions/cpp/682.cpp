class Solution {
public:
    int calPoints(vector<string> &ops) {
        stack<int> points;
        int sum = 0;
        for (int i = 0; i < ops.size(); ++i) {
            if (ops[i] == "C")
                points.pop();
            else if (ops[i] == "D")
                points.push(points.top() * 2);
            else if (ops[i] == "+") {
                int temp = points.top();
                points.pop();
                int plus = points.top() + temp;
                points.push(temp);
                points.push(plus);
            } else
                points.push(stoi(ops[i]));
        }
        while (!points.empty()) {
            sum += points.top();
            points.pop();
        }
        return sum;
    }
};