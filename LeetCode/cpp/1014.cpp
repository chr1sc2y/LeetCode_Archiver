class Solution {
public:
    int shipWithinDays(vector<int> &weights, int D) {
        int low = 1, high = 25000000, mid = 0;
        while (low < high) {
            mid = low + (high - low) / 2;
            if (Shippable(weights, mid, D))
                high = mid;
            else
                low = mid + 1;
        }
        return high;
    }

    int Shippable(vector<int> &weights, int &capacity, int &D) {
        int i = 0, day = 1;
        while (i < weights.size() && day <= D) {
            int residual = capacity;
            while (i < weights.size() && residual - weights[i] >= 0) {
                residual -= weights[i];
                ++i;
            }
            if (i >= weights.size())
                return true;
            ++day;
        }
        return false;
    }
};
